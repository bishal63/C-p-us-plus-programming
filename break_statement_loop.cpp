#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    for(int a=1;a<=20;a=a+1)
    {
       if(a==10)
       {
            break;
       }
       cout<<a<<"."<<"I love programming"<<endl;

    }
    cout<<"end of the loop";
    getch();
}