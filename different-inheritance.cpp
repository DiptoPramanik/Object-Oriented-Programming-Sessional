#include <bits/stdc++.h>
using namespace std;

// Single Inheritance
class A
{
public:
    void showA()
    {
        cout<<"Class A function.\n";
    }
};

class B : public A
{ // Single inheritance
public:
    void showB()
    {
        cout<<"Class B function.\n";
    }
};

// Multilevel Inheritance
class C : public B
{ // Multilevel inheritance
public:
    void showC()
    {
        cout<<"Class C function.\n";
    }
};

// Multiple Inheritance
class D
{
public:
    void showD()
    {
        cout<<"Class D function.\n";
    }
};

class E : public B,public D { // Multiple inheritance
public:
    void showE()
    {
        cout<<"Class E function.\n";
    }
};

// Hierarchical Inheritance
class F : public A
{ // Hierarchical inheritance
public:
    void showF()
    {
        cout<<"Class F function.\n";
    }
};

class G : public A
{ // Hierarchical inheritance
public:
    void showG()
    {
        cout<<"Class G function.\n";
    }
};

// Hybrid Inheritance (combining multiple and multilevel inheritance)
class H : public C, public D
{ // Hybrid inheritance
public:
    void showH()
    {
        cout<<"Class H function.\n";
    }
};

int main()
{
    // Demonstrating Single Inheritance
    B objB;
    cout<<"Single Inheritance:\n";
    objB.showA(); // From class A
    objB.showB(); // From class B

    // Demonstrating Multilevel Inheritance
    C objC;
    cout<<"\nMultilevel Inheritance:\n";
    objC.showA(); // From class A
    objC.showB(); // From class B
    objC.showC(); // From class C

    // Demonstrating Multiple Inheritance
    E objE;
    cout<<"\nMultiple Inheritance:\n";
    objE.showA(); // From class A
    objE.showB(); // From class B
    objE.showD(); // From class D
    objE.showE(); // From class E

    // Demonstrating Hierarchical Inheritance
    F objF;
    G objG;
    cout<<"\nHierarchical Inheritance:\n";
    objF.showA(); // From class A
    objF.showF(); // From class F
    objG.showA(); // From class A
    objG.showG(); // From class G

    // Demonstrating Hybrid Inheritance
    H objH;
    cout<<"\nHybrid Inheritance:\n";
    objH.showA(); // From class A
    objH.showB(); // From class B
    objH.showC(); // From class C
    objH.showD(); // From class D
    objH.showH(); // From class H

    return 0;
}

