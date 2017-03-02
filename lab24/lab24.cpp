/*  Name: James Floretta
    Date: 3/02/2017
    About: A random number generator that accepts user input. User decides
    which of the numbers are the minimum and maximum and also swaps values.
    Also does a pound to kilogram and kilogram to pound conversion using the 
    random number.
*/

#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

//global vars
int minimum;
int maximum;
int firstSwapValue;
int secondSwapValue;
int randomNumber;
double LBtoKG;
double KGtoLB;

//Swap function
void swapNum (int minimum, int maximum, int& firstSwapValue, int& secondSwapValue) {
    
    firstSwapValue = maximum;
    secondSwapValue = minimum;
}

//Random number generator function
void randomNum(int minimum, int maximum, int& firstSwapValue, int& secondSwapValue) {
    
    swapNum (minimum, maximum, firstSwapValue, secondSwapValue); //local var
    srand(time(0));
    randomNumber = rand() % (maximum - minimum) + minimum;
}

//Pounds to kilogram function
void poundToKg (int minimum, int maximum, int& firstSwapValue, int& secondSwapValue) {
    
    LBtoKG = randomNumber * 0.45; 
    
}

//Kilogram to pounds function
void kgToPound(int minimum, int maximum, int& firstSwapValue, int& secondSwapValue) {
    
    KGtoLB = LBtoKG / 0.45; 
    
}



int main() {
   
    cout<<"Enter your minimum value: "; // user input
    cin>>minimum;
       
    cout<<"Enter your maximum value: ";
    cin>>maximum;
       
    randomNum(minimum, maximum, firstSwapValue, secondSwapValue); // function call for random number
    cout<<"Your random number is: " << randomNumber << endl;
    
    poundToKg(minimum, maximum, firstSwapValue, secondSwapValue); // function call LB to KG
    cout<<"Your random number in kilograms is: " << LBtoKG << endl;
    
    kgToPound(minimum, maximum, firstSwapValue, secondSwapValue); // function call KG to LB
    cout<<"Your random number in pounds is: " << KGtoLB;
    
    
}

