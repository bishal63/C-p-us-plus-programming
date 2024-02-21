#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
    int roll;
    int registration;
};
int main()
{
    student mahabub;
    mahabub.roll=10;
    mahabub.registration=1089474;
    cout<<mahabub.roll<<endl<<mahabub.registration;
    getch();
}