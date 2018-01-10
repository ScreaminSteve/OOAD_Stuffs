/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Benutzerverwaltung.cpp
 * Author: Steve
 * 
 * Created on January 10, 2018, 1:15 PM
 */

#include "Benutzerverwaltung.h"
#include "Benutzer.h"

Benutzerverwaltung::Benutzerverwaltung() {
}

Benutzerverwaltung::Benutzerverwaltung(const Benutzerverwaltung& orig) {
}

Benutzerverwaltung::~Benutzerverwaltung() {
}

void Benutzerverwaltung::readUserFile() {
    ifstream userList("logininfo.conf");
    string Name, password;
    bool isAdminist;
    while (!userList.eof()) {
        userList >> Name >> password>>isAdminist;
        new Benutzer{Name, password, isAdminist};
        AvailableUsers.push_back(Name, password, isAdminist);
    }

}