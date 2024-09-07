#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int id;
    double marks;

public:
    void setData(string n,int r,double m) {
        name = n;
        id = r;
        marks = m;
    }

    void displayData() {
        cout<<"Name: "<<name<<endl;
        cout<<"ID Number: "<<id<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    int numStudents;
    cout<<"Enter the number of students: ";
    cin>>numStudents;

    Student students[numStudents];
    for(int i=0;i<numStudents;++i)
    {
        string name;
        int id;
        double marks;
        cout<<"Enter details for student "<<i+1<<":"<<endl;
        cout<<"Name: ";
        getchar();
        getline(cin,name);
        cout<<"ID Number: ";
        cin>>id;
        cout<<"Marks: ";
        cin>>marks;
        students[i].setData(name, id, marks);
    }

    cout<<"\nDisplaying Student Details:"<<endl;
    for (int i=0;i<numStudents;++i)
    {
        cout<<"\nStudent "<<i + 1<<":"<<endl;
        students[i].displayData();
    }

    return 0;
}

