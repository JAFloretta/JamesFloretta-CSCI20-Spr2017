/*  James Floretta
    Date: 3/18/2017
    About: User enters an acceptable value and that value will be converted using a distance converting class. 
           Uses accessors and mutators that convert between miles, meters, inches, yards and feet.
*/

#include <string>
#include <iostream>
using namespace std;

//Class name 
class DistanceConverter { 
    private:
        double meter = 0; 
        double inchInMeter = 0.0254;
        double footInMeter = 0.3048;
        double yardInMeter = 0.9144;
        double mileInMeter = 1609.344;
    public:
        //Overload constructor
        void SetMeter(double value) { 
            meter = value;
        }
        double GetMeter() {
            return meter;
        }
        
        //Gets and sets all values between different units of measurement using function setters and variable getters
        void SetInches(double value) {
            meter = value * inchInMeter;
        }
        double GetInches() {
            return meter / inchInMeter;
        }

        void SetFeet(double value) {
            meter = value * footInMeter;
        }
        double GetFeet() {
            return meter / footInMeter;
        }

        void SetYards(double value) {
            meter = value * yardInMeter;
        }
        double GetYards() {
            return meter / yardInMeter;
        }

        void SetMiles(double value) {
            meter = value * mileInMeter;
        }
        double GetMiles() {
            return meter / mileInMeter;
        }
        
        //Print functions
        void printMiles() {
            cout << "Miles to meter: " << GetMeter() << endl;
            cout << "Miles to inches: " << GetInches() << endl;
            cout << "Miles to feet: " << GetFeet() << endl;
            cout << "Miles to yards: " << GetYards() << endl;
            cout << "Miles to miles: " << GetMiles() << endl;
        }
        
        void printFeet() {
            cout << "Feet to meter: " << GetMeter() << endl;
            cout << "Feet to inches: " << GetInches() << endl;
            cout << "Feet to feet: " << GetFeet() << endl;
            cout << "Feet to yards: " << GetYards() << endl;
            cout << "Feet to miles: " << GetMiles() << endl;
        }
    
        void printInches() {
            cout << "Inches to meter: " << GetMeter() << endl;
            cout << "Inches to inches: " << GetInches() << endl;
            cout << "Inches to feet: " << GetFeet() << endl;
            cout << "Inches to yards: " << GetYards() << endl;
            cout << "Inches to miles: " << GetMiles() << endl;
        }

        void printYards() {
            cout << "Yards to meter: " << GetMeter() << endl;
            cout << "Yards to inches: " << GetInches() << endl;
            cout << "Yards to feet: " << GetFeet() << endl;
            cout << "Yards to yards: " << GetYards() << endl;
            cout << "Yards to miles: " << GetMiles() << endl;
        }
        void printMeters() {
            cout << "Meters to meter: " << GetMeter() << endl;
            cout << "Meters to inches: " << GetInches() << endl;
            cout << "Meters to feet: " << GetFeet() << endl;
            cout << "Meters to yards: " << GetYards() << endl;
            cout << "Meters to miles: " << GetMiles() << endl;
        }
};


int main() {
    //Object creation
    DistanceConverter distanceConverter;
   
    //Sets values and prints
    distanceConverter.SetMiles(1);
    distanceConverter.printMiles();
    
    distanceConverter.SetFeet(16);
    distanceConverter.printFeet();
    
    distanceConverter.SetInches(100);
    distanceConverter.printInches();

    distanceConverter.SetYards(20);
    distanceConverter.printYards();
    
    distanceConverter.SetMeter(1);
    distanceConverter.printMeters();
}