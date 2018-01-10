/**
 * @(#) Benutzer.h
 */

#ifndef BENUTZER_H_H
#define BENUTZER_H_H

#include <string>
using namespace std;

class Benutzer {
public:
    Benutzer(string,string,bool);
    bool IsAdmin() const {
        return isAdmin;
    }

    string GetName() const {
        return name;
    }

    string GetPasswort() const {
        return passwort;
    }

    void SetAdmin(bool Admin) {
        isAdmin = Admin;
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
