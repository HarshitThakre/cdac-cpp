#pragma once 
#include<iostream>
#include"customException.h"
using namespace std;

class Wallet {
    private: 
    int  w_id ; 
    string name; 
    double balance; 
    

    public: 

    Wallet(int w_id, string name, double balance){
        this-> w_id = w_id;
        this->name = name; 
        if(balance <= 0 ){
            CustomException err("Balance can not be negetive or Zero! "); 
            throw err ;

        }
    }
};

