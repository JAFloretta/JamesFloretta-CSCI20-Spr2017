/* James Floretta
   Date: 3/28/2017
   About: Determines taxes owed to the government or taxes owed to the payer due to overpayment. 
          Using marital status, gross income and how much you've payed into taxes, evaluates 
          how much you owe or not owe.
*/


#include <string>
#include <iostream>
using namespace std;

int maritalStatus;
double grossIncome = 0;
double AGI = 0.10; //Adjusted gross income
double exemption = 3900;
string name;
double paidTaxes = 0;

int main() {
   
   cout<<"What is your name?"<<endl;
   cin>>name;
   
   cout<<"Are you married? 1 for yes, 2 for no."<<endl;
   cin>>maritalStatus;
   
   switch(maritalStatus) {
      case 1: //If married, program executes through these conditionals depending on gross income
         cout<<"What is your gross income?"<<endl;
         cin>>grossIncome;
         
         if (grossIncome <= 17850) {
            grossIncome = (grossIncome * AGI) - exemption;
         }
         
         else if (grossIncome >= 17851 && grossIncome <= 72500) {
            grossIncome = (1785 + (grossIncome * 0.15)) - exemption;
         }
         
         else {
            grossIncome = (9982.50 + (grossIncome * 0.28)) - exemption;
         }
      break;
      case 2: //If single, program executes through these conditionals depending on gross income
         cout<<"What is your gross income?"<<endl;
         cin>>grossIncome;
         
         if (grossIncome <= 8925) {
            grossIncome = (grossIncome * AGI) - exemption;
         }
  
         else if (grossIncome >= 8926 && grossIncome <= 36250) {
            grossIncome = (892.50 + (grossIncome * 0.15)) - exemption;
         }
   
         else if (grossIncome >= 36251 && grossIncome <= 87850) {
            grossIncome = (4991.25 + (grossIncome * 0.25)) - exemption;
         }
            
         else {
            grossIncome = (17891.25 + (grossIncome * 0.28)) - exemption;
         }  
      break;
      
   }
      
      cout<<name<<", you owe: $"<<grossIncome<<endl; //Total taxes owed
         
      cout<<"How much have you payed into taxes?"<<endl;
      cin>>paidTaxes;
      
      grossIncome = grossIncome - paidTaxes; //Subtracts how much you owe from how much you've already paid
      
      if (grossIncome < paidTaxes) { //If earnings are less than how much you paid into taxes 
         cout<<"We owe you: $"<<grossIncome;
      }
   
      else {
         cout<<"You owe: $"<<grossIncome; //If earnings are more than your paid taxes
      }
   
   
   
   
}