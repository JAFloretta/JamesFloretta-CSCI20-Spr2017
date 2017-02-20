//James Floretta
//Calculating gross pay and net pay after health insurance deduction and other taxes.
//Date: 2/16/2017

#include<string>
#include <iostream>
using namespace std;

struct Workers {
    string name;
    double hourlyWage;
    int hoursWorkedThisWeek;
};

int main() {
    
    int healthTax = 130;
    double otherTaxes = 0.17;
    
    Workers Employee;
    cout<<"Enter the name of the employee: ";
    cin>>Employee.name;
    cout<<"Enter the employees' hourly wage: ";
    cin>>Employee.hourlyWage;
    cout<<"Enter hours worked this week: ";
    cin>>Employee.hoursWorkedThisWeek;
    cout<<"- " <<Employee.name<< "'s weekly earnings - "<< endl; //Header information
    cout<<"Hourly rate: " << Employee.hourlyWage << endl;
    cout<<"Hours worked this week: " << Employee.hoursWorkedThisWeek << endl;
    double grossPay = (Employee.hourlyWage * Employee.hoursWorkedThisWeek); //gross pay = hourly wage * hours worked
    cout<<"Gross pay: $" << grossPay <<endl; 
    cout<<"Net pay: $" << (grossPay - healthTax) - (grossPay * otherTaxes)<<endl; //net pay = (gross pay - healthtax) - (gross pay * other taxes)
    
   
}