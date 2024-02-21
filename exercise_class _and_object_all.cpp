#include<iostream>
#include<conio.h>
using namespace std;
class student_details
{
    public:
    int id;
    int roll;
};
int main()
{
    student_details mahabub,bishal;
    mahabub.id=101;
    mahabub.roll=109287;
    bishal.id=102;
    bishal.roll=1973635;
    cout<<mahabub.id<<" ";
    cout<<mahabub.roll;
    cout<<endl;
    cout<<bishal.id<<" ";
    cout<<bishal.roll;
    getch;
}