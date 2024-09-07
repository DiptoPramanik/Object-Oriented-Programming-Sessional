#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
           cout<<"The Number is not a prime\n";
           return 0;
        }
    }
    if(n==1)
    {
    cout<<"The Number is not a prime\n";
    return 0;
    }
    cout<<"The Number is a prime\n";
    return 0;
}
