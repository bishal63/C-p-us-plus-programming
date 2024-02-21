#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    float b;
    double c;
    char d;
    char mahabub[20];
    int m=sizeof(mahabub);   //sizeof() ar maddhome kon data type koto byte memory use kore
    cout<<m;
    cout<<endl;
    int x,y,z;
    z=(x=3,y=4,z=x+y);       //special (,) ar maddhome variable ke akbare implement kora jaay
    cout<<z;
    getch();
}