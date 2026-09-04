#include <iostream>
#include <cstring>
using namespace std;

class CustomException
{
private:
    char errMsg[100];

public:
    CustomException(char *errmsg)
    {

        strcpy(this->errMsg, errMsg);
    }

    const char *what() throw()
    {
        return errMsg;
    }
};