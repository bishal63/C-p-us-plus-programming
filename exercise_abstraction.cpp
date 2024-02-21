/*#include<iostream>
#include<conio.h>
using namespace std;
class messenger
{
    public:
    void non_virtual()
    {
        cout<<"this is a non virtual function";
    }
    virtual void send_message()=0;
};
class mahabub:public messenger
{
    public:
    void send_message()
    {
        cout<<"I love programming";
    }
};
class bishal:public messenger
{
    public:
    void send_message()
    {
        cout<<"I am a programmer";
    }
};
int main()
{
    messenger *m;
    mahabub a;
    bishal b;
    m->non_virtual();
    cout<<endl;
    m=&a;
    m->send_message();
    cout<<endl;
    m=&b;
    m->send_message();
    getch;
}*/
