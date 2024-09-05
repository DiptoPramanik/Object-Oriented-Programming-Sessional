#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    //even numbers;
    for(int i=2;i<=n;i+=2)
    {
        cout<<i<<endl;
    }
    //odd numbers;
    for(int i=1;i<=n;i+=2)
    {
        cout<<i<<endl;
    }
    return 0;
}

