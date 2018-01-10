/**
 * @(#) MeetingVerwaltung.h
 */

#ifndef MEETINGVERWALTUNG_H_H
#define MEETINGVERWALTUNG_H_H

#include <string>
#include "Meeting.h"
#include "Raumverwaltung.h"
using namespace std;
class MeetingVerwaltung
{
	
public:
	void init( );
	void newMeeting( );
	void setCatering( bool isCater );
	void setDuration( int duration );
	void setEquipment( std::vector<bool> equipment );
	void setRoom( int geb, int number );
	void setTheme(string theme );
	void setTime( int time );
	void showRooms( );
	
private:
	Meeting * meeting;
	Raumverwaltung * raumverwaltung;
	
	
};

#endif
