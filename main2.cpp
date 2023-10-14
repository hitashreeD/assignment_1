/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>
using namespace std;
class student1
{   
    public:
    char name[50];
    void stdData1()
    {
        cout<<"Enter the name of student: "<<endl;
        cin>>name;
    }
};
class student2: public student1
{   
    public:
    int stdid;
    void stdData2()
    {
        cout<<"Enter the id of student: "<<endl;
        cin>>stdid;
    }
};
class student3: public student2
{   
    public:
    float marks;
    void stdData3()
    {
        cout<<"Enter the marks of student: "<<endl;
        cin>>marks;
    }
    void showData()
    {
        cout<<"Name of the student is: "<<name<<endl;
        cout<<"Id of the student is: "<<stdid<<endl;
        cout<<"Marks of the student is: "<<marks<<endl;
    }
};
int main()
{
    student3 std;
    std.stdData1();
    std.stdData2();
    std.stdData3();
    std.showData();

    return 0;
}
