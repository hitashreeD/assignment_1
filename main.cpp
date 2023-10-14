/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
# include <string.h>
using namespace std;

class shape
{
    protected:
    float base, height;
    public:
    void dimensions(float b, float h)
    {
        base= b;
        height= h;
    }
};
class rectangle: public shape
{
    public:
    float area()
    {
      return(base*height);
    }
};
class traingle: public shape
{
    public:
    float area()
    {
        return(0.5*base*height);
    }
};
int main()
{ 
    float base, height;
    cout<<"enter the base and height of the rectangle: "<<endl;
    cin>>base>>height;
    cout<<"enter the base and height of the traingle: "<<endl;
    cin>>base>>height;
    
    rectangle r;
    traingle t;
    r.dimensions(base, height);
    t.dimensions(base, height);
    
    cout<<"area of rectangle is: "<<r.area()<<endl;
    cout<<"area of traingle is: "<<t.area()<<endl;
    
    return 0;
}