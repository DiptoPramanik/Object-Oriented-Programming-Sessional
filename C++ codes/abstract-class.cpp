#include<bits/stdc++.h>
using namespace std;
class MobileUser
{
public :
    void call()
    {
        cout<<"Hello ! "<<endl;
    }
    virtual void SendMessage() = 0;
};

class Rahim : public MobileUser
{
public :
    void SendMessage()
    {
        cout<<"Hi .. This is Rahim "<<endl;
    }
};

class Karim : public MobileUser
{
public :
    void SendMessage()
    {
        cout<<"Hi .. This is Karim "<<endl;
    }
};

int main()
{
    MobileUser *m;
    Rahim r;
    Karim k;
    m = &r;
    m->SendMessage();
    m->call();
    return 0;
}
