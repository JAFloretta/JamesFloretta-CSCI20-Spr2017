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
    string line;
    
   
    cout<<"Enter file name you wish to open: " << endl;
    cin>>line;
    
    // Opens file
    inFS.open(line);
    outFS.open("transcript.html");
    
    // Check to see if file is in directory
    if (!inFS.is_open()) {
        cout<<"Could not open file " << line << ". Try again: " << endl;
        cin>>line;
        return 1;
    }
        if (inFS.is_open() && outFS.is_open()) {
            while (getline(inFS, line)) {
                outFS<<line<<endl;
            }
           
        }
    
    
 
     inFS.close();
     outFS.close();
}