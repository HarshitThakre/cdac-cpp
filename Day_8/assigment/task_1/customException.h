#include<iostream>
using namespace std; 

class CustomException{
    private : 
    char errMsg[50];


    public: 

    CustomException(char* errmsg){
        
            strcpy(this->errMsg, errMsg);
        
    }
    
    const char* what() throw(){
        return errMsg;
    }
};