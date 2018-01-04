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
private:
    int nummer;
    int plaetze;
    int gebaeude;
};

#endif
