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
    roomconf.open("raumliste.conf", std::ifstream::in);
    int geb, nummer, platze;
    if (!roomconf) throw runtime_error("Roomconfig Faulty!\n");
    while (!roomconf.eof()) {
        roomconf >> geb >> nummer >> platze;
        Raum* temp = new Raum(nummer, platze, geb);
        raumvect.push_back(temp);

    }

}
//Raumausgabe auskommentiert
//    for (int i = 0; i < raumvect.size(); i++) {
//        cout << raumvect.at(i)->nummer << " " << raumvect.at(i)->plaetze << " " << raumvect.at(i)->gebaeude;
//    }
//}

void Raumverwaltung::setRoom() {

}

void Raumverwaltung::addRoom() {

}

void Raumverwaltung::printRoomList() {
    for (int i = 0; i < raumvect.size(); i++) {
        cout << "Gebaeudenummer: " << raumvect.at(i)->gebaeude << endl;
        cout << "Raumnummer: " << raumvect.at(i)->nummer << endl;
        cout << "Platzanzahl: " << raumvect.at(i)->plaetze << endl << endl;
    }
}

