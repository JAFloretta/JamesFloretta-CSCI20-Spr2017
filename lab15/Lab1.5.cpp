//James Floretta
//Mad Lib
//"Be Kind" mad lib taken from www.madtakes.com with a mix of my own to meet the length requirement.
//Date: 2/7/2017

#include<string>
#include <iostream>
using namespace std;

int main() {
    
    string noun = "";
    string pluralNoun = "";
    string noun2 = "";
    string place = "";
    string adjective = "";
    string noun3 = "";
    
    cout<<"Please enter a noun: ";
    cin>>noun;
    cout<<"Please enter a plural noun: ";
    cin>>pluralNoun;
    cout<<"Please enter another noun: ";
    cin>>noun2;
    cout<<"Please enter a place: ";
    cin>>place;
    cout<<"Please enter an adjective: ";
    cin>>adjective;
    cout<<"Please enter another noun: ";
    cin>>noun3;
    
    cout<<"Be kind to your " << noun << "-footed " << pluralNoun;
    cout<<" For a duck may be somebody's " << noun2 << ", ";
    cout<<"be kind to your " << pluralNoun << " in " << place;
    cout<<" where the weather is always " << adjective << ".";
    cout<<" You may think that this is the "<< noun3 << ", "<< "well it is." << endl;
    cout<<"We are nearing the end of this " << noun2 << ", "<< "I hope you had " << adjective << " because I did.";
    cout<<" Farewell and have a "<< adjective << " day!";
    
}