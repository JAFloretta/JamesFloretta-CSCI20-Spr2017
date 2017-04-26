/* James Floretta
   4/25/2017
   Reads student grades from a text file and outputs semester and overall GPA to an html page.
*/





#include <fstream>
#include <string>
#include <iostream>
using namespace std;





int main() {
    ofstream outFS;
    ifstream inFS;
    string inputFilename;
    string outputFilename;
    
   
    cout<<"Enter file name: " << endl;
    cin>>inputFilename;
    
    // Opens file
    inFS.open(inputFilename);
    
    // Check to see if file is in directory
    if (!inFS.is_open()) {
        cout<<"Could not open file " << inputFilename << endl;
        return 1;
    }
    
    // Reads each line of the file
    while (getline(inFS, inputFilename)) {
        cout<<inputFilename;
    }
    inFS.close();
    
}