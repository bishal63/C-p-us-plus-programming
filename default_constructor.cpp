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

    student(int a, int b)
    {
        roll=a;
        registration=b;
        
    }
    student()
    {
        cout<<"mahabub alam bishal;"<<endl;
    }

};
int main()
{
    student obj;

    student mahabub(2344,565446);
    student jibon(53635,74847);
    mahabub.display();
    jibon.display();

    getch();
}