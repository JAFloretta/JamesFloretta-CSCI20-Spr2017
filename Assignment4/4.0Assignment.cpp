/*James Floretta
  Date: 5/02/2017
  Compares student answers (.txt) to the answer key (.txt) and outputs students name, overall score and questions missed to a text document.

*/


#include <fstream>
#include <string>
#include <iostream>
using namespace std;


class TestScorer {
    private:
        string key;
       
    public:
        TestScorer(string k); // default constructor
        
        int calculateScore(string testAnswers);
};

TestScorer::TestScorer(string k) {
   
 key = k;
}

int TestScorer::calculateScore(string testAnswers) {
    int rightAnswers = 0;
    int wrongAnswers = 0;
    
    for (int i = 0; i < key.size(); i = i + 2) {
        if (key.at(i) == testAnswers.at(i)) {
            rightAnswers++;
        }
        
        else {
            wrongAnswers =  wrongAnswers * 0;
        }
        
    }
    
    return rightAnswers;
    
}

string fileToString() {
    ifstream inStudentAnswers("studentanswers.txt");
    ifstream inAnswerKey("answerkey.txt");
    ofstream outStudentResults("studentresults.txt");
    
    string name;
    string answers;
    
    
    if (!inStudentAnswers.is_open() || !inAnswerKey.is_open() || !outStudentResults.is_open()) {
        cout<<"One or more files did not open." << endl;
    }
    
    



int main() {
  
   /* Test GradeIt; // Object 
    
   
    
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
    
     
       
    
    
    
    inAnswerKey.close();
    inStudentAnswers.close();
    outStudentResults.close();
    */
} // end main