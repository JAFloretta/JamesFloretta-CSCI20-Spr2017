/* James Floretta
    4/25/2017
    About: A shopping cart that uses a parallel array to keep track of items and it's corresponding price. There is a limit of 2 for each item. 
    Total price is displayed at the end.
*/



#include <string>
#include <iostream>
using namespace std;


int main() {
    const int elements = 10;
    int choice;
    int totalPrice = 0;
    string prodLists[elements];
    string inventory[elements];
    int itemCost[elements];
    int inStock[elements];
    int i = 0;
    
    
    prodLists[0] = "1. ";
    prodLists[1] = "2. ";
    prodLists[2] = "3. ";
    prodLists[3] = "4. ";
    prodLists[4] = "5. ";
    prodLists[5] = "6. ";
    prodLists[6] = "7. ";
    prodLists[7] = "8. ";
    prodLists[8] = "9. ";
    prodLists[9] = "10. ";
    
    inventory[0] = "computer";
    inventory[1] = "tv";
    inventory[2] = "video game";
    inventory[3] = "movie";
    inventory[4] = "headphones";
    inventory[5] = "phone charger";
    inventory[6] = "phone case";
    inventory[7] = "battery";
    inventory[8] = "USB cable";
    inventory[9] = "flashlight";
    
    itemCost[0] = 700;
    itemCost[1] = 1500;
    itemCost[2] = 60;
    itemCost[3] = 25;
    itemCost[4] = 20;
    itemCost[5] = 40;
    itemCost[6] = 35;
    itemCost[7] = 15;
    itemCost[8] = 15;
    itemCost[9] = 45;
    
    inStock[0] = 2;
    inStock[1] = 2;
    inStock[2] = 2;
    inStock[3] = 2;
    inStock[4] = 2;
    inStock[5] = 2;
    inStock[6] = 2;
    inStock[7] = 2;
    inStock[8] = 2;
    inStock[9] = 2;
    
    
    for (i = 0; i < elements; i++) { // Displays the list of all items and costs
        cout<<prodLists[i] << inventory[i] << " costs $" << itemCost[i] <<". There are " << inStock[i] <<" in stock." << endl;
    }
    
    
    
    
  
    while (choice <= 10) {
         cout<<"Enter the corresponding number to which item(s) you want to buy." << endl;
         cin>>choice;
         
         if (choice > 10) { // Check for valid input
            cout<<"Enter a valid number. Try again:" << endl;
            cin>>choice;
        }
            
        if (choice >= 1) { // If choice is 1, you must subtract 1 to access element 0 
            choice = choice - 1;
            
            if (inStock[choice] == 0) { // If the stock is 0, its out of stock
                cout<<"Item is out of stock." << endl;
            }
           else {
               cout<<"You chose " << inventory[choice] << ". Thats costs $" << itemCost[choice] << endl;
               inStock[choice] = inStock[choice] - 1; //Subtract 1 from stock
               totalPrice = itemCost[choice] + totalPrice; // Total price
               
               cout<<"Total price is " << totalPrice << endl;
           }
             
            
        }
        
        
        
        
    
        
        
        
        
        
    }     
    
}