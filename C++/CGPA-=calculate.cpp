#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    int numSubjects;
    double grades[10];

    void inputDetails()
    {
        cin.ignore();
        cout<<"Enter student's name: ";
        getline(cin,name);
        cout<<"Enter student's ID number :";
        cin>>id;
        cout<<"Enter number of subjects: ";
        cin>>numSubjects;

        for (int i = 0;i<numSubjects;i++)
        {
            cout<<"Enter grade for subject "<<i+1<<": ";
            cin>>grades[i];
        }
    }

    float calculateCGPA()
    {
        double total = 0;
        for (int i = 0; i<numSubjects;i++) {
            total += grades[i];
        }
        return total/numSubjects;
    }

    void displayDetails()
    {
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student ID: "<<id<<endl;
        cout<<"CGPA: "<<calculateCGPA()<<endl;
    }
};

int main()
{
    int numStudents;
    cout<<"Enter the number of students: ";
    cin>>numStudents;
    Student students[numStudents];
    for (int i = 0;i<numStudents;i++) {
        cout<<"\nEntering details for student "<<i+1<<":"<<endl;
        students[i].inputDetails();
    }


    cout<<"\nStudent CGPAs:\n";
    for (int i = 0;i<numStudents;i++) {
        cout<<"\nDetails for student "<<i + 1<< ":"<<endl;
        students[i].displayDetails();
    }

    return 0;
}

