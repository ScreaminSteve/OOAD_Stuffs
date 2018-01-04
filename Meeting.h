/**
 * @(#) Meeting.h
 */

#ifndef MEETING_H_H
#define MEETING_H_H

#include "Raum.h"
#include "../../chrono/DATETIME.h"
#include "../../string.h"
#include "Catering.h"
#include "Einladung.h"
#include "Equipment.h"
#include "../../chrono/DURATION.h"
#include "Room.h"
class Meeting
{
	
public:
	void createMeeting( );
	void createNewMeeting( );
	void setCatering( bool isCater );
	void setDuration( int duration );
	void setEquipment( std::vector<boolean> EuipList );
	void setTheme( std::string theme );
	void setTime( DATETIME time );
	
private:
	Catering * catering;
	
	DURATION duration;
	
	Einladung * einladung;
	
	Equipment * equipment;
	
	Room room;
	
	std::string theme;
	
	DATETIME time;
	
	
};

#endif
