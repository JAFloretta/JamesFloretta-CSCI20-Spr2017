/*  Name: James Floretta
    Date: 2/28/2017
    About: A random number generator that accepts user input. User decides
    which of the numbers are the minimum and maximum and also swaps values.
*/
   
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

int minimum;
int maximum;
int firstSwapValue;
int secondSwapValue;

//Swap function
void swapNum (int minimum, int maximum, int& firstSwapValue, int& secondSwapValue) {
    
    firstSwapValue = maximum;
    secondSwapValue = minimum;
    
}



//Random number generator
void randomNum(int minimum, int maximum, int& firstSwapValue, int& secondSwapValue) {
    int randomNumber;
    swapNum (minimum, maximum, firstSwapValue, secondSwapValue);
    srand(time(0));
    randomNumber = rand() % (maximum - minimum) + minimum;
    
    cout<<"Your random value is: " << randomNumber;
    
}


int main() {
   
   cout<<"Enter your minimum value: "; // user input
   cin>>minimum;
   
   cout<<"Enter your maximum value: ";
   cin>>maximum;
   
   randomNum(minimum, maximum, firstSwapValue, secondSwapValue); // function call

    
}

