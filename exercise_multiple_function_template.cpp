#include<iostream>
#include<conio.h>
using namespace std;
template<class mahabub1,class mahabub2>
mahabub1 mahabub(mahabub1 a,mahabub2 b)
{
    return a+b;
}
int main()
{
    cout<<mahabub(20,30)<<endl;
    cout<<mahabub(20.50,20.50);
    getch;
}