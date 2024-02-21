#include<iostream>
#include<conio.h>
using namespace std;
void number(int a,int b)
{
    int sum=a+b;
    cout<<sum <<endl;
}
void number(int a,int b,int c)
{
    int sum=a+b+c;
    cout<<sum<<endl;
}
int main()
{
    number(10,20);
    number(10,20,30);
    getch;
}