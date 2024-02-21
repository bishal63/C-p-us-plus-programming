#include<iostream>
#include<conio.h>
using namespace std;
void display_array(int array_name[],int size)
{
    for(int i=0;i<5;i++)
    cout<<array_name[i];

}
int main()
{
    int array_number[5]={20,10,30,40,50};
    display_array(array_number,5);
    getch;
}