#include<iostream>
#include<conio.h>
using namespace std;
class student_details
{
    public:
    int id;
    int roll;
    void studentall()
    {
        cout<<id<<" "<<roll;
    }
    void student_value(int a,int b)
    {
        id=a;
        roll=b;
    }
};
int main()
{
    student_details mahabub,bishal;
    bishal.student_value(101,1827625);
    bishal.studentall();
    cout<<endl;
    mahabub.student_value(102,12736345);
    mahabub.studentall();
    getch;
}