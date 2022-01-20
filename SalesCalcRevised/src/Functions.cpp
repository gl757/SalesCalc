#include "Head.h"
#include <iostream>

using namespace std;

//Back end pay calculation
double backEndPay(double a)
{
	double x = 0.0;
	double BE_PER_1 = .70;
	double BE_PER_2 = .03;
	x = a * BE_PER_1 * BE_PER_2;
	return x;
}
//Front end pay calculation based on whether it was New or Used, what gross threshold you hit, 
// and what amount of cars sold threshold you hit
double usedOrNewCalculation(char c, double a, double b)
{
	if (toupper(c) == 'U' && a <= 750 && b <= 10) {
		return 150;
	}
	else if (toupper(c) == 'U' && a <= 1000 && b >= 10.5 && b < 18) {
		return 250;
	}
	else if (toupper(c) == 'U' && a <= 1166.66 && b >= 18) {
		return 350;
	}
	else if (toupper(c) == 'U' && a > 1200 && c <= 10) {
		return (a - 450) * .20;
	}
	else if (toupper(c) == 'U' && a > 1450 && c >= 10.5 && c < 18) {
		return (a - 450) * .25;
	}
	else if (toupper(c) == 'U' && a > 1616.66 && c >= 18) {
		return (a - 450) * .30;
	}
	else if (toupper(c) == 'N' && a <= 500 && c <= 10) {
		return 100;
	}
	else if (toupper(c) == 'N' && a <= 800 && c >= 10.5 && c < 18) {
		return 200;
	}
	else if (toupper(c) == 'N' && a <= 1000 && c > 18) {
		return 300;
	}
	else if (toupper(c) == 'N' && a > 850 && c <= 10) {
		return (a - 350) * .20;
	}
	else if (toupper(c) == 'N' && a > 1150 && c >= 10.5 && c < 18) {
		return (a - 350) * .25;
	}
	else if (toupper(c) == 'N' && a > 1350 && c > 18) {
		return (a - 350) * .30;
	}
}
//Commission Calculation adjustment if the sale happenned to be a Split Deal
// on that particular sale
double splitDeal(char a, double b, double c)
{
	double d = 0.0;
	if (toupper(a) == 'Y') {
		d = (b / 2) + (c / 2);
		return d;
	}
}
