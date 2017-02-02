//James Floretta
//Estimating population in the U.S


#include <iostream>
using namespace std;

int main()  {
    int birthRate;
    int deathRate;
    int birthAndDeathAvg;
    int migrantToUS;
    int netGain;
    int migrantAndNetAvg;
    int overallGrowth;
    int numYrs;
    int curYr = 2017;
    int totalUSPop = 32662579;
  
    cout<<"Enter the number of years you wish to travel: ";
    cin>>numYrs;
    curYr = curYr + numYrs; // add the years the user travels to the current year
    
    birthRate = 10800 * 365; // Approx # of births per day times 1 year
    deathRate = 7854 * 365; // Approx # of deaths per day times 1 year
    birthAndDeathAvg = birthRate - deathRate;
    
    migrantToUS = 2979 * 365; // Approx # of migrants to US per day times 1 year
    netGain = 5760 * 365; // # of net gain per day times 1 year
    migrantAndNetAvg = migrantToUS + netGain;

    overallGrowth = numYrs * (birthAndDeathAvg + migrantAndNetAvg) + totalUSPop; // all variables and inputs combined for an overall average growth
    
    cout<<"The estimated population in the US by year "<<curYr<<" is "<<overallGrowth;
    
}