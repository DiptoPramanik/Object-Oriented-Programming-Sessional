#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x; cin>>x;
    int *ptr;
    ptr = &x;
    cout<<"Address of x : "<<&x<<endl;
    cout<<"Address of ptr variable : "<<ptr<<endl;
    cout<<"value of x : "<<x<<endl;
    cout<<"value of ptr variable : "<<*ptr<<endl;

    cout<<'\n';

    *ptr = 50;
    cout<<"Address of x : "<<&x<<endl;
    cout<<"Address of ptr variable : "<<ptr<<endl;
    cout<<"value of x : "<<x<<endl;
    cout<<"value of ptr variable : "<<*ptr<<endl;
    return 0;
}

