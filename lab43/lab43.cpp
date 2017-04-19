/* James Floretta
   Date: 4/18/2017
   About: A shopping cart that keeps track of total price, inventory and price of items. The class 
   keeps track of the items, price and quantity.

*/
#include <vector>
#include <string>
#include <iostream>
using namespace std;


/*************************************************************
                    ITEM, PRICE AND QUANTITY
*************************************************************/
class Item {
    private:
        vector<string> Name; // Vector to initialize array in the constructor
        vector<double> Price;
        vector<int> Quantity;
        
        
    public:
        Item(); //constructor
        Item(string, double, int);
        
        void SetName(string);
        void SetPrice(double);
        void SetQuantity(int);
        
        
        string GetName(int index);
        double GetPrice(int p_index);
        int GetQuantity(int q_index);
        
       
};

Item::Item() { // Constructor. Utilizing vector to initialize array
    Name = {"bow $15","arrow $2","axe $30","sword $25","mace $35","flail $20","scepter $45","wand $55","armor $60","staff $50"};
    Price = {15,2,30,25,35,20,45,55,60,50};
    Quantity = {1,1,1,1,1,1,1,1,1,1};
}

Item::Item(string itemName, double itemPrice, int itemQuantity) { // Overload constructor
    SetName(itemName);
    SetPrice(itemPrice);
    SetQuantity(itemQuantity);
   
}

void Item::SetName(string itemName) {
    Name.push_back(itemName);
}

void Item::SetPrice(double itemPrice) {
    Price.push_back(itemPrice);
}

void Item::SetQuantity(int itemQuantity) {
    Quantity.push_back(itemQuantity);
}

string Item::GetName(int index) {
    return Name[index];
} 

double Item::GetPrice(int p_index) {
    return Price[p_index];
}

int Item::GetQuantity(int q_index) {
    return Quantity[q_index];
}






int main() {
    Item ShowItems;
    Item ShowPrice;
    Item ShowQuantity;
    
    string userChoice;
    int totalPrice;
    int addItem = 0;
    
	 cout<<"Welcome to the battle store. Pick what you need for your quest." << endl;
	 for (int index = 0; index < 10; index++) {
	     cout<<ShowItems.GetName(index) << endl;
	 }
      cin>>userChoice;    
    
     if (userChoice == "bow") {
         
         for (int p_index = 0; p_index < 1; p_index++) {
             cout<<"You chose a bow. That costs $" << ShowPrice.GetPrice(p_index);
         }
        
            for (int q_index = 0; q_index < 1; q_index++) {
                
                cout<<" There are " << ShowQuantity.GetQuantity(q_index)<< " bows left in stock";
            }
         
         
         
     }


	    

return 0;


    
    
}