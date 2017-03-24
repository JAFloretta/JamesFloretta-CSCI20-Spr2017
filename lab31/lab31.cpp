/* James Floretta
   Date: 3/22/2017
   About: 
*/

#include <string>
#include <iostream>
using namespace std;

const double dumbPhone = 0.00;
const double smartPhone = 5.00;
const double tabletPhone = 10.00;
const double monthlyCharge = 30.00;
double unlimitedData = 75.00; // Up to 10gb then $1.50 for each gb after that
double payPerDataOne = 5.00; // $5.00 for first gb of data and 0.75 for each additional gb of data
double payPerDataTwo = 1.50; // $1.50 for each gb of data up until 15gb then $3.00 for gb used after that
double corporateDiscount = 0.10;
double familyPlan = 3.00; // $3.00 per phone line over 2 lines



int main() {
    
    double runningTotal = 0;
    int numOfPhones = 0; // total # of phones on a phone line. Used for the family plan conditional
    int phoneType_1 = 0; // # of smart phones
    int phoneType_2 = 0; // # tablet phones
    int phoneType_3 = 0; // # dumb phones
    int gB = 0;
    string dataPlan;
    
    
    /*---------------------------------------------------
                    Family Plan Conditional
    ----------------------------------------------------*/
    cout<<"Please enter the total number of phones on this line:" << endl; 
    cin>>numOfPhones; 
    
    if (numOfPhones > 2) { // family plan condition (the minus 6 accounts for the first 2 phones)
        runningTotal = (familyPlan * numOfPhones) - 6;
    }
    /*----------------------------------------------------
                    Number of Each Type of Phone
    -----------------------------------------------------*/
    cout<<"How many smart phones?" << endl; // # of smart phones
    cin>>phoneType_1;
    
    cout<<"How many tablet phones?" << endl; // # of tablet phones
    cin>>phoneType_2;
    
    cout<<"How many dumb phones?" << endl; // # of dumb phones
    cin>>phoneType_3;
    
    if (phoneType_1 >= 1) {
        runningTotal = runningTotal + (smartPhone * phoneType_1);
        
    }
    
    if (phoneType_2 >= 1) {
        runningTotal = runningTotal + (tabletPhone * phoneType_2);
       
    }
    
    else {
        runningTotal = dumbPhone * phoneType_3;
        
    }
    /*----------------------------------------------------------
                        DATA PLAN
    ------------------------------------------------------------*/ 
    cout<<"Do you want unlimited talk and text or unlimited data?" << endl;
    cin>>dataPlan;
    
    cout<<"How many GB's do you need?" << endl;
    cin>>gB;
    
    if (dataPlan == "unlimited talk and text") {
        runningTotal = runningTotal + monthlyCharge;
    }
    if (dataPlan == "unlimited data") {
        runningTotal = runningTotal + unlimitedData;
    }
 
  
    
    cout<<"Your total is: $" << runningTotal;
    
    
}