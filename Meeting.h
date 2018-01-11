/**
 * @(#) Meeting.h
 */

#ifndef MEETING_H_H
#define MEETING_H_H

#include "Raum.h"
#include <string>
#include "Catering.h"
#include "Einladung.h"
#include "Equipment.h"

#include <iostream>
#include <vector>

using namespace std;

class Meeting {
public:
    //void createMeeting();     //Wozu war das da?
    void createNewMeeting();

    void setCatering(bool);
    void setDuration(int);
    void setEquipment(vector<bool>);
    void setTheme(string theme);
    void setTime(int, int); //muss im design geändert werden, war vorher chrono
    void setInvites(vector<string>);
    void displayMeetingInfo();

//private:          //Musste ich public setzen um aus CUI zugriff zu haben für die ausgabe
    Catering * catering;

    int meetingDuration;

    Einladung * einladung;

    Equipment * equipment;

    Raum room;

    string meetingTheme;

    int meetingHour, meetingMinute;
    
    

};

#endif
