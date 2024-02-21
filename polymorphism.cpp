#include<iostream>
#include<conio.h>
using namespace std;
class mahabub
{
    public:
    void college()
    {
        cout<<"Dinajpur polytechnic institute";
    }
};
class hridita:public mahabub
{
    public:
    void college()
    {
        cout<<"Dhaka city college";
    }
};
class bishal:public hridita
{
    public:
    void college()
    {
        cout<<"Sunflower school and colege";
    }
};
int main()
{
    mahabub m;
    hridita h;
    bishal b;
    m.college();
    cout<<endl;
    h.college();
    cout<<endl;
    b.college();
    cout<<endl;
    getch;
}