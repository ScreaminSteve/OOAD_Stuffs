/**
 * @(#) Raumverwaltung.cpp
 */


#include "Raumverwaltung.h"
#include <iostream>
#include <vector>
using namespace std;

Raumverwaltung::Raumverwaltung() {

}

void Raumverwaltung::readRoomConfig() {
    ifstream roomconf;
    roomconf.open("raumliste.conf");
    int geb, nummer, platze;
    while (!roomconf.eof()) {
        roomconf >> geb >> nummer >> platze;
        Raum* temp = new Raum(nummer, platze, geb);
        raumvect.push_back(temp);
    }
    for (int i = 0; i < raumvect.size(); i++) {
        cout << raumvect.at(i)->nummer << " " << raumvect.at(i)->plaetze << " " << raumvect.at(i)->gebaeude;
    }
}

void Raumverwaltung::setRoom() {

}

void Raumverwaltung::addRoom() {

}