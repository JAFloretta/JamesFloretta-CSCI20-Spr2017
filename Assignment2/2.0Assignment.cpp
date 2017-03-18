/*  James Floretta
    Date: 3/10/2017
    About: Using a distance class to convert between miles, meters, inches, feet or yards.
*/

#include <string>
#include <iostream>
using namespace std;


class DistanceConverter {
    private:
        double meter = 0; 
        double inchInMeter = 0.0254;
        double footInMeter = 0.3048;
        double yardInMeter = 0.9144;
        double mileInMeter = 1609.344;
    public:
        void SetMeter(double value) {
            meter = value;
        }
        double GetMeter() {
            return meter;
        }

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

        
        
        
        void printDistances() {
            cout << "Miles to meter: " << GetMeter() << endl;
            cout << "Miles to inches: " << GetInches() << endl;
            cout << "Miles to feet: " << GetFeet() << endl;
            cout << "Miles to yards: " << GetYards() << endl;
            cout << "Miles to miles: " << GetMiles() << endl;
        }
    
    
};


int main() {
    DistanceConverter distanceConverter;

    distanceConverter.SetMiles(5);
    distanceConverter.printDistances();

    
}