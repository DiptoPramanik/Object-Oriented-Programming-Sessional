#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int &ref = x;
    cout<<"The value of x : "<<x<<endl;
    cout<<"The value of reference variable : "<<ref<<endl;
    ref = 5;
    cout<<"The value of x : "<<x<<endl;
    cout<<"The value of reference variable : "<<ref<<endl;
    return 0;
}
