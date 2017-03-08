#include <string>
#include <iostream>
using namespace std;

class Salary
{
    private: 
        double annual_;
    public:
        void setAnnualSalary(double salary)
        {
            annual_ = salary;
        }
        double getAnnualSalary()
        {
            return annual_;
        }
        void print()
        {
             cout<<"$"<<annual_<<endl;
        }

    Salary();
    Salary(inAnnual);
};

Salary::Salary(inAnnual) {
    annual_ = inAnnual;
}

int main() {
    Salary Salary1;
    
    Salary1.setAnnualSalary(324233324344324.24);
    Salary1.print();
}