//James Floretta
//Assignment 1, Program #1
//Date: 2/16/2017

#include<string>
#include <iostream>
using namespace std;

struct Workers {
    string name;
    double hourlyWage;
    int hoursWorkedThisWeek;
};

int healthTax = 130;
double otherTaxes = 0.17;
double grossPay;
double grossPay1;
double grossPay2;
double grossPay3;

int main() {
    //First worker
    Workers JohnDoe;
    JohnDoe.name = "John Doe";
    JohnDoe.hourlyWage = 8.50;
    cout<<"Enter hours worked this week for John Doe: ";
    cin>>JohnDoe.hoursWorkedThisWeek;
    cout<<"- John Doe's weekly earnings - "<< endl;
    cout<<"Hourly rate: $8.50" << endl;
    cout<<"Hours worked this week: " << JohnDoe.hoursWorkedThisWeek << endl;
    double grossPay = (JohnDoe.hourlyWage * JohnDoe.hoursWorkedThisWeek); //gross pay
    cout<<"Gross pay: $" << grossPay <<endl; 
    cout<<"Net pay: $" << (grossPay - healthTax) - (grossPay * otherTaxes)<<endl; // net pay
    
    //Second worker
    Workers ShaleseRay;
    ShaleseRay.name = "Shalese Ray";
    ShaleseRay.hourlyWage = 15.00;
    cout<<"Enter the amount of hours Shalese Ray worked this week: ";
    cin>>ShaleseRay.hoursWorkedThisWeek;
    cout<<"- Shalese Ray's weekly earnings - "<< endl;
    cout<<"Hourly rate: $15.00" << endl;
    cout<<"Hours worked this week: " << ShaleseRay.hoursWorkedThisWeek << endl;
    double grossPay1 = (ShaleseRay.hourlyWage * ShaleseRay.hoursWorkedThisWeek); //gross pay
    cout<<"Gross pay: $" << grossPay1 <<endl; 
    cout<<"Net pay: $" << (grossPay1 - healthTax) - (grossPay1 * otherTaxes)<<endl; // net pay
    
    //Third worker
    Workers AliviaHope;
    AliviaHope.name = "Alivia Hope";
    AliviaHope.hourlyWage = 25.15;
    cout<<"Enter the amount of hours Alivia Hope worked this week: ";
    cin>>AliviaHope.hoursWorkedThisWeek;
    cout<<"- Alivia Hope's weekly earnings - "<< endl;
    cout<<"Hourly rate: $25.15" << endl;
    cout<<"Hours worked this week: " << AliviaHope.hoursWorkedThisWeek << endl;
    double grossPay2 = (AliviaHope.hourlyWage * AliviaHope.hoursWorkedThisWeek); //gross pay
    cout<<"Gross pay: $" << grossPay2 << endl; 
    cout<<"Net pay: $" << (grossPay2 - healthTax) - (grossPay2 * otherTaxes)<<endl; // net pay
    
    //Fourth worker
    Workers JazzyKerber;
    JazzyKerber.name = "Jazzy Kerber";
    JazzyKerber.hourlyWage = 10.00;
    cout<<"Enter the amount of hours Jazzy Kerber worked this week: ";
    cin>>JazzyKerber.hoursWorkedThisWeek;
    cout<<"- Jazzy Kerber's weekly earnings - "<< endl;
    cout<<"Hourly rate: $10.00" << endl;
    cout<<"Hours worked this week: " << JazzyKerber.hoursWorkedThisWeek << endl;
    double grossPay3 = (JazzyKerber.hourlyWage * JazzyKerber.hoursWorkedThisWeek); //gross pay
    cout<<"Gross pay: $" << grossPay3 <<endl; 
    cout<<"Net pay: $" << (grossPay3 - healthTax) - (grossPay3 * otherTaxes); // net pay
}