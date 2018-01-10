/**
 * @(#) Raumverwaltung.h
 */

#ifndef RAUMVERWALTUNG_H_H
#define RAUMVERWALTUNG_H_H

#include "Raum.h"
#include <vector>
#include <fstream>
using namespace std;
class Raumverwaltung
{
	
public:
    Raumverwaltung();
	void addRoom( );            //ADMIN: neue Räume zu Liste hinzufügen
	void readRoomConfig( );     //InitialisierungsFunktion
	void setRoom( );            //Set Room Availability to false (Raum buchen)
//private:
	vector<Raum*> raumvect;
	
	
};

#endif
