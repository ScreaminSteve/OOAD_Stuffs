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
    void inputCatering();
    void inputDuration();
    void inputEquipment();
    void inputRoom();
    void inputTime();
    void showMenu();
    bool checkUserList(string, string);
    void login();
    void logout();
    MeetingVerwaltung* meetingverwaltung;
private:
    Benutzer* benutzer;

    Benutzer* Mitarbeiter;

    bool isLoggedIn = false;

    vector<Benutzer*> user;
<<<<<<< HEAD
    
    //für zugriff auf MeetingVerwaltung von allen funktionen in 
    MeetingVerwaltung verwaltung;
    
=======

>>>>>>> da9bb00c7d2c388099d8ebc795865cc266dce5ca
};

#endif
