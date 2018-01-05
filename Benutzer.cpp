/**
 * @(#) Benutzer.cpp
 */


#include "Benutzer.h"

Benutzer::Benutzer(string name, string pw, int isAdmin){
    SetName(name);
    SetPasswort(pw);
    SetAdmin(isAdmin);
}
