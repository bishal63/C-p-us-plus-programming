#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    try
    {
        int a=10;
        int b=0;

    if(b==0)
    {
        throw -1;
    }
    double c=(double)a/b;
    cout<<c;
    }
    catch(...)
    {
        cout<<"Exception is not handle it"<<endl;
        cout<<"Please try again";
    }
    getch;
}