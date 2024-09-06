#include <bits/stdc++.h>
using namespace std;

class Calculator {
public:
    void setValues(int a,int b);
    int add();
    int subtract();

private:
    int num1, num2;
};


void Calculator::setValues(int a,int b) {
    num1 = a;
    num2 = b;
}

int Calculator::add() {
    return num1+num2;
}

int Calculator::subtract() {
    return num1-num2;
}

int main() {
    Calculator calc;
    int x,y;
    cin>>x>>y;
    calc.setValues(x,y);
    cout<<"Addition: "<<calc.add()<<endl;
    cout<<"Subtraction: "<<calc.subtract()<< endl;

    return 0;
}

