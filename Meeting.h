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

#include <vector>

class Meeting
{
	
public:
	void createMeeting( );
	void createNewMeeting( );
	void setCatering( bool );
	void setDuration( int );
	void setEquipment( std::vector<bool> );
	void setTheme( std::string theme );
	void setTime(int, int);                                     //muss im design geändert werden, war vorher chrono
	
private:
	Catering * catering;
	
	//DURATION duration;
	
	Einladung * einladung;
	
	Equipment * equipment;
	
	Raum room;
	
	std::string theme;
	
	//DATETIME time;
	
	
};

#endif
