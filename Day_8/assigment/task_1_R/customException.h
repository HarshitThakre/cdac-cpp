#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class InvalidAmmountException
{
private:
    char errMsg[100];

public:
    InvalidAmmountException(char *errmsg)
    {

        strcpy(this->errMsg, errMsg);
    }

    const char *what() throw()
    {
        return errMsg;
    }
};

class InsufficientBalanceException
{
private:
    string errMsg;

public:
    InsufficientBalanceException(string errMsg)
    {
        this->errMsg = errMsg;
    }

    const string what() throw()
    {
        return errMsg;
    }
};