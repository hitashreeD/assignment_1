/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>
using namespace std;
class shape
{
    protected:
    float length;
    float width;
    public:
    shape()
    {
        length=0;
        width=0;
    }
    shape(float a)
    {
        length=a;
    }
    shape(float a, float b)
    {
        length=a;
        width=b;
    }
    virtual void area()=0;
};
class square: public shape
{
    public:
    square(float a):shape(a)
    {
        cout<<"Area of square: ";
    }
    void area()
    {
        cout<<length*length<<endl;
    }
};
class rectangle: public shape
{
    public:
    rectangle(float a, float b):shape(a,b)
    {
         cout<<"Area of rectangle: ";
    }
    void area()
    {
       cout<<length*width<<endl;
    }
};
class triangle: public shape
{
    public:
    triangle(float a, float b):shape(a,b)
    {
        cout<<"Area of triangle: ";
    }
    void area()
    {
        cout<<0.5*length*width<<endl;
    }
};
class circle: public shape
{
    public:
    circle(float a):shape(a)
    {
        cout<<"Area of circle: ";
    }
    void area()
    {
        cout<<3.14*length*length<<endl;
    }
};
int main()
{
    shape *ptr;
    square sq(5);
    ptr=&sq;
    ptr->area();
    
    rectangle rec(10,5);
    ptr=&rec;
    ptr->area();
    
    triangle tri(7,8);
    ptr=&tri;
    ptr->area();
    
    circle cir(6);
    ptr=&cir;
    ptr->area();
    
    return 0;
}


