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
};
int main()
{
    student_profile mahabub,bishal;
    mahabub.id=101;
    mahabub.gpa=5;
    bishal.id=102;
    bishal.gpa=4;
    mahabub.display();
    cout<<endl;
    bishal.display();
    getch;
}