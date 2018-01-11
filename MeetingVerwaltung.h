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
<<<<<<< HEAD
	void init( );
	void newMeeting( );
	void setCatering( bool );
	void setDuration( int );
	void setEquipment( std::vector<bool>);
	void setRoom( int, int );
	void setTheme(string );
	void setTime( int );
	void showRooms( );
	
=======
    MeetingVerwaltung();
    void init();
    void newMeeting();
    void setCatering(bool isCater);
    void setDuration(int duration);
    void setEquipment(std::vector<bool> equipment);
    void setRoom(int geb, int number);
    void setTheme(string theme);
    void setTime(int time);
    void showRooms();
    Meeting * meeting;
    Raumverwaltung * raumverwaltung;
>>>>>>> da9bb00c7d2c388099d8ebc795865cc266dce5ca
private:
    //habs aus den gleichen gründen wie du public gemacht

};

#endif
