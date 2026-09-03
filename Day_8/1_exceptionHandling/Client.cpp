#include<iostream>
using namespace std;

class Operations
{
public:
	static int divide(int numerator, int denominator)
	{
		int result;
		if (denominator == 0)
		{
			throw 0;
		}
		if (denominator < 0)
		{
			throw "negative value";  //const char[15]  , it not a string type
		}
		if (denominator == 100)
		{
			throw 'Z';
		}
		result = numerator / denominator;
		return result;
	}
};

int main()
{
	try
	{
		int numerator, denominator, result;

		cout << "\n enter the numerator and denominator:";
		cin >> numerator >> denominator;
		
		result = Operations::divide(numerator, denominator);
		cout << "\n the result is " << result;
	}
	catch (int err)
	{
		cout << "\n division by "<<err<<" not allowed";
	}
	catch (const char* err)
	{
		cout << "\n division by " << err << " not allowed";
	}
	catch(char err)
	{
		cout << "\n division by " << err << " not allowed";
	}

	return 0;
}