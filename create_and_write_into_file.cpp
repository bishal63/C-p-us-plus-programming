#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("Mahabub_file.cpp",ios::out|ios::app);
    file<<"My name is Mahabub Alam Bishal.I study in Dinajpur polytechnic institute"<<endl<<"I live in Dinajpur.";
    file.close();
    getch;
}