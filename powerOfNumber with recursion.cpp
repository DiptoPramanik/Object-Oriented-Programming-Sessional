#include<bits/stdc++.h>
using namespace std;
int Findpower(int base,int power)
{
    if(power==0) return 1;
    int res  = base*Findpower(base,power-1);
    return res;
}
int main()
{
    int base,power;
    cin>>base>>power;
    int ans = Findpower(base,power);
    cout<<ans<<endl;
    return 0;
}
