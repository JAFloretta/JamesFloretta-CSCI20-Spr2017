/*James Floretta
  Date: 5/02/2017
  Compares student answers (.txt) to the answer key (.txt) and outputs students name, overall score and questions missed to a text document.

*/


#include <fstream>
#include <string>
#include <iostream>
using namespace std;

   





int main() {
    //string name[12];
    string answers[126];
    string line; //temp
    string line2; //temp
    int i = 0; // Stores names
    int  j = 0; // Stores answers
    int n = 0;
    
    ifstream inAnswerKey;
    ifstream inStudentAnswers;
    ofstream outStudentResults;
    
    inAnswerKey.open("answerkey.txt");
    inStudentAnswers.open("studentanswers.txt");
    outStudentResults.open("studentresults.txt");
    
    // Check to see if files opened
    if (!inAnswerKey.is_open() || !inStudentAnswers.is_open() || !outStudentResults.is_open()) {
        cout<<"One or more files could not open." << endl;
        return 0;
    }
    
    // Negates the first and last name. Preparing for answer comparisons
    if (inStudentAnswers.good()) {
        string name[23];   
        
        for (i = 0; i < 23; i++) {
            inStudentAnswers >> name[i];
        }
       cout<<name[i];
    }
      
   
    
    
    
    
    
    
    
    
    inAnswerKey.close();
    inStudentAnswers.close();
    outStudentResults.close();
    
} // end main