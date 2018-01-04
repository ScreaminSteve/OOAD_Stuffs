/**
 * @(#) CUI.h
 */

#ifndef CUI_H_H
#define CUI_H_H

#include "MeetingVerwaltung.h"
#include "Benutzer.h"

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
    void toggleLogin();

private:
    Benutzer * benutzer;

    MeetingVerwaltung* meetingverwaltung;

    Benutzer * Mitarbeiter;


};

#endif
