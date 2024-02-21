#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    a=32;
    b=12;
    c=a&b;     //bitwise not
    cout<<c <<endl;
    c=a|b;    //bitwise or
    cout<<c <<endl;
    c=a^b;   //bitwise xor
    cout<<c;
    getch();
}