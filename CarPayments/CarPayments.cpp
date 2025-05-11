// CarPayments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Chapter 10 - TryThis11

#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

//function prtotypes
double getPayment(int, double, int);
void displayPayment(double);

int main()
{
    //declare variabls
    int carPrice = 0;
    int rebate = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    int term = 0;
    double creditPayment = 0.0;
    double dealerPayment = 0.0;

    //get input
    cout << "Car price (after any trade-in): ";
    cin >> carPrice;
    cout << "Rebate: ";
    cin >> rebate;
    cout << "Credit union rate: ";
    cin >> creditRate;
    cout << "Dealer rate: ";
    cin >> dealerRate;
    cout << "Term in years: ";
    cin >> term;

    //call function to calculate payments
    creditPayment = getPayment(carPrice - rebate, creditRate / 12, term * 12);
    dealerPayment = getPayment(carPrice, dealerRate / 12, term * 12);

    //display payments
    cout << fixed << setprecision(2) << endl;
    cout << "Credit union payment: $";
    displayPayment(creditPayment);
    cout << endl;
    cout << "Dealer payment: $";
    displayPayment(dealerPayment);
    cout << endl;

    //system("pause");
    return 0;
} //end of main

//******function definitions******
double getPayment(int prin, double monthRate, int months)
{
    //calculates and returns a monthly payment
    double monthPay = 0.0;
    monthPay = prin * monthRate / (1 - pow(monthRate + 1, -months));
    return monthPay;
} //end of getPayment function

void displayPayment(double mthlyPay)
{
    cout << mthlyPay;
} //end of displayPayment

