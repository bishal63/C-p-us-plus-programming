#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    private:
    string department;
    public:
    void settermethod(string a)
    {
        department=a;
    }
    string gettermethod()
    {
        return department;
    }
};
int main()
{
    student mahabub;
    mahabub.settermethod("computer");
    cout<<mahabub.gettermethod();
    
    getch;
}