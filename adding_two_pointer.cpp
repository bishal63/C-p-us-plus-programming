#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=50;
    int b=35;
    int *c,*d;
    c=&a;
    d=&b;
    int sum=*c+*d;
    cout<<sum;
    getch();
}