#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    a=50;
    b=80;
    (c=a<b) ? cout<<a <<" is a smaller then 80 " : cout<<b <<" is a bigger then 50 ";
    cout<<c;
    getch();
}