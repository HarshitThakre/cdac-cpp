#pragma once

#include <iostream>
using namespace std;

void test(int *nump)
{
	// num++; //we cant access the variable num directly as its local var of main
	(*nump)++; // but we can access it indirectly through pointer
}

void calculateAreaCircum(float radius, float *a, float *c)
{
	*a = 3.14f * radius * radius;
	*c = 2 * 3.14f * radius;
}
void calculateByRef(float &radius, float &a, float &c)
{
	a = 3.14f * radius * radius;
	c = 2 * 3.14f * radius;
}
