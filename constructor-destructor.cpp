#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string n,int a)
    {
        name = n;
        age = a;
        cout<<"Constructor called! Name: "<<name<<", Age: "<<age<<endl;
    }
    ~Person()
    {
        cout<<"Destructor called for "<<name<<endl;
    }

    void display()
    {
        cout <<"Name: "<<name<<", Age: "<<age<<endl;
    }
};

int main()
{
    string name1;
    int age1;
    cin>>name1>>age1;
    Person person1(name1,age1);
    person1.display();

    string name2;
    int age2;
    cin>>name2>>age2;
    Person person2(name2,age2);
    person2.display();
    return 0;
}

