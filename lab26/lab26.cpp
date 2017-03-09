/* James Floretta
   Date: 3/09/2017
   Uses a temperature converting class to convert between celsius, kelvin and fahrenheit.
*/

#include <string>
#include <iostream>
using namespace std;


class TemperatureConverter {
    public:
        TemperatureConverter(); // default constructor
        TemperatureConverter(double kelvin); //overloaded constructor
        
        void SetTempFromCelsius(double c);
        double GetTempFromCelsius();
        
        void SetTempFromFahrenheit(double f);
        double GetTempFromFahrenheit();
        
        void SetTempAsCelsius(double k);
        double GetTempAsCelsius();
        
        void SetTempAsFahrenheit(double c);
        double GetTempAsFahrenheit();
        
        void SetTempFromKelvin(double temp);
        double GetTempFromKelvin();
        
        void PrintTemperatures(){
            GetTempFromKelvin();
            GetTempFromFahrenheit();
            GetTempFromCelsius();
        }
        
    private:
        double kelvin_;
    
};
//default Constructtor
TemperatureConverter::TemperatureConverter() {
    kelvin_ = 0;
}
//Overloaded constructor
TemperatureConverter::TemperatureConverter(double kelvin) {
    kelvin_ = kelvin;
}

//Mutators
void TemperatureConverter::SetTempFromCelsius(double c) {
    kelvin_ = c;
    kelvin_ = c + 273.15;
    
}

void TemperatureConverter::SetTempFromFahrenheit(double f) {
    kelvin_ = f;
    kelvin_ = (5 * (f - 32) / 9) + 273.15;
    
}

void TemperatureConverter::SetTempFromKelvin(double temp) { // accepts a kelvin value and stores it
    kelvin_ = temp;
    
}

void TemperatureConverter::SetTempAsCelsius(double k) {
    kelvin_ = k;
    kelvin_ = k - 273.15;
   
}

void TemperatureConverter::SetTempAsFahrenheit(double c) {
    kelvin_ = c;
    kelvin_ = ((c * 9) / 5 + 32);
    
}
//Accessors
double TemperatureConverter::GetTempFromCelsius() {
    return kelvin_;
}

double TemperatureConverter::GetTempFromFahrenheit() {
    return kelvin_;
}

double TemperatureConverter::GetTempAsCelsius() {
    return kelvin_;
}

double TemperatureConverter::GetTempAsFahrenheit() {
    return kelvin_;
}

double TemperatureConverter::GetTempFromKelvin() {
    return kelvin_;
}


int main() {
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
 
   

    
}

