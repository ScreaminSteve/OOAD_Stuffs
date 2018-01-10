/**
 * @(#) Meeting.h
 */

#ifndef MEETING_H_H
#define MEETING_H_H

#include "Raum.h"
<<<<<<< HEAD
#include "Catering.h"
#include "Einladung.h"
#include "Equipment.h"
#include <string>
#include <vector>
=======
#include <string>

#include "Catering.h"
#include "Einladung.h"
#include "Equipment.h"

#include <vector>

>>>>>>> Hendrik
class Meeting
{
	
public:
	void createMeeting( );
	void createNewMeeting( );
<<<<<<< HEAD
	void setCatering( bool isCater );
	void setDuration( int duration );
	void setEquipment( std::vector<bool> EuipList );
	void setTheme( std::string theme );
	void setTime( int time );
=======
	void setCatering( bool );
	void setDuration( int );
	void setEquipment( std::vector<bool> );
	void setTheme( std::string theme );
	void setTime(int, int);                                     //muss im design geändert werden, war vorher chrono
>>>>>>> Hendrik
	
private:
	Catering * catering;
	
<<<<<<< HEAD
	int duration;
=======
	//DURATION duration;
>>>>>>> Hendrik
	
	Einladung * einladung;
	
	Equipment * equipment;
	
<<<<<<< HEAD
        Raum * raum;
	
	std::string theme;
	
	int time;
=======
	Raum room;
	
	std::string theme;
	
	//DATETIME time;
>>>>>>> Hendrik
	
	
};

#endif
