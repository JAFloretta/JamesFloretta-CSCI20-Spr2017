/* James Floretta
   Date: 5/04/2017
   Palindrome program. Enter a name less than 10 characters and displays the first letter, the name you entered, 
   and the reverses the order of letter in your time minus the first letter.
   Lets you know if your name is a palindrome.
*/


#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    char *name = new char[0]; // Pointer pointing to new memory location array

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;

    char *head  = name; // Storing head to names location ( new char[nameLength) )
    char *tail = name; // Storing tail to names location  ( new char[nameLength) )
    nameLength = strlen(name); // Gets the string length of name which is name + head + tail

    cout << "Your word is " << *name << endl; // points to name

    if (nameLength<10)
    {
         while (*head != '\0') // Prints the name you entered
         {
                cout << *head;
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1];

     if (nameLength < 10)
     {
          while (tail != name) // Takes away every letter except the first letter of the name
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name; // Takes away the first letter of the name and spells the remaining letters backwards
     tail = &name[strlen(name) - 1];

     head++;
     tail--;

     if (*head == *tail)
     {
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}