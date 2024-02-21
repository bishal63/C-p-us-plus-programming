#include<iostream>
#include<conio.h>
using namespace std;
int a=20;
int main()
{
    int a=30;
    cout<<"local variable is: "<<a<<endl;
    cout<<"global variable is: "<<::a;
    getch();
}