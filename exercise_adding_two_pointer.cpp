#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    a=20;
    b=30;
    int *c,*d;
    c=&a;
    d=&b;
    int sum=*c+*d;
    cout<<sum;
    getch;
}