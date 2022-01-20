#include <iostream>
#include "Head.h"
#include <iomanip>

using namespace std;

int main()
{
	//Declarations
	//amount of cars you sold
	int amountOfCars = 0;
	//commission for that particular sale
	double carCom = 0.0;
	//total commission of all sales
	double totalCom = 0.0;


	cout << "How many cars have you sold total so far?" << endl;
	cin >> amountOfCars;

	//for loop to go through each vehicle sold in order to add it all up while giving amount for each vehicle sold
	for (int i = 0; i < amountOfCars; i++)
	{

		//declare Sale structure
		Sale sale;

		cout << "Is this car you sold New or Used (Type N for New or U for Used):" << endl;
		cin >> sale.type;
		cout << "what  is the front end gross of the car you sold?" << endl;
		cin >> sale.feg;
		cout << "waht is the back end you got on the car you sold?" << endl;
		cin >> sale.be;
		cout << "was this a split deal?" << endl;
		cin >> sale.split;

		//calculate Front end pay based on information
		double frontEnd = usedOrNewCalculation(sale.type, sale.feg, amountOfCars);
		//calculate Back end pay based on information
		double backEnd = backEndPay(sale.be);
		//calculate amount if deal ends up being a split deal
		double halfDeal = splitDeal(sale.split, frontEnd, backEnd);

		//adjustment if deal is actually a split deal or not and give final commission for this particular sale
		if (halfDeal > 0) {
			carCom = halfDeal;
		}
		else
		{
			carCom = frontEnd + backEnd;
		}
		cout << fixed << setprecision(2) << "Your commission for this car is " << carCom << endl;
		cout << std::endl;

		//adding commission towards total commission in order to get final commission at end of loop
		totalCom += carCom;

	}
	cout << endl;
	cout << fixed << setprecision(2) << "Your total commission so far is " << totalCom << endl;

}
