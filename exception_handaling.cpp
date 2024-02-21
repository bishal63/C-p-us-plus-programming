#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    try
    {
        int a,b;
        a=10;
        b=0;
    
    if(b==0)
    {
        throw -1;
    }
    double c=(double)a/b;
    cout<<c;
    }
    catch(...)
    {
        cout<<"exception is not handle."<<endl;
        cout<<"please try again.";
    }
    
    getch;
}
