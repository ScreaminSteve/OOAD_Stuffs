/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Benutzerverwaltung.h
 * Author: Steve
 *
 * Created on January 10, 2018, 1:15 PM
 */

#ifndef BENUTZERVERWALTUNG_H
#define BENUTZERVERWALTUNG_H

#include <vector>
#include <fstream>
#include <string>
#include "Benutzer.h"
using namespace std;

class Benutzerverwaltung {
public:
    Benutzerverwaltung();
    Benutzerverwaltung(const Benutzerverwaltung& orig);
    virtual ~Benutzerverwaltung();
    void readUserFile();
    void init();
private:
    vector <Benutzer*> AvailableUsers;
};

#endif /* BENUTZERVERWALTUNG_H */

