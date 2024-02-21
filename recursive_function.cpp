/*#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n)
{
    if (n==1)
    return 1;
    else
    return n* fact(n-1);
}
int main()
{
    int facto=fact(5);
    cout<<facto;
    getch();
}*/

#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n=8)
{
    if (n==1)
    return 1;
    else
    return n*fact(n-1);

}
int main()
{
    int factorial=fact();
    cout<<factorial;
    getch();
}