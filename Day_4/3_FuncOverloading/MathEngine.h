#pragma once
#include<string>
using namespace std;
class MathEngine
{
public:
	static int add(int n1, int n2)
	{
		return n1 + n2;
	}
	static string add(string s1, string s2)
	{
		return s1 + s2;
	}
	static double add(double n1, double n2)
	{
		return n1 + n2;
	}
};