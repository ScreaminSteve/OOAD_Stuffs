/**
 * @(#) Raum.h
 */

#ifndef RAUM_H_H
#define RAUM_H_H

class Raum {
public:
    Raum();
    explicit Raum(int,int,int);
    ~Raum();
   
    /*Hendrik -> Habe ich als public daten, weil ich von RaumVerwaltung sonst
     * nur fehlermeldungen kriege, da diese var's private sind und ich von
     * dort keinene zugriff habe*/
    int nummer;
    int plaetze;
    int gebaeude;
private:
    
};

#endif
