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
    MeetingVerwaltung verwaltung;
    verwaltung.init();

    //Login Info txt einlesen und Benutzer::Benutzer erstellen
    ifstream userList("logininfo.conf");
    string name, pw;
    int isAdmin;
    cout << "begin reading" << endl;
    if (!userList) throw runtime_error("Faulty Userconfig");
    while (!(userList.eof())) {
        userList >> name >> pw >> isAdmin;
        user.push_back(new Benutzer{name, pw, isAdmin});
        cout << "user read" << endl;
    }
    cout << "stuffs read";
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
            << "(8) - Book Catering" << endl
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
            inputTime(); //Setzt neue Zeit für Meeting
            break;
        case 3:
            inputDuration(); //Setzt neue Zeit für Meeting
            break;
        case 4:
            inputRoom(); //Setzt neue Zeit für Meeting
            break;
        case 5:
            //Soll das gesamte Meeting löschen, idk wie aber (oder soll es alles einfach auf "0" setzen zb?)
            break;
        case 6:
            inputEquipment(); //Setzt equipment
            break;
        case 7:
            inputCatering(); //Setzt catering
            break;
        case 8:
            inviteCoWorkers(); //Mitarbeiter einladen
            break;
        case 9:
            displayMeeting();  //Meeting Infos anzeigen
            break;
        default:
            cout << "Invalid input. Try again";
            showMenu();
            break;
    }
}

void CUI::createMeeting() {
    new MeetingVerwaltung;      //Muss wahrscheinlich anders erstellt werden
    
    /*Call'd alles um alles ein mal durchzugehen
     * wenn ein meeting neu erstellt wird
     */
    inputTheme();
    inputTime();
    inputDuration();
    inputRoom();
    inputEquipment();
    inputCatering();
    inviteCoWorkers();
    
    cout << endl << "Meeting Created and Set." << endl;
    
    showMenu();
}

void CUI::inputCatering() {
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

    verwaltung.setCatering(needsCatering);

}

void CUI::inputRoom() {
    int building{}, number{};

    cout << endl << "In which Building will the meeting be taking place?" << endl;
    if (!(cin >> building)) {
        throw runtime_error("Invalid Input");
    }
    cout << endl << "In which Room will the meeting be taking place?" << endl;
    if (!(cin >> number)) {
        throw runtime_error("Invalid Input");
    }

    verwaltung.setRoom(building, number);
}

void CUI::inputEquipment() {
    vector<bool> inputEquip;
    cout << endl << "Fill out the list of equipment that you need for the meeting. \nInput y = yes, n = no" << endl;
    //Lass ich als Strings eingeben um einheitliche eingaben zu haben
    string beamer{}, flipchart{}, extraTischeStuehle{};

    cout << endl << "Brauchen Sie einen Beamer?: ";
    if (!(cin >> beamer)) {
        throw runtime_error("Invalid Input");
    }
    cout << endl << "Brauchen Sie ein Flipchart?: ";
    if (!(cin >> flipchart)) {
        throw runtime_error("Invalid Input");
    }
    cout << endl << "Brauchen Sie extra Tische + Stuehle?: ";
    if (!(cin >> extraTischeStuehle)) {
        throw runtime_error("Invalid Input");
    }

    //Strings zu bool konvertieren
    if (beamer == "y") {
        inputEquip.push_back(true);
    }
    if (beamer == "n" || beamer != "y") {
        inputEquip.push_back(false);
    }
    if (flipchart == "y") {
        inputEquip.push_back(true);
    }
    if (flipchart == "n" || flipchart != "y") {
        inputEquip.push_back(false);
    }
    if (extraTischeStuehle == "y") {
        inputEquip.push_back(true);
    }
    if (extraTischeStuehle == "n" || extraTischeStuehle != "y") {
        inputEquip.push_back(false);
    }

    verwaltung.setEquipment(inputEquip);
}

void CUI::inputTime() {
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
    
    verwaltung.setTime(hour, min);
}

void CUI::inputDuration() {
    cout << endl << "How long will the meeting last?" << endl;
    int duration{};
    if (!(cin >> duration)) {
        throw runtime_error("Invalid Input");
    }

    verwaltung.setDuration(duration);
}

 void CUI::inviteCoWorkers(){
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
     verwaltung.setInvites(coWorkers);
 }

void CUI::inputTheme(){
    cout << endl << "What will the meeting be about?" << endl;
    string inputTheme{};
    if (!(cin >> inputTheme)) {
            throw runtime_error("Invalid Name Input");
    }
    verwaltung.setTheme(inputTheme);
}

void CUI::displayMeeting(){
    verwaltung.outputInfo();
}
