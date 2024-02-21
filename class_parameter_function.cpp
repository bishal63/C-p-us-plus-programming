#include<iostream>
#include<conio.h>
using namespace std;
class student_profile
{
    public:
    int id;
    int gpa;
    void display()
    {
        cout<<id<<" "<<gpa;
    }
    void all(int x,int y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    student_profile mahabub,bishal;
    mahabub.all(101,5);
    mahabub.display();
    cout<<endl;
    bishal.all(102,4);
    bishal.display();
    getch;
}