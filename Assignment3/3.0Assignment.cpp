/*James Floretta
  Date: 4/5/2017
  About: Rock, paper, scissors, lizards, spock game.
 */


#include <stdbool.h>
#include <string>
#include <iostream>
using namespace std;

int ROUNDS;
int USER_CHOICE;
int SCORE;
int PLAY;

class ComputersChoice { //Class that contains the random number function for the AI player
    private:
        int randNum = rand() % 5 + 1;
        
    public:
        
        void SetNum(int value) { //Program runs slow for some reason without this parameter and setting it equal to randNum
           randNum = value;
        }
        
        int GetNum() {
            return randNum;
        }  
        
        void printResult() {
        if (randNum == 1) {
            cout <<"The computer chose rock.";
        }
        
        else if (randNum == 2) {
            cout<<"The computer chose paper.";
        }
        
        else if (randNum == 3) {
            cout<<"The computer chose scissors.";
        }
        
        else if (randNum == 4) {
            cout<<"The computer chose lizard.";
        }    
        
        else {
            cout<<"The computer chose spock.";
        }    
            
            
        }       
};

//How many rounds does the user want to play function
int GetRounds() {  
    
    bool isValid = false;
    int ROUNDS = 0;
    
    while (!isValid) {
    
    cout<<"Do you want to play 3, 5 or 7 rounds?" << endl;
    cin>>ROUNDS;
    
    switch(ROUNDS) {
        case 3:
        case 5: 
        case 7:
           isValid = true;
           break;
        default:
            cout<<"Invalid input. Enter 3, 5 or 7."<<endl;
            break;
}
 }
       
    cout<<"You picked the best of " << ROUNDS << " rounds." << endl;
        return ROUNDS;
}    


int PlayRound() {
    cout<<"Enter 1 for rock, 2 for paper, 3 for scissors, 4 for lizard or 5 for spock."<<endl;
    cin>>USER_CHOICE;
    
    
    
    for (int i = 0; i < ROUNDS; i++) {
       
       
        
        
    }
    
    
    
}


    



int main() {
     GetRounds();
     
   
   
   
    

    //User Input
    
    
    switch(USER_CHOICE) {
        case 1:
            cout<<"You chose rock." << endl;;
            break;
        case 2:
            cout<<"You chose paper." << endl;
            break;
        case 3:
            cout<<"You chose scissors." << endl;
            break;
        case 4:
            cout<<"You chose lizard." << endl;
            break;
        case 5:
            cout<<"You chose spock." << endl;
            break;
        default:
            cout<<"Invalid input. Enter 1 for rock, 2 for paper, 3 for scissors, 4 for lizard or 5 for spock." << endl;
            break;
        
        
    }
    
    srand(time(NULL));
    
    //Object creation
    ComputersChoice randomNumber;
    
    //Fetches the random number and prints results accordingly
    randomNumber.GetNum();
    randomNumber.printResult();
    
    

    
    
    
    
    
}