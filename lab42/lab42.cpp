/* James Floretta
    4/13/2017
    About:
*/



#include <string>
#include <iostream>
using namespace std;


int main() {
    const int elements = 10;
    string choice;
    int totalPrice = 0;
    string items[elements] = {"computer", "tv", "video game", "movie", "headphones", "phone charger", "phone case", "battery", "USB cable", "flashlight"};
    int price[elements] = {700, 1500, 60, 25, 20, 40, 35, 15, 15, 45};

    cout<<"Welcome to my stupid store. Pick whatever you want and get out." << endl;
    cout<<"computer - $700"<< endl;
    cout<<"tv - $1500"<< endl;
    cout<<"video game - $60"<< endl;
    cout<<"movie - $25"<< endl;
    cout<<"headphones - $20"<< endl;
    cout<<"phone charger - $40"<< endl;
    cout<<"phone case - $35"<< endl;
    cout<<"battery - $15"<< endl;
    cout<<"USB cable - $15"<< endl;
    cout<<"flashlight - $45"<< endl;
    
    cout<<"Enter what you want:" << endl;
    cin>>choice;
    
   
    for (int i = 0; i < price[elements]; i++) {
        
        
        if (choice == "computer") {
            
            totalPrice+=price[elements];
    }    
    
        
    
    
    
    
    
    
    
    
    
        }  
     

    
    cout<<"total: " << totalPrice; 
}