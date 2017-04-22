/* James Floretta
   4/21/2017
   About: User enters first name (10 chars max) and last name (20 chars max). The system outputs potential usernames. Usernames cannot match, if they do, 
   user is prompted to try again.
*/


#include <string>
#include <iostream>
using namespace std;


int main() {
    string f_name; // First name
    string l_name; // Last name
    
   //First name input
   cout<<"Please enter your first name. 10 character max:" << endl;
   cin>>f_name;
    
   while (f_name.length() > 10) {
      cout<<"You entered more than 10 characters, try again:" << endl;
      cin>>f_name;
    }
   
   //Last name input
   cout<<"Please enter your last name. 20 character max:" << endl;
   cin>>l_name;
    
   while (l_name.length() > 20) {
      cout<<"You entered more than 20 characters, try again:" << endl;
      cin>>l_name;
    }
   
   //If the first and last name match
   if (f_name.compare(l_name) == 0) {
      cout<<"Warning: You entered the same first and last name. Try again." << endl;
      cout<<"First name:" << endl;
      cin>>f_name;
      cout<<"Last name:" << endl;
      cin>>l_name;
    }
   
   //Available usernames
   cout<<"Usernames available: " << endl;
   
   f_name.resize(2); // resize
   cout<<f_name << l_name << endl;
   
   l_name.append("123"); // append
   cout<<f_name << l_name << endl;
   
   f_name.insert(2, "_"); // insert
   cout<<f_name << l_name << endl;
   
   
   return 0;
}