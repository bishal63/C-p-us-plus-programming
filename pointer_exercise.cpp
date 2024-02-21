/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    a=20;
    int *b;
    b=&a;

    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<a;
    getch;
}*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=100;
    int *b;
    int **c;
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<&c<<endl;
    b=&a;
    c=&b;
    cout<<a<<endl;
    cout<<*b<<endl;
    cout<<**c<<endl;

    getch;
}