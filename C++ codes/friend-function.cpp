#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w,int h)
    {
        width = w;
        height = h;
    }
    friend int calculateArea(Rectangle rect);
};

int calculateArea(Rectangle rect) {
    return rect.width*rect.height;
}

int main() {
    int width,height; cin>>width>>height;
    Rectangle rect(width,height);
    int area = calculateArea(rect);
    cout<<"The area of the rectangle is: "<<area<<endl;
    return 0;
}
