/*
File Name : Chapter2Exercise18.cpp
Programmer : Morgan Thorne
Date : 01 / 2025
Requirements :
displays the approximate number of customers in the survey who purchase one or more energy drinks per week.
and the approximate number of customers in the survey who prefer citrus - flavored energy drinks.
Allow user to enter number of those surveyed and give results based off of given number. 
*/

#include <iostream>
using namespace std;

int main()
{
	int customer;

	cout << "Number of customers surveyed ";
		cin >>customer;
	
	/*Number Of customers surveyed*/
	
	double buyEnergydrink = 0.15,
		/*Percent of customers who buy one or more a week*/
		   buyCitrusdrink = buyEnergydrink * 0.58;
		/*Percent of customers that buy a citrus flavor out of buyEnergydrink*/
	int EnergydrinkCustomer = customer * buyEnergydrink;
	
	int Citrusdrinkcustomer = customer * buyCitrusdrink;

	cout << "Energy Drink Consumption Survey" << endl;

	cout << customer<<" customers were surveyed" << endl;

	cout << EnergydrinkCustomer << " Customers purchase one or more energy drinks per week." << endl;

	cout << Citrusdrinkcustomer << " Customers prefer citrus-flavored energy drinks." << endl;

	return 0;



}

