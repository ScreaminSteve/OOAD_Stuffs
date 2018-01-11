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
#include "CUI.h"
using namespace std;

#include "CUI.h"

int main(int argc, char** argv) try{
    cout<<"CUI incoming!\n";
    CUI console;
    cout<<"Console created"<<endl;
    console.init();
    cout<<"Init done";
    console.login();
    
   

    return 0;
}catch (const std::exception& e) {
    std::cerr << e.what();
    return -2;
} catch (...) {
    std::cerr << "an error";
    return -1;
}

