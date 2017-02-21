//James Floretta
//Calculating old/new windchill formula and determining the difference
//Date: 2/21/2017

#include <cmath>
#include <iostream>
using namespace std;


int main () {
    
    double difference;
    double oldWindChill;
    double newWindChill;
    int tempF;
    int velocity;
    
    //Old windchill formula
    cout<<"Enter the velocity (mph) for the old style windchill: " << endl;
    cin>>velocity;
    cout<<"Enter the temperature (F) for the old style windchill: " << endl;
    cin>>tempF;
    oldWindChill = 0.081 * (3.71 * sqrt(velocity) + 5.81 - 0.25 * velocity) * (tempF - 91.4) + 91.4; //Formula
    cout<<"Windchill according to the old formula: " << oldWindChill << endl;
    
    //New windchill formula
    cout<<"Enter the velocity (mph) for the new style windchill: " << endl;
    cin>>velocity;
    cout<<"Enter the temperature (F) for the new style chill: " << endl;
    cin>>tempF;
    newWindChill = 35.74 + 0.6215 * tempF - 35.75 * (pow(velocity,0.16)) + 0.4275 * tempF * (pow(velocity,0.16)); //Formula
    cout<<"Windchill according to the new formula: " << newWindChill << endl;

    //Difference between new and old windchills
    difference = newWindChill - oldWindChill;
    cout<<"The difference between the new and old style windchill is: " << difference;
    
    
    
}