/**
 * @(#) Benutzer.cpp
 */


#include "Benutzer.h"

Benutzer::Benutzer(string Name,string Password,bool isAdminist){
    name=Name;
    passwort=Password;
    isAdmin=isAdminist;
}