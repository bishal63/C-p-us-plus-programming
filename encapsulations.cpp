#include<iostream>
#include<conio.h>
using namespace std;
class student_details
{
private:
    int id;
    int roll;
public:
void settermethod(int a)
{
    id=a;
}
int gettermethod()
{
    return id;
}
};
int main()
{
    student_details mahabub;
    mahabub.settermethod(101);
    cout<<mahabub.gettermethod();
    getch;
}