/**
 * @(#) Meeting.h
 */

#ifndef MEETING_H_H
#define MEETING_H_H

#include "Raum.h"
#include "Catering.h"
#include "Einladung.h"
#include "Equipment.h"
#include <string>
#include <vector>
class Meeting
{
	
public:
	void createMeeting( );
	void createNewMeeting( );
	void setCatering( bool isCater );
	void setDuration( int duration );
	void setEquipment( std::vector<bool> EuipList );
	void setTheme( std::string theme );
	void setTime( int time );
	
private:
	Catering * catering;
	
	int duration;
	
	Einladung * einladung;
	
	Equipment * equipment;
	
        Raum * raum;
	
	std::string theme;
	
	int time;
	
	
};

#endif
