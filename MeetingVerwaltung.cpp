/**
 * @(#) MeetingVerwaltung.cpp
 */


#include "MeetingVerwaltung.h"

void MeetingVerwaltung::init( )
{
    Raumverwaltung raume;
    raume.readRoomConfig();
}

void MeetingVerwaltung::newMeeting( )
{
    //idk was ich hier machen soll töte mich am ende mache ich eh alles falsch
}

void MeetingVerwaltung::setCatering( bool isCater )
{
    //meeting->setCatering(isCater);
}

void MeetingVerwaltung::setTime( int hour, int minute )
{
    //meeting->setTime(hour, minute);
}

void MeetingVerwaltung::setRoom( int geb, int number )
{
   //meeting brauch noch rooms oder?
}

void MeetingVerwaltung::showRooms( )
{
	
}

void MeetingVerwaltung::setTheme( string theme )
{
    //meeting->setTheme(theme);
}

void MeetingVerwaltung::setDuration( int duration )
{
    //meeting->setDuration(duration);
}

void MeetingVerwaltung::setEquipment( std::vector<bool> equipment )
{
    //meeting->setEquipment(equipment);
}

void MeetingVerwaltung::setInvites(vector<string> invited){
    //meeting->setInvites(invited);
}

void MeetingVerwaltung::outputInfo(){
    //meeting->displayMeetingInfo();
}

