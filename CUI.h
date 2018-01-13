/**
 * @(#) CUI.h
 */

#ifndef CUI_H_H
#define CUI_H_H

#include "Meeting.h"
#include "Benutzer.h"
#include "Raumverwaltung.h"

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
    void init();
    void createMeeting();
    void inputCatering(int);
    void inputDuration(int);
    void inputEquipment(int);
    void inputRoom(int);
    void inputTime(int);
    void inputTheme(int);
    void inviteCoWorkers(int);
    void showMenu();
    bool checkUserList(string, string);
    void login();
    void logout();
    void displayMeeting(int);
    void adduser();
    
private:
    Benutzer* benutzer;
    bool isLoggedIn = false;
    vector<Benutzer*> user;
    vector<Meeting> createdMeetings;
    bool fromNewMeeting = false;
    Raumverwaltung* raumverwalt;
};

#endif
