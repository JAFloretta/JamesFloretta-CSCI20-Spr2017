/*James Floretta
  Date: 4/10/2017
  About: Rock, paper, scissors, lizards, spock game. Human vs computer. User enters 1 for rock, 2 for paper, 3 for scissors, 4 for lizard and 5 for spock. The computer generates a number between
    1 and 5. Rock beats lizard and scissors, paper beats spock and rock, scissors beats paper and lizard, lizard beats spock and paper, spock beats scissors and rock. 
  Notes: Score function not working
 */



#include <string>
#include <iostream>
using namespace std;




class ComputersChoice { //Class that contains the random number function for the AI player
    private:
        int randNum;
        
    public:
        
       void SetComputersChoice(int randomNumber);
       int GetComputersChoice();
          
};
 void ComputersChoice::SetComputersChoice(int randomNumber) {
     int randNum = randomNumber;
 }
int ComputersChoice::GetComputersChoice() {
    srand(time(NULL));
    return randNum = (rand() % 5) + 1;
}





 
int main() {
    ComputersChoice RandomNum;
    
    int the_Number = RandomNum.GetComputersChoice();
    int playersChoice;
    int humanScore = 0;
    int compScore = 0;
    int numOfGames = 0;
    double gamesPlayed = 1;
    
    cout<<"How many rounds do you want to play?";
    cin>>numOfGames;
    
    while (playersChoice <= 5 && the_Number <= 5 && gamesPlayed <= numOfGames) {
        the_Number = RandomNum.GetComputersChoice();
        
        cout<<"Enter 1 for rock, 2 for paper, 3 for scissors, 4 for lizard, 5 for spock." << endl;
        cin>>playersChoice;
        
        switch(playersChoice) {
            case 1:
                cout<<"You chose rock" << endl;
            break;
            case 2:
                cout<<"You chose paper" << endl;
            break;
            case 3:
                cout<<"You chose scissors" << endl;
            break;
            case 4:
                cout<<"You chose lizard" << endl;
            break;
            case 5:
                cout<<"You chose spock" << endl;
            break;
            default:
                cout<<"Enter a valid value" << endl;
            break;
        }
        
        switch(the_Number) {
            case 1:
                cout<<"The computer chose rock" << endl;
            break;
            case 2:
                cout<<"The computer chose paper" << endl;
            break;
            case 3:
                cout<<"The computer chose scissors" << endl;
            break;
            case 4:
                cout<<"The computer chose lizard" << endl;
            break;
            case 5:
                cout<<"The computer chose spock" << endl;
            break;
            default:
                cout<<"Enter valid value" << endl;
            break;
        }
        
        if (playersChoice == 1) {
            if (the_Number == 1) {
                cout<<"Tie" << endl;
            }
            if (the_Number == 2) {
                cout<<"You lose" << endl;
                compScore++;
            }
            if (the_Number == 3) {
                cout<<"You win" << endl;
                humanScore++;
            }
            if (the_Number == 4) {
                cout<<"You win" << endl;
                humanScore++;
            }
            if (the_Number == 5) {
                cout<<"You lose" << endl;
                compScore++;
            }
       
      }
        if (playersChoice == 2) {
            if (the_Number == 1) {
                cout<<"You win" << endl;
                humanScore++;
            }
            if (the_Number == 2) {
                cout<<"Tie" << endl;
                
            }
            if (the_Number == 3) {
                cout<<"You lose" << endl;
                compScore++;
            }
            if (the_Number == 4) {
                cout<<"You lose" << endl;
                compScore++;
            }
            if (the_Number == 5) {
                cout<<"You win" << endl;
                humanScore++;
            }
        }
        if (playersChoice == 3) {
            if (the_Number == 1) {
                cout<<"You lose" << endl;
                compScore++;
            }
            if (the_Number == 2) {
                cout<<"You win" << endl;
                humanScore++;
            }
            if (the_Number == 3) {
                cout<<"Tie" << endl;
                
            }
            if (the_Number == 4) {
                cout<<"You win" << endl;
                humanScore++;
            }
            if (the_Number == 5) {
                cout<<"You win" << endl;
                humanScore++;
            }
        }
        if (playersChoice == 4) {
            if (the_Number == 1) {
                cout<<"You lose" << endl;
                compScore++;
            }
            if (the_Number == 2) {
                cout<<"You win" << endl;
                humanScore++;
            }
            if (the_Number == 3) {
                cout<<"You lose" << endl;
                compScore++;
            }
            if (the_Number == 4) {
                cout<<"Tie" << endl;
               
            }
            if (the_Number == 5) {
                cout<<"You win" << endl;
                humanScore++;
            }
        }
           if (playersChoice == 5) {
            if (the_Number == 1) {
                cout<<"You win" << endl;
                humanScore++;
            }
            if (the_Number == 2) {
                cout<<"You lose" << endl;
                compScore++;
            }
            if (the_Number == 3) {
                cout<<"You win" << endl;
                humanScore++;
            }
            if (the_Number == 4) {
                cout<<"You lose" << endl;
                compScore++;
            }
            if (the_Number == 5) {
                cout<<"Tie" << endl;
            }
            } 
           gamesPlayed = gamesPlayed + 1; 
        }
    
    if (compScore > humanScore) {
        cout<<"Final: You lose" << endl;
    }
    else if (compScore < humanScore) {
        cout<<"Final: You win" << endl;
    }
    else {
        cout<<"Final: tie" << endl;
    }
}
        