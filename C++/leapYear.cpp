#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    if((n%400==0)||((n%4==0)&&(n%100!=0))) cout<<"YES! LeapYear\n";
    else cout<<"NOT LeapYear\n";
    return 0;
}
