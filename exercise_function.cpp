#include<iostream>
#include<conio.h>
using namespace std;
void function_name(int a,int b)
{
    int sum=a+b;
    cout<<sum<<endl;
}
void function_name1(int a,int b)
{
    int sub=a-b;
    cout<<sub<<endl;
}
void function_name2(int a,int b)
{
    int mul=a*b;
    cout<<mul<<endl;
}
void function_name3(int a,int b)
{
    int div=a/b;
    cout<<div;
}
int main()
{
    function_name(50,50);
    function_name1(100,50);
    function_name2(10,20);
    function_name3(100,20);
    getch;
}