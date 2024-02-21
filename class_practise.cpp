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
    mahabub.registration=10948457;
    student jibon;
    jibon.roll=63645;
    jibon.registration=836352452;
    cout<<mahabub.roll<<endl;
    cout<<mahabub.registration<<endl;
    cout<<jibon.roll<<endl;
    cout<<jibon.registration;

    getch();
}