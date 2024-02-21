/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[3][3];
    a[0][0]=20;
    a[0][1]=50;
    a[0][2]=80;

    a[1][0]=10;
    a[1][1]=12;
    a[1][2]=15;

    a[2][0]=20;
    a[2][1]=25;
    a[2][2]=30;

    cout<<a[0][0]<<" ";
    cout<<a[0][1]<<" ";
    cout<<a[0][2]<<" ";
    cout<<endl;

    cout<<a[1][0]<<" ";
    cout<<a[1][1]<<" ";
    cout<<a[1][2]<<" ";
    cout<<endl;

    cout<<a[2][0]<<" ";
    cout<<a[2][1]<<" ";
    cout<<a[2][2]<<" ";
    cout<<endl;



    getch();
}*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (int row=0;row<3;row=row+1)
    {
        for(int col=0;col<3;col=col+1)
        {
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    getch();
}