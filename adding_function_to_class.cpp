#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
    int roll;
    int registration;
    void display()
    {
    cout<<roll<<endl<<registration<<endl;
    }

};
int main()
{
    student mahabub;
    mahabub.roll=10;
    mahabub.registration=10948457;


    student jibon;
    jibon.roll=63645;
    jibon.registration=836352452;


    mahabub.display();
    jibon.display();

    getch();
}