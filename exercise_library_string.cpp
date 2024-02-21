#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
    char name[]="Mahabub Alam Bishal";
    cout<<strlen(name)<<endl;
    char name1[20];
    cout<<strcpy(name1,name)<<endl;
    cout<<name<<endl;
    char name2[]="mahabub";
    char name3[]="alam";
    cout<<strcat(name2,name3)<<endl;
    cout<<name3<<endl;
    char name4[]="mahabub alam bishal";
    cout<<strupr(name4)<<endl;
    char name5[]="MAHFUJ ALAM MAHIM";
    cout<<strlwr(name5)<<endl;
    char name6[]="mahabub";
    char name7[]="Mahabub";
    cout<<strcmp(name6,name7);
    
    getch;
}