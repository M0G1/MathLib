#include "pch.h"
#include "MathLib.h"

bool isPointsOnLine(int x1, int y1, int z1, int x2, int y2, int z2, int x3, int y3, int z3)
{
	// use vector multiply
	/*
	| i  j   k |
	| a1 a2 a3 |
	| b1 b2 b3 |
	*/
	int a1 = (x2 - x1), a2 = (y2 - y1), a3 = (z2 - z1);
	int b1 = (x3 - x1), b2 = (y3 - y1), b3 = (z3 - z1);
	////printf("vector a %d %d %d\n",a1,a2,a3);
	////printf("vector b %d %d %d\n",b1,b2,b3);

	int i = a2 * b3 - a3 * b2;
	int j = -(a1*b3 - a3 * b1);
	int k = a1 * b2 - a2 * b1;

	////printf("i: %d\nj: %d\nk: %d\n",i,j,k);
	//all coordinates of vector multiple must be 0
	if (i == 0 && j == 0 && k == 0)
		return true;
	return false;

	//ANOTHER SOLUTION
	//// (x1 - x2) / (x3 - x2) = (y1 - y2) / (y3 - y2) = (z1 - z2) / (z3 - z2)  
	//long long first_left_exp, first_right_exp;
	//long long second_left_exp, second_right_exp;
	//long long third_left_exp, third_right_exp;

	//first_left_exp = (long long)(x1 - x2)*(y3 - y2);
	//first_right_exp = (long long)(y1 - y2)*(x3 - x2);
	//second_left_exp = (long long)(y1 - y2)*(z3 - z2);
	//second_right_exp = (long long)(z1 - z2)*(y3 - y2);
	//third_left_exp = (long long)(x1 - x2)*(z3 - z2);
	//third_right_exp = (long long)(z1 - z2)*(x3 - x2);

	//if (first_left_exp == first_right_exp
	//	&& second_left_exp == second_right_exp
	//  && third_left_exp == third_right_exp)
	//	return true;
	//return false;
}
