/**
 * @(#) Meeting.cpp
 */


#include "Meeting.h"

void Meeting::createNewMeeting( )
{
    new Meeting;            //Ich geh davon aus, dass das anders erstellt werden muss but idk how
}


void Meeting::setDuration( int duration )
{
    meetingDuration = duration;
}

void Meeting::setCatering( bool isCater )
{
    catering->hasCatering = isCater;
}

void Meeting::setTheme( string theme )
{
    meetingTheme = theme;
}

void Meeting::setTime( int hour, int minute )
{
    meetingHour = hour;
    meetingMinute = minute;
}

void Meeting::setEquipment( vector<bool> equipList )
{
    equipment->stuffs = equipList;
}

void Meeting::setInvites(vector<string> inviteList){
    einladung->namelist = inviteList;
}

void Meeting::displayMeetingInfo(){
    
}

