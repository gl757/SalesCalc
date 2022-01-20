#pragma once

struct Sale
{
	//declarations for Sale
public:
	//mini (minimum amount you get paid or adjusted amount if you make over)
	double car = 0.0;
	//front end gross
	double feg = 0.0;
	//backend gross
	double be = 0.0;
	//whether it was a used or new vehicle
	char type;
	//whether it was a split deal or not
	char split;

};

double backEndPay(double a);

double usedOrNewCalculation(char c, double a, double b);

double splitDeal(char a, double b, double c);
