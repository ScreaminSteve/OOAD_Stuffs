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
	void setCatering( bool );
	void setDuration( int );
	void setEquipment( std::vector<bool>);
	void setRoom( int, int );
	void setTheme(string );
	void setTime( int );
	void showRooms( );
	
private:
	Meeting * meeting;
	Raumverwaltung * raumverwaltung;
	
	
};

#endif
