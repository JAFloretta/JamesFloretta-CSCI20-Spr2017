/* James Floretta
   Date: 5/21/2017
   Test a persons knowledge about the planets. Asks user questions, compare questions against an answer key and output total score and missed questions to screen
   and a text document.
*/


#include <fstream>
#include <string>
#include <iostream>


using namespace std;

int const NUM_QUESTIONS = 10;

class GradeTest {
    private:
    	// Keeps track of missed questions
        int missedQ_[NUM_QUESTIONS];
        
        // The user's grade
        char overallGrade_;
        
        // The answers from the user
        string userAnswer[NUM_QUESTIONS];
        
        // The answers from the answer file
        string answerKey[NUM_QUESTIONS];
        
        // The questions from the question file
        string testQuestions[NUM_QUESTIONS];
        
    public:
    	// Default constructor
        GradeTest();
        
        // Calculate the user's overall grade.
        void SetOverallGrade ();
        
        // Determine which questions were wrong.
        void SetMissedQuestions ();
        
        // Read the questions in from the question file.
        void GetTestQuestions();
        
        // Read the answers in from the answer file;.
        void GetAnswers();
        
        // Read the user's answers in from standard input.
        void GetStudentAnswers();
        
        // Print the results of the test.
        void GetResults();
        
}; // end class

// Default constructor
GradeTest::GradeTest() : overallGrade_('Z') {
	// Set the missed questions array to all zeros. 
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        missedQ_[i] = 0;
    }
}

// Grade the test function
void GradeTest::SetOverallGrade() {
    int points = 0;
    
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        if (userAnswer[i] == answerKey[i]) {
            points = points + 1;
        }
    }
	
	// Grading system
	if (points >= 9) {
		overallGrade_ = 'A';
	}
	else if (points >= 8) {
		overallGrade_ = 'B';
	}
	else if (points >= 7) {
		overallGrade_ = 'C';
	}
	else if (points >= 6) {
		overallGrade_ = 'D';
	}
	else {
		overallGrade_ = 'F';
	}
}

// Store test questions in string of arrays // Loads questions
void GradeTest::GetTestQuestions() {
	// Open an input file stream for the questions file
    ifstream finT("testquestions.txt");
    
    // Check if the file opened correctly
    if(not finT.is_open())
    {
    	// Print error message and return from function.
    	cout << "Error: \"could not open testquestions.txt\"\n";
    	return;
    }
    
    // Read the questions from the question file.
    for (int i = 0; i < NUM_QUESTIONS; i++) {
		// Make sure input was actually read in.
		if(!getline(finT, testQuestions[i]))
			break;
    }
}

void GradeTest::GetAnswers()
{
	// Open an input stream for the answer file.
	ifstream finT("answerkey.txt");
    
    // Check if the file opened correctly.
    if(not finT.is_open())
    {
    	// Print error message and return from function.
    	cout << "Error: \"could not open answerkey.txt\"\n";
    	return;
    }
    
    // Read answers from the answer file.
    for (int i = 0; i < NUM_QUESTIONS; i++) {
    	// Make sure input was actually read in.
		if(!getline(finT, answerKey[i]))
			break;
    }
}

//Get user input
void GradeTest::GetStudentAnswers() {
	for (int i = 0; i < NUM_QUESTIONS; i++) {
		// Display the question 
		cout << testQuestions[i] << " " << flush;
		// Make sure input was actually read in.
		if(!getline(cin, userAnswer[i]))
			break;
    }
}


// Number of missed questions
void GradeTest::SetMissedQuestions () {
    for (int i = 0; i < NUM_QUESTIONS; i++) {

		if (userAnswer[i] == answerKey[i]) {
		    missedQ_[i] = 0;
		}
		else {
		    missedQ_[i] = 1;
		}
    }
    
}
   
void GradeTest::GetResults() {
	// Open output file stream for appending.
    ofstream fout("results.txt", std::ofstream::app);
    
    // Check if file was opened, which is should be.
    if(not fout.is_open())
    {
    	cout << "Error: \"could not open results.txt\"\n";
    	return;
    }
    
    cout<<"Overall grade: " << overallGrade_ << endl;
    fout<<"Overall grade: " << overallGrade_ << endl;
    cout<<"Missed questions: ";
    fout<<"Missed questions: ";
    
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        if (missedQ_[i] == 1) {
            cout<<i + 1  << " ";
            fout<<i + 1 << " ";
        }
    }
        
	cout << endl;
	fout << endl;
}

int main () {
	GradeTest GradeIt;
	
	GradeIt.GetAnswers();
	GradeIt.GetTestQuestions();
	GradeIt.GetStudentAnswers();
	GradeIt.SetOverallGrade();
	GradeIt.SetMissedQuestions();
	GradeIt.GetResults(); 
}
