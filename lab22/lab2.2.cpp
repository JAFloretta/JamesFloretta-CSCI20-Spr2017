//James Floretta
//Using a function call for a random number generator
//Date: 2/21/2017


#include <iostream>
using namespace std;

int randomNumber;

void randomNum() {
    srand(time(NULL)); //Changes the number generated each time the program is ran or the number remains static
    randomNumber = rand() % 100 + 1; //Generates a number 1-100
    cout<<"The random number generated is: "<< randomNumber;
}

int main() {
    randomNum(); //Function call
    
}