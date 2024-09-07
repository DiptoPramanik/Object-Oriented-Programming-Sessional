#include<bits/stdc++.h>
using namespace std;
class student
{
public :
    string name;
    int id;
    double cgpa;
    void setvalue(string x,int y,double z)
    {
        name = x;
        id = y;
        cgpa = z;
    }
    void display()
    {
        cout<<name<<' '<<id<<' '<<cgpa<<endl;
    }
};
int main()
{
    string name1;
    getline(cin,name1);
    int id;
    double cgpa;
    cin>>id>>cgpa;
    student obj1;
    obj1.setvalue(name1,id,cgpa);
    obj1.display();
    return 0;
}
