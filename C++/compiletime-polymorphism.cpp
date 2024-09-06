#include<bits/stdc++.h>
using namespace std;
class overload
{
public :
    void add(int a,int b)
    {
        cout<<a+b<<endl;
    }
    void add(int a,int b,int c)
    {
        cout<<a+b+c<<endl;
    }
    void add()
    {
        cout<<"Nothing to add"<<endl;
    }

};
int main()
{
    int a,b,c; cin>>a>>b>>c;
    overload obj;
    obj.add();
    obj.add(a,b);
    obj.add(a,b,c);
    return 0;
}

