#include<iostream>
using namespace std;
#include"MathEngine.h"

int main()
{
	cout << "\n the addition of 2 int is " <<
		MathEngine::add(12, 5);
	cout << "\n the addition of 2 double is " <<
		MathEngine::add(12.5, 5.5);
	cout << "\n the addition of 2 string is " <<
		MathEngine::add("Hello ", "World");
}