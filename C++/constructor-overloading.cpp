#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle()
    {
        length = 0;
        width = 0;
    }
    Rectangle(int l,int w)
    {
        length = l;
        width = w;
    }
    Rectangle(int side)
    {
        length = side;
        width = side;
    }
    int area()
    {
        return length * width;
    }
    void display()
    {
        cout<<"Length: "<<length<<", Width: "<<width<<", Area: "<<area()<<endl;
    }
};

int main()
{
    int a,b; cin>>a>>b;
    Rectangle rect1;
    rect1.display();

    Rectangle rect2(a,b);
    rect2.display();

    Rectangle rect3(a);
    rect3.display();

    return 0;
}

