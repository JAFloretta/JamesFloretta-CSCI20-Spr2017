/*  James Floretta
    Date: 3/10/2017
    About: Using a distance class to convert between miles, meters, inches, feet or yards.
*/

#include <string>
#include <iostream>
using namespace std;


class DistanceConverter { //Class name
    public:
        DistanceConverter() { //Default constructor
            miles_ = 0;
        }
        DistanceConverter(double Miles) { //Overload constructor
            miles_ = Miles;
        }
        //Miles mutators and accessors
        void SetMilesToMeters(double Miles) {
            miles_ = Miles * 1609.34;
        }
        double GetMilesFromMeters() {
            return miles_;
        }
        
        void SetMilesToInches(double Miles) {
            miles_ = Miles * 63360;
        }
        double GetMilesFromInches() {
            return miles_;
        }
        
        
        void SetMilesToFeet(double Miles) {
            miles_ = Miles * 5280;
        }
        double GetMilesFromFeet() {
            return miles_;
        }
        
        void SetMilesToYards(double Miles) {
            miles_ = Miles * 1760;
        }
        double GetMilesFromYards() {
            return miles_;
        }
        
        //Yards mutators and accessors
        void SetYardsToMiles(double Miles) {
            miles_ = Miles / 1760;
        }
        double GetYardsFromMiles() {
            return miles_;
        }
        
        void SetYardsToFeet(double Miles) {
            miles_ = Miles * 3;
        }
        double GetYardsFromFeet() {
            return miles_;
        }
        
        void SetYardsToInches(double Miles) {
            miles_ = Miles * 36;
        }
        double GetYardsFromInches() {
            return miles_;
        }
        
        void SetYardsToMeters(double Miles) {
            miles_ = Miles * 0.9144;
        }
        double GetYardsFromMeters() {
            return miles_;
        }
        
        //Feet mutators and accessors
        void SetFeetToMiles(double Miles) {
            miles_ = Miles / 5280;
        }
        double GetFeetFromMiles() {
            return miles_;
        }
        
        void SetFeetToYards(double Miles) {
            miles_ = Miles / 3;
        }
        double GetFeetFromYards() {
            return miles_;
        }
        
        void SetFeetToInches(double Miles) {
            miles_ = Miles * 12;
        }
        double GetFeetFromInches() {
            return miles_;
        }
        
        void SetFeetToMeters(double Miles) {
            miles_ = Miles * 0.3048;
        }
        double GetFeetFromMeters() {
            return miles_;
        }
        
        //Inches mutators and accessors
        void SetInchesToMiles(double Miles) {
            miles_ = Miles / 63360;
        }
        double GetInchesFromMiles() {
            return miles_;
        }
        
        void SetInchesToYards(double Miles) {
            miles_ = Miles / 36;
        }
        double GetInchesFromYards() {
            return miles_;
        }
        
        void SetInchesToMeters(double Miles) {
            miles_ = Miles * 0.0254;
        }
        double GetInchesFromMeters() {
            return miles_;
        }
        
        void SetInchesToFeet(double Miles) {
            miles_ = Miles / 12;
        }
        double GetInchesFromFeet() {
            return miles_;
        }
        
        //Meters mutators and accessors
        void SetMetersToMiles(double Miles) {
            miles_ = Miles / 1609.34;
        }
        double GetMetersFromMiles() {
            return miles_;
        }
        
        void SetMetersToYards(double Miles) {
            miles_ = Miles / 0.9144;
        }
        double GetMetersFromYards() {
            return miles_;
        }
        
        void SetMetersToFeet(double Miles) {
            miles_ = Miles / 0.3048;
        }
        double GetMetersFromFeet() {
            return miles_;
        }
        
        void SetMetersToInches(double Miles) {
            miles_ = Miles / 0.0254;
        }
        double GetMetersFromInches() {
            return miles_;
        }
        
        //Print function
        void PrintDistances() {}
    
    private:
        double miles_; 
};
    

int main() {
    //Mile objects
    DistanceConverter MileToMeter;
    DistanceConverter MileToInch;
    DistanceConverter MileToFeet;
    DistanceConverter MileToYard;
    //Yard objects
    DistanceConverter YardToMile;
    DistanceConverter YardToFeet;
    DistanceConverter YardToInch;
    DistanceConverter YardToMeter;
    //Feet Objects
    DistanceConverter FeetToMile;
    DistanceConverter FeetToYard;
    DistanceConverter FeetToInch;
    DistanceConverter FeetToMeter;
    //Inch objects
    DistanceConverter InchToMile;
    DistanceConverter InchToYard;
    DistanceConverter InchToMeter;
    DistanceConverter InchToFeet;
    //Meter Objects
    DistanceConverter MeterToMile;
    DistanceConverter MeterToYard;
    DistanceConverter MeterToFeet;
    DistanceConverter MeterToInch;
    
    //Miles to X conversions
    MileToMeter.SetMilesToMeters(1);
    cout<<"Miles to meters: " << MileToMeter.GetMilesFromMeters() << endl;
    MileToMeter.PrintDistances();
    
    MileToInch.SetMilesToInches(1);
    cout<<"Miles to inches: " << MileToInch.GetMilesFromInches() << endl;
    MileToInch.PrintDistances();
  
    MileToFeet.SetMilesToFeet(1);
    cout<<"Miles to feet: " << MileToFeet.GetMilesFromFeet() << endl;
    MileToFeet.PrintDistances();
    
    MileToYard.SetMilesToYards(1);
    cout<<"Miles to yards: " << MileToYard.GetMilesFromYards() << endl;
    MileToYard.PrintDistances();
    
    //Yards to X conversions
    YardToMile.SetYardsToMiles(10.5);
    cout<<"Yards to miles: " << YardToMile.GetYardsFromMiles() << endl;
    YardToMile.PrintDistances();
    
    YardToFeet.SetYardsToFeet(20);
    cout<<"Yards to feet: " << YardToFeet.GetYardsFromFeet() << endl;
    YardToMile.PrintDistances();
    
    YardToInch.SetYardsToInches(5.3);
    cout<<"Yards to inches: " << YardToInch.GetYardsFromInches() << endl;
    YardToMile.PrintDistances();
    
    YardToMeter.SetYardsToMeters(11);
    cout<<"Yards to meters: " << YardToMeter.GetYardsFromMeters() << endl;
    YardToMile.PrintDistances();

    //Feet to X conversions
    FeetToMile.SetFeetToMiles(16);
    cout<<"Feet to miles: " << FeetToMile.GetFeetFromMiles() << endl;
    YardToFeet.PrintDistances();
    
    FeetToYard.SetFeetToYards(16);
    cout<<"Feet to yards: " << FeetToYard.GetFeetFromYards() << endl;
    FeetToYard.PrintDistances();
    
    FeetToInch.SetFeetToInches(2);
    cout<<"Feet to inches: " << FeetToInch.GetFeetFromInches() << endl;
    FeetToInch.PrintDistances();
    
    FeetToMeter.SetFeetToMeters(11);
    cout<<"Feet to meters: " << FeetToMeter.GetFeetFromMeters() << endl;
    FeetToMeter.PrintDistances();
    
    //Inches to X conversions
    InchToMile.SetInchesToMiles(100);
    cout<<"Inches to miles: " << InchToMile.GetInchesFromMiles() << endl;
    InchToMile.PrintDistances();
    
    InchToYard.SetInchesToYards(15);
    cout<<"Inches to yards: " << InchToYard.GetInchesFromYards() << endl;
    InchToYard.PrintDistances();
    
    InchToMeter.SetInchesToMeters(55);
    cout<<"Inches to meters: " << InchToMeter.GetInchesFromMeters() << endl;
    InchToMeter.PrintDistances();

    InchToFeet.SetInchesToFeet(12);
    cout<<"Inches to feet: " << InchToFeet.GetInchesFromFeet() << endl;
    InchToFeet.PrintDistances();
    
    //Meter to X conversions
    MeterToMile.SetMetersToMiles(1);
    cout<<"Meters to miles: " << MeterToMile.GetMetersFromMiles() << endl;
    MeterToMile.PrintDistances();
    
    MeterToYard.SetMetersToYards(100);
    cout<<"Meters to yards: " << MeterToYard.GetMetersFromYards() << endl;
    MeterToYard.PrintDistances();

    MeterToFeet.SetMetersToFeet(100);
    cout<<"Meters to feet: " << MeterToFeet.GetMetersFromFeet() << endl;
    MeterToFeet.PrintDistances();
    
    MeterToInch.SetMetersToInches(100);
    cout<<"Meters to inches: " << MeterToInch.GetMetersFromInches() << endl;
    MeterToInch.PrintDistances();
    
}