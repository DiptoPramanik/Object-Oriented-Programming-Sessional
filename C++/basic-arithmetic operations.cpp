#include <bits/stdc++.h>
using namespace std;

class Calculator
{
private:
    int num1,num2;

public:
    void setNumbers(int a,int b)
    {
        num1 = a;
        num2 = b;
    }
    double add()
    {
        return num1+num2;
    }
    double subtract()
    {
        return num1-num2;
    }
    double multiply()
    {
        return num1*num2;
    }
    double divide()
    {
        if (num2!=0) {
            return (double)num1/num2;
        } else {
            cout<<"Error: Division by zero is not allowed."<<endl;
            return 0;
        }
    }
};

int main()
{
    Calculator calc;

    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    calc.setNumbers(num1, num2);
    cout<<"Addition: "<<calc.add()<<endl;
    cout<<"Subtraction: "<<calc.subtract()<< endl;
    cout<<"Multiplication: "<<calc.multiply()<< endl;
    cout<<"Division: "<<fixed<<setprecision(5)<<calc.divide()<<endl;
    return 0;
}

