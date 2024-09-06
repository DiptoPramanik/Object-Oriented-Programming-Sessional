#include<bits/stdc++.h>
using namespace std;
int main()
{
    try
    {
        int num1,num2;
        cin>>num1>>num2;
        if(num2==0)
        {
            throw -1;
        }
        double result = (double)num1/num2;
        cout<<"The Expected Result is : "<<result<<endl;
    }
    catch(int x)
    {
        cout<<"Error : Divided by is not possible"<<endl;
        cout<<"Please ..try again "<<endl;
    }
    return 0;
}
