/*James Floretta
  Date: 4/5/2017
  About: Rock, paper, scissors, lizards, spock game.
 */



#include <string>
#include <iostream>
using namespace std;

int rounds = 0;
int value = 0;
int user_choice = 0;


class ComputersChoice { //Class that contains the random number function for the AI player
    private:
        int randNum;
        
    public:
        
        ComputersChoice() {
            randNum = value();
        }
        int GetChoice() {
            return randNum;
        }
        int value() {
            randNum = rand() % 5 + 1;
            return randNum;
        }
        
        
        void printResult() {
        if (randNum == 1) {
            cout <<"The computer chose rock. ";
        }
        
        else if (randNum == 2) {
            cout<<"The computer chose paper. ";
        }
        
        else if (randNum == 3) {
            cout<<"The computer chose scissors. ";
        }
        
        else if (randNum == 4) {
            cout<<"The computer chose lizard. ";
        }    
        
        else {
            cout<<"The computer chose spock. ";
        }    
            
            
        }       
};





//How many rounds does the user want to play function
int GetRounds() {  
    
    bool isValid = false;
    
    
    while (!isValid) {
    
    cout<<"Do you want to play 3, 5 or 7 rounds?" << endl;
    cin>>rounds;
    
    switch(rounds) {
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
           
    cout<<"You picked the best of " << rounds << " rounds." << endl;
        return rounds;

}    

//User input
int GetUser() {
    
    
    
    bool isValid = false;
    
    
    while (!isValid) {
    
    cout<<"Enter 1 for rock, 2 for paper, 3 for scissors, 4 for lizard, 5 for spock." << endl;
    cin>>user_choice;
    
    switch(user_choice) {
        case 1:
            isValid = true;
            cout<<"You chose rock. ";
            break;
        case 2: 
            isValid = true;
            cout<<"You chose paper. ";
            break;
        case 3:
            isValid = true;
            cout<<"You chose scissors. ";
            break;
           break;
        case 4:
            isValid = true;
            cout<<"You chose lizard. ";
            break;
        case 5:
            isValid = true;
            cout<<"You chose spock. ";
            break;
        default:
            cout<<"Invalid input."<<endl;
            break;

        
    }
}
}
 
int GetScore() {
    int compScore = 0;
    int humanScore = 0;
    int tie = 0;
    
    if (user_choice == value) {
        tie++;
    }
    
    else if (user_choice == 1 && value == 2 || value == 5) {
        humanScore++;
     }
    
    else if (user_choice == 2 && value == 1 || value == 5) {
        humanScore++;
    }
    
    else if (user_choice == 3 && value == 2 || value == 4) {
        humanScore++;
    }
    
    else if (user_choice == 4 && value == 5 || value == 2) {
        humanScore++;
    }
    
    else if (user_choice == 5 && value == 3 || value == 1) {
        humanScore++;
    }
    
    else {
        compScore++;
    }
        cout<<"Human score: " << humanScore << " Computer score: " << compScore << " Ties: " << tie << endl;
} 
 
int main() {
    GetRounds();
    
    for (int i = 1; i <= rounds; i++) {
    ComputersChoice A;
    srand(time(NULL));
    GetUser();
    A.printResult();
    
    cout<<"This was round " << i << "." << " On to round " << i + 1 << "." << endl;
    
   
}
   GetScore();
    
}