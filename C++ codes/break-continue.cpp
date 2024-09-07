#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;//terminate the program
        else if(n%2==0) continue;//skipping the iteration for even numbers
        else cout<<"It's funny because it's true\n";//printing the statement for odd numbers
    }
    return 0;
}
