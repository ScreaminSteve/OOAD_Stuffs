/**
 * @(#) CUI.h
 */

#ifndef CUI_H_H
#define CUI_H_H

#include "MeetingVerwaltung.h"
#include "Benutzer.h"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <exception>

using namespace std;

class CUI {
public:
    CUI();
    ~CUI();
    void createMeeting();
    void init();
    void InputCatering();
    void InputDuration();
    void InputEquipment();
    void inputRoom();
    void InputTime();
    void showMenu();
    bool checkUserList(string, string);
    void login();
    void logout();

private:
    Benutzer* benutzer;

    MeetingVerwaltung* meetingverwaltung;

    Benutzer* Mitarbeiter;
    
    bool isLoggedIn = false;
    
    vector<Benutzer*> user;
    
};

#endif
