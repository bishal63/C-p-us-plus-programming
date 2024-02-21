#include<iostream>
#include<conio.h>
using namespace std;
int function_name(int a,int b)
{
    int sum=a+b;
    return sum;
}
int function_name2(int a,int b)
{
    int sub=a-b;
    return sub;
}
int function_name3(int a,int b)
{
    int mul=a*b;
    return mul;
}
int function_name4(int a,int b)
{
    int div=a/b;
    return div;
}
int main()
{
    cout<<function_name(30,70)<<endl;
    cout<<function_name2(100,30)<<endl;
    cout<<function_name3(30,20)<<endl;
    cout<<function_name4(100,5);
    getch;
}