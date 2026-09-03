#include<exception>
#include<string>
using namespace std;
#include<string.h>

class CustomException :public exception
{
private:
	char errMsg[50];
public:
	CustomException(const char* errMsg)
	{
		strcpy_s(this->errMsg, errMsg);
	}

	const char* what() const throw()
	{
		return errMsg;
	}
};