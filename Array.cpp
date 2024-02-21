/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int m[3];
    m[0]=1;
    m[1]=2;
    m[2]=3;
    cout<<m[0]<<" ";
    cout<<m[1]<<" ";
    cout<<m[2]<<" ";
    getch();
}*/

/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int m[3]={1,2,3};

    cout<<m[0]<<" ";
    cout<<m[1]<<" ";
    cout<<m[2]<<" ";
    getch();
}*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int m[3]={1,2,3};
    for(int i=0;i<3;i=i+1)
    {
        cout<<m[i]<<" ";
    }
    getch();
}