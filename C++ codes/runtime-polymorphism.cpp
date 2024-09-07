#include<bits/stdc++.h>
using namespace std;
class Person
{
public :
    virtual void display()
    {
        cout<<"Person called !"<<endl;
    }
};

class Student : public Person
{
public :
    void display()
    {
        cout<<"Student called !"<<endl;
    }
};

class Teacher : public Person
{
public :
    void display()
    {
        cout<<"Teacher called !"<<endl;
    }
};

int main()
{
    Person *p;
    Teacher t;
    Student s;
    p = &s;
    p->display();

    p = &t;
    p->display();

    return 0;
}
