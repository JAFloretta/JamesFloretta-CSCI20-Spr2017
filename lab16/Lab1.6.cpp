//James Floretta
//Monsters
//Date: 2/9/2017

#include<string>
#include <iostream>
using namespace std;

struct Monster {
    string name;
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
};

int main() {
    //First monster
    Monster MonsterOne;
    MonsterOne.name = "OneMonster";
    MonsterOne.head = "Zombus";
    MonsterOne.eyes = "Spritem";
    MonsterOne.ears = "Vegitas";
    MonsterOne.nose = "None";
    MonsterOne.mouth = "Wackus";
    cout<<"This is Monster One: "<<endl;
    cout<<"Name: "<<MonsterOne.name<<endl;
    cout<<"Head: "<<MonsterOne.head<<endl;
    cout<<"Eyes: "<<MonsterOne.eyes<<endl;
    cout<<"Ears: "<<MonsterOne.ears<<endl;
    cout<<"Nose: "<<MonsterOne.nose<<endl;
    cout<<"Mouth: "<<MonsterOne.mouth<<endl;

    //Second monster
    Monster MonsterTwo;
    MonsterTwo.name = "MonsterTwo";
    MonsterTwo.head = "Franken";
    MonsterTwo.eyes = "Vegitas";
    MonsterTwo.ears = "Spritem";
    MonsterTwo.nose = "Spritem";
    MonsterTwo.mouth = "Wackus";
    cout<<"This is Monster Two: "<<endl;
    cout<<"Name: "<<MonsterTwo.name<<endl;
    cout<<"Head: "<<MonsterTwo.head<<endl;
    cout<<"Eyes: "<<MonsterTwo.eyes<<endl;
    cout<<"Ears: "<<MonsterTwo.ears<<endl;
    cout<<"Nose: "<<MonsterTwo.nose<<endl;
    cout<<"Mouth: "<<MonsterTwo.mouth<<endl;
    
    //Third monster
    Monster MonsterThree;
    cout<<"This is Monster Three:"<<endl;
    cout<<"Name: ";
    cin>>MonsterThree.name;
    cout<<"Head: ";
    cin>>MonsterThree.head;
    cout<<"Eyes: ";
    cin>>MonsterThree.eyes;
    cout<<"Ears: ";
    cin>>MonsterThree.ears;
    cout<<"Nose: ";
    cin>>MonsterThree.nose;
    cout<<"Mouth: ";
    cin>>MonsterThree.mouth;
   
    //Fourth monster
    Monster MonsterFour;
    cout<<"This is Monster Four:"<<endl;
    cout<<"Name: ";
    cin>>MonsterFour.name;
    cout<<"Head: ";
    cin>>MonsterFour.head;
    cout<<"Eyes: ";
    cin>>MonsterFour.eyes;
    cout<<"Ears: ";
    cin>>MonsterFour.ears;
    cout<<"Nose: ";
    cin>>MonsterFour.nose;
    cout<<"Mouth: ";
    cin>>MonsterFour.mouth;
}