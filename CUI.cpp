/**
 * @(#) CUI.cpp
 */


#include "CUI.h"

CUI::CUI() {
    //yo, WTF sollte das Login im Konstruktor? dadurch kannst du dich nicht anmelden, einfach weil noch nichts geladen wurde!
}

CUI::~CUI() {

}

void CUI::inputRoom() {

}

void CUI::InputEquipment() {

}

void CUI::InputTime() {

}

void CUI::InputDuration() {

}

void CUI::init() {

    MeetingVerwaltung verwaltung;
    verwaltung.init();
    
    //Login Info txt einlesen und Benutzer::Benutzer erstellen
    ifstream userList("logininfo.conf");
    string name, pw;
    int isAdmin;
    cout<<"begin reading"<<endl;
    if (!userList) throw runtime_error("Faulty Userconfig");
    while(!(userList.eof())){
        userList >> name >> pw >> isAdmin;
        user.push_back(new Benutzer{name, pw, isAdmin});
        cout<<"user read"<<endl;
    }
    cout<<"stuffs read";
}

//überprüft gültigkeit des eingegebenen username/pw
bool CUI::checkUserList(string name, string pw){
    
    for(int i = 0; i < user.size(); i++){
        if(user.at(i)->GetName() == name && user.at(i)->GetPasswort() == pw){
            return true;
        }
    }
    return false;
    
}

void CUI::login() {
    
    cout << "Vector unload" << endl;
    for(int i = 0; i < user.size(); i++){
        cout << "name: " << user.at(i)->GetName();
        cout << endl << "pw: " << user.at(i)->GetPasswort();
        cout << endl << "isadmin: " << user.at(i)->IsAdmin();
        cout << endl;
    }
    cout << endl << endl;
    
    string username{};
    string password{};
    
    //Eingabe aufforderung
    cout << "Login (q to quit)" << endl << "Username: ";
    if(!(cin >> username)){
        throw runtime_error("Ending Program.");
    }
    
    if(username == "q"){
        cout << endl << "Ending Program." << endl;
        terminate();
    }
    
    cout << endl << "Password: ";
    if(!(cin >> password)){
        throw runtime_error("Invalid Password Input");
    }
    
    bool isUser = checkUserList(username, password);
    
    if(isUser == false){
        cout << endl << "Invalid Username or Password" << endl;
        login();
    }

}

void CUI::logout(){
    terminate();
}

void CUI::showMenu() {

}

void CUI::createMeeting() {

}

void CUI::InputCatering() {

}

