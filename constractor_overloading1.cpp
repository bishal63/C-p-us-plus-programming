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
    student_details(int a,int b)
    {
        id=a;
        roll=b;
    }
    student_details()
    {
        cout<<"their college name is dinajpur polytechnic institute "<<endl;
    }
};
int main()
{
    student_details alam;
    student_details bishal(101,1827625);
    bishal.studentall();
    cout<<endl;
    student_details mahabub(102,12736345);
    mahabub.studentall();
    getch;
}