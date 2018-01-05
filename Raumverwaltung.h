/**
 * @(#) Raumverwaltung.h
 */

#ifndef RAUMVERWALTUNG_H_H
#define RAUMVERWALTUNG_H_H

#include "Raum.h"
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

class Raumverwaltung
{
	
public:
	void addRoom( );            //ADMIN: neue Räume zu Liste hinzufügen
	void readRoomConfig( );     //InitialisierungsFunktion
	void setRoom( );            //Set Room Availability to false (Raum buchen)
private:
	vector<Raum*> raumvect;
	
	
};

#endif
