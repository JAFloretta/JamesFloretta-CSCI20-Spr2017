//James Floretta
//Coinstar machine
//Date: 2/7/2017
#include <iostream>
using namespace std;

int main() {
    int cents;
    double total;
    
    
    cout<<"Enter total amount of coins (whole number): "; //Enter any whole number
    cin>>total;
    cents = total;
    
    
    cout<<"You entered " << cents / 25 << " quarters";
    cents = cents % 25;
    
    cout<<", " << cents / 10 << " dimes";
    cents = cents % 10;
    
    cout<<", " << cents / 5 << " nickels";
    cents = cents % 5;
    
    cout<<", " << cents / 1 <<" pennies.";
    cents = cents % 1;
    
   cout<<" That is " << "$" <<total / 100 << "."<<endl; //Converting to dollar amount
   
   cout<<"After the fee, you take home " << "$" << (total - int(0.109 * total)) / 100<< "."; //What you're left with after the fee
   

   
   
   
   
   
    
    
}