#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==1 || n==0) return 1;

    int ans = n*fact(n-1);

    return ans;

}
int main()
{
    int n;
    cin>>n;
    int result = fact(n);
    cout<<result<<endl;
    return 0;
}
