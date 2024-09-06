#include <bits/stdc++.h>
using namespace std;
class BaseClass
{
private:
    int privateValue;

protected:
    int protectedValue;

public:
    void setValues(int x, int y)
    {
        privateValue = x;
        protectedValue = y;
    }

    void showValues()
    {
        cout<<"Private Value: "<<privateValue<<endl;
        cout<<"Protected Value: "<<protectedValue<<endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    void accessProtectedValue()
    {
        cout<<"Accessing Protected Value from Derived Class: "<<protectedValue<<endl;
    }
};

int main()
{
    int val1,val2; cin>>val1>>val2;
    BaseClass base;
    DerivedClass derived;
    base.setValues(val1,val2);
    base.showValues();

    int val3,val4; cin>>val3>>val4;
    derived.setValues(val3,val4);
    derived.accessProtectedValue();
    return 0;
}
