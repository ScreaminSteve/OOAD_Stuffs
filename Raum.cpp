/**
 * @(#) Raum.cpp
 */


#include "Raum.h"

Raum::Raum():nummer{0},plaetze{0},gebaeude{0}
{};

Raum::Raum(int gebaude, int number, int seats){
    nummer=number;
    plaetze=seats;
    gebaeude=gebaude;
}
