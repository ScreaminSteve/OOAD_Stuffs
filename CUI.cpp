/**
 * @(#) CUI.cpp
 */


#include "CUI.h"

CUI::CUI() {
    //yo, WTF sollte das Login im Konstruktor? dadurch kannst du dich nicht anmelden, einfach weil noch nichts geladen wurde!
}

CUI::~CUI() {

}

void CUI::init() {
    

    //Login Info txt einlesen und Benutzer::Benutzer erstellen
    ifstream userList("logininfo.conf");
    string name, pw;
    int isAdmin;
    //cout << "begin reading" << endl;
    if (!userList) throw runtime_error("Faulty Userconfig");
    while (!(userList.eof())) {
        userList >> name >> pw >> isAdmin;
        user.push_back(new Benutzer{name, pw, isAdmin});
        //cout << "user read" << endl;
    }
    cout << endl << "Console ready" << endl << endl;
}

//überprüft gültigkeit des eingegebenen username/pw

bool CUI::checkUserList(string name, string pw) {

    for (int i = 0; i < user.size(); i++) {
        if (user.at(i)->GetName() == name && user.at(i)->GetPasswort() == pw) {
            return true;
        }
    }
    return false;

}

void CUI::login() {

    /*cout << "Vector unload" << endl;
    for (int i = 0; i < user.size(); i++) {
        cout << "name: " << user.at(i)->GetName();
        cout << endl << "pw: " << user.at(i)->GetPasswort();
        cout << endl << "isadmin: " << user.at(i)->IsAdmin();
        cout << endl;
    }
    cout << endl << endl;
     */

    string username{};
    string password{};

    //Eingabe aufforderung
    cout << "Login (q to quit)" << endl << "Username: ";
    if (!(cin >> username)) {
        throw runtime_error("Ending Program.");
    }

    if (username == "q") {
        cout << endl << "Ending Program." << endl;
        terminate();
    }

    cout << endl << "Password: ";
    if (!(cin >> password)) {
        throw runtime_error("Invalid Password Input");
    }

    bool isUser = checkUserList(username, password);

    if (isUser == false) {
        cout << endl << "Invalid Username or Password" << endl;
        login();
    }

    //Login successfull
    isLoggedIn = true;
    cout << endl << "Welcome " << username << endl;
    showMenu();

}

void CUI::logout() {
    isLoggedIn = false;
    cout << endl << "Logged Out." << endl;
    login();
}

void CUI::showMenu() {
    
    //Um auf das letzte Meeting objekt zuzugreifen
    //Dh *nur* das letzte Meeting Objekt im vector kann verändert werden
    int meetingObject = createdMeetings.size();
    
    cout << endl << endl << "__________________________________________" << endl << endl;
    cout << "What would you like to do next?" << endl << endl;

    //Menu Output
    cout << "(0) - Log out" << endl
            << "(1) - Create New Meeting" << endl
            << "(2) - Change Meeting Time" << endl
            << "(3) - Change Meeting Duration" << endl
            << "(4) - Change Meeting Room" << endl
            << "(5) - Delete Meeting" << endl
            << "(6) - Book Equipment" << endl
            << "(7) - Book Catering" << endl
            << "(8) - Invite Coworkers" << endl
            << "(9) - Display Meeting Information" << endl << endl;

    //Menu Input
    int menuInput{};

    if (!(cin >> menuInput)) {
        throw runtime_error("Invalid Menu Input");
    }

    //Menu Input successfull
    switch (menuInput) {
        case 0:
            logout(); //Logged user aus
            break;
        case 1:
            createMeeting(); //Neues Meeting anlegen
            break;
        case 2:
            inputTime(meetingObject); //Setzt neue Zeit für Meeting
            break;
        case 3:
            inputDuration(meetingObject); //Setzt neue Zeit für Meeting
            break;
        case 4:
            inputRoom(meetingObject); //Setzt neue Zeit für Meeting
            break;
        case 5:
            if(meetingObject <= 0){
                cout << endl << "Create a Meeting first to be able to edit your meeting." << endl;
            } else {
                createdMeetings.pop_back(); //"Löschen" pop't einfach das zuletzt erstellte meeting
                cout << endl << "Most recent meeting deleted." << endl;
            }
            showMenu();
            break;
        case 6:
            inputEquipment(meetingObject); //Setzt equipment
            break;
        case 7:
            inputCatering(meetingObject); //Setzt catering
            break;
        case 8:
            inviteCoWorkers(meetingObject); //Mitarbeiter einladen
            break;
        case 9:
            displayMeeting(meetingObject);  //Meeting Infos anzeigen
            break;
        default:
            cout << "Invalid input. Try again";
            showMenu();
            break;
    }
}

void CUI::createMeeting() {
    fromNewMeeting = true;
    
    Meeting newMeeting;             //Neues Meeting Objekt erstellen
    createdMeetings.push_back(newMeeting);  //Auf dem Meeting-Vector pushen
    int amountOfMeetings = createdMeetings.size();      //Greift auf das neuste Meeting objekt im Vector zum übergeben an funktionen
    
    /*Call'd alles um alles ein mal durchzugehen
     * wenn ein meeting neu erstellt wird
     */
    inputTheme(amountOfMeetings);
    inputTime(amountOfMeetings);
    inputDuration(amountOfMeetings);
    inputRoom(amountOfMeetings);
    inputEquipment(amountOfMeetings);
    inputCatering(amountOfMeetings);
    inviteCoWorkers(amountOfMeetings);
    
    cout << endl << "Meeting Created and Set." << endl;
    
    fromNewMeeting = false;
    showMenu();
}

void CUI::inputCatering(int meeting) {
    if(meeting <= 0){
        cout << endl << "Create a Meeting first to be able to edit your meeting." << endl;
        showMenu();
        return;
    }
    
    cout << endl << "Would you like to book catering for the meeting? (y = yes, n = no)" << endl;
    bool needsCatering{};
    string cateringInput{};
    if (!(cin >> cateringInput)) {
        throw runtime_error("Invalid Input");
    }

    if (cateringInput == "y") {
        needsCatering = true;
    } else if (cateringInput == "n") {
        needsCatering = false;
    } else {
        needsCatering = false;
    }

    createdMeetings.at(meeting - 1).setCatering(needsCatering);
    
    if(fromNewMeeting == false){
        showMenu();
    }
}

void CUI::inputRoom(int meeting) {
    if(meeting <= 0){
        cout << endl << "Create a Meeting first to be able to edit your meeting." << endl;
        showMenu();
        return;
    }
    
    int building{}, number{};

    cout << endl << "In which Building will the meeting be taking place?" << endl;
    if (!(cin >> building)) {
        throw runtime_error("Invalid Input");
    }
    cout << endl << "In which Room will the meeting be taking place?" << endl;
    if (!(cin >> number)) {
        throw runtime_error("Invalid Input");
    }

    createdMeetings.at(meeting - 1).setRoom(building, number);
    
    if(fromNewMeeting == false){
        showMenu();
    }
}

void CUI::inputEquipment(int meeting) {
    if(meeting <= 0){
        cout << endl << "Create a Meeting first to be able to edit your meeting." << endl;
        showMenu();
        return;
    }
    
    vector<bool> inputEquip{};
    cout << endl << "Fill out the list of equipment that you need for the meeting. \nInput y = yes, n = no" << endl;
    //Lass ich als Strings eingeben um einheitliche eingaben zu haben
    string beamer{}, flipchart{}, seats{};
    
    //Beamer (=Projector)
    cout << endl << "Will you need a Projector?: ";
    if (!(cin >> beamer)) {
        throw runtime_error("Invalid Input");
    }
    if(beamer == "y"){
        inputEquip.push_back(true);
    } else {
        inputEquip.push_back(false);
    }
    
    //Flipchart
    cout << endl << "Will you need a Flipchart?: ";
    if (!(cin >> flipchart)) {
        throw runtime_error("Invalid Input");
    }
    if(flipchart == "y"){
        inputEquip.push_back(true);
    } else {
        inputEquip.push_back(false);
    }
    
    //Extra Seating
    cout << endl << "Will you need extra seating?: ";
    if (!(cin >> seats)) {
        throw runtime_error("Invalid Input");
    }
    if(seats == "y"){
        inputEquip.push_back(true);
    } else {
        inputEquip.push_back(false);
    }
    
    createdMeetings.at(meeting - 1).setEquipment(inputEquip);
    
    if(fromNewMeeting == false){
        showMenu();
    }
}

void CUI::inputTime(int meeting) {
    if(meeting <= 0){
        cout << endl << "Create a Meeting first to be able to edit your meeting." << endl;
        showMenu();
        return;
    }
    
    int hour{}, min{};
    cout << endl << "At what time will the meeting be taking place?" << endl;
    cout << "Hour: ";
    if (!(cin >> hour)) {
        throw runtime_error("Invalid Input");
    }
    cout << "\nMinute: ";
    if (!(cin >> min)) {
        throw runtime_error("Invalid Input");
    }
    
    createdMeetings.at(meeting - 1).setTime(hour, min);
    
    if(fromNewMeeting == false){
        showMenu();
    }
}

void CUI::inputDuration(int meeting) {
    if(meeting <= 0){
        cout << endl << "Create a Meeting first to be able to edit your meeting." << endl;
        showMenu();
        return;
    }
    
    cout << endl << "How long will the meeting last?" << endl;
    int duration{};
    if (!(cin >> duration)) {
        throw runtime_error("Invalid Input");
    }

    createdMeetings.at(meeting - 1).setDuration(duration);
    
    if(fromNewMeeting == false){
        showMenu();
    }
}

 void CUI::inviteCoWorkers(int meeting){
     if(meeting <= 0){
        cout << endl << "Create a Meeting first to be able to edit your meeting." << endl;
        showMenu();
        return;
    }
     
     vector<string> coWorkers;
     
     cout << endl << "Who else do you want to invite to the meeting?\nPress q to stop input." << endl;
     bool continueLoop = true;
     string coworkerName;
     while(continueLoop == true){
        if (!(cin >> coworkerName)) {
            throw runtime_error("Invalid Name Input");
        }
        if(coworkerName == "q"){
            continueLoop = false;
            break;
        } else {
            coWorkers.push_back(coworkerName);
        }
     }     
     createdMeetings.at(meeting - 1).setInvites(coWorkers);
     
    if(fromNewMeeting == false){
        showMenu();
    }
 }

void CUI::inputTheme(int meeting){
    if(meeting <= 0){
        cout << endl << "Create a Meeting first to be able to edit your meeting." << endl;
        showMenu();
        return;
    }
    
    cout << endl << "What will the meeting be about?" << endl;
    string inputTheme{};
    if (!(cin >> inputTheme)) {
            throw runtime_error("Invalid Name Input");
    }
    createdMeetings.at(meeting - 1).setTheme(inputTheme);
    
    if(fromNewMeeting == false){
        showMenu();
    }
}

void CUI::displayMeeting(int meeting){
    if(meeting <= 0){
        cout << endl << "Create a Meeting first to be able to display your meeting." << endl;
        showMenu();
        return;
    }
    createdMeetings.at(meeting - 1).displayMeetingInfo();
    
    
    if(fromNewMeeting == false){
        showMenu();
    }
}
