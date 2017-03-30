/*James Floretta
  3/30/2017
  A number guessing game. Random generated number by the computer and the user has 5 attempts at guessing the correct value.
*/


#include <string>
#include <iostream>
using namespace std;





int main() {
    
    int number = rand() % 50 + 1;
    int guess; //user guess stored here
    int attempts; //keeps track of the number of attempts
    srand(time(NULL));


for (attempts = 6; attempts--;) { //Decrements attempts for wrong guesses
   
while(attempts > 0) {    
    
    cout<<"Enter a number between 1 and 50." << endl;
    cin>>guess;
    
    if (guess > 50 || guess < 1 ) { //if guess is too large or too small
        cout<<"Please enter a valid value." << endl;
    }   
    
    if (guess > number) { //too high
        cout<<"Too high." << endl;
        attempts--;
        
    }
    
    else if (guess < number) { //too low
        cout<<"Too low." << endl;
        attempts--;
        
    }   
    
    else if (guess == number) { //if user guesses correct
        cout<<"Just right." << endl;
        cout<<"It took you "<<attempts<<" tries." << endl;
        
    }
    
    if (attempts == 0) {
        cout<<"You ran out of attempts." << endl; //Ends game if you run out of attempts
    }
    
}    
}
}