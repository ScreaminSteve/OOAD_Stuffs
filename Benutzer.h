/**
 * @(#) Benutzer.h
 */

#ifndef BENUTZER_H_H
#define BENUTZER_H_H

#include <string>
using namespace std;

class Benutzer {
public:
    Benutzer();
    Benutzer(string, string, int);

    
    bool IsAdmin() const {
        return isAdmin;
    }

    string GetName() const {
        return name;
    }

    string GetPasswort() const {
        return passwort;
    }

    void SetAdmin(int admin) {
        if(admin == 1){
            isAdmin = true;
        } else {
            isAdmin = false;
        }
    }

    void SetName(string name) {
        this->name = name;
    }

    void SetPasswort(string passwort) {
        this->passwort = passwort;
    }

private:
    string name;
    string passwort;
    bool isAdmin;
    
    
};

#endif
