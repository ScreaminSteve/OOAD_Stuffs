/**
 * @(#) Raumverwaltung.cpp
 */


#include "Raumverwaltung.h"
#include <iostream>
#include <iomanip>
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

void Raumverwaltung::printRoomList() {
    cout << setw(20) << "Gebaeudenummer" << setw(20) << "Raumnummer" << setw(20) << "Platzanzahl" << endl;
    for (int i = 0; i < raumvect.size(); i++) {
        cout << setw(20)<<raumvect.at(i)->gebaeude << setw(20) << raumvect.at(i)->nummer << setw(20) << raumvect.at(i)->plaetze << endl;
    }
    cout<<endl<<endl;
}

