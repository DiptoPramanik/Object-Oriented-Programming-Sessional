#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;

    int res = fibo(n-1) + fibo(n-2);

    return res;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<fibo(i)<<' ';
    }
    cout<<endl;
    return 0;
}
