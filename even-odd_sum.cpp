#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    //even numbers;
    int evenSum=0;
    for(int i=2;i<=n;i+=2)
    {
        evenSum+=i;
    }
    cout<<evenSum<<endl;
    //odd numbers;
    int oddSum=0;
    for(int i=1;i<=n;i+=2)
    {
        oddSum+=i;
    }
    cout<<oddSum<<endl;
    return 0;
}


