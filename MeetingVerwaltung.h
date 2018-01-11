/**
 * @(#) MeetingVerwaltung.h
 */

#ifndef MEETINGVERWALTUNG_H_H
#define MEETINGVERWALTUNG_H_H

#include <string>
#include "Meeting.h"
#include "Raumverwaltung.h"
using namespace std;

class MeetingVerwaltung {
public:

    MeetingVerwaltung(){};
    void init();
    void newMeeting();
    void setCatering(bool);
    void setDuration(int);
    void setEquipment(vector<bool>);
    void setRoom(int, int);
    void setTheme(string);
    void setTime(int, int);
    void setInvites(vector<string>);
    void showRooms();
    void outputInfo();
    Meeting * meeting;
    Raumverwaltung * raumverwaltung;
private:
    

};

#endif
