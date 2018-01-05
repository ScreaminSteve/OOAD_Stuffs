/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Steve
 *
 * Created on January 4, 2018, 3:00 PM
 */

#include <iostream>
using namespace std;

#include "CUI.h"

int main(int argc, char** argv) {
    CUI console;
    
    console.init();
    console.login();
    
   

    return 0;
}

