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
        double Price;
        int Quantity;
        
        
    public:
        Item(); //constructor
        Item(string, double, int);
        
        void SetName(string);
        void SetPrice(double);
        void SetQuantity(int);
        
        
        string GetName(int index);
        double GetPrice();
        int GetQuantity();
        
       
};

Item::Item() { // Constructor. Utilizing vector to initialize array
    Name = {"bow $15 - ","arrow $2 - ","axe $30 - ","sword $25 - ","mace $35 - ","flail $20 - ","scepter $45 - ","wand $55 - ","armor $60 - ","staff $50"};
    Price = 0.0;
    Quantity = 0;
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
    Price = itemPrice;
}

void Item::SetQuantity(int itemQuantity) {
    Quantity = itemQuantity;
}

string Item::GetName(int index) {
    return Name[index];
} 

double Item::GetPrice() {
    return Price;
}

int Item::GetQuantity() {
    return Quantity;
}






int main() {
     Item ShowItems;

	 cout<<"Welcome to the battle store. Pick what you need for your quest." << endl;
	 for (int index = 0; index < 10; index++) {
	     cout<<ShowItems.GetName(index);
	 }

	    

return 0;


    
    
}