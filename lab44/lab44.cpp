/* James Floretta
    4/20/2017
    About:
*/

#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;






int main() {
    char f_name[10]; // first name
    char l_name[20]; // last name
    int i = 0;
   
    
    
    
    // First name input
    cout<<"What is your first name? Max of 10 alphabetic characters." << endl;
    cin>>f_name;
    
    
    while (strlen(f_name) > 10) { // If the length of the string is > 10, evaluates to false
        cout<<"10 characters max. Enter your first name again." << endl;
        cin>>f_name;
    }
                        
    // Last name input                
    cout<<"What is your last name? Max of 20 alphabetic characters." << endl;
    cin>>l_name;
    
    
    while (strlen(l_name) > 20) { // If the length of the string is > 20, evaluates to false
        cout<<"20 characters max. Enter your last name again." << endl;
        cin>>l_name;
    }
    
    if (strcmp(f_name, l_name) == 0) { // Compares first and last name
        cout<<"Warning: You entered the same first and last name. Try again." << endl;
        cout<<"Enter your first name: " << endl;
        cin>>f_name;
        cout<<"Enter your last name: " << endl;
        cin>>l_name;
    }
        
    
  
    // Username options
    cout<<"Usernames available: " << endl;
    cout<< strncat(f_name, l_name, 2) << endl;
    cout<< strncat(f_name, "123", 5) << endl;
    cout<< strncat(l_name, f_name, 5) << endl;
    
    
    
 
    
}