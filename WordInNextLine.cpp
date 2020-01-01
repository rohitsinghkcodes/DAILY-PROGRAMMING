/*Program to print the every single word of the string seperately in the next line
for eg. Rohit Kumar Singh =>    Rohit
                                Kumar
                                Singh*/
                                
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    char name[50];
    int length;
    cout<<"Enter the string=";
    gets(name);
    length=strlen(name);
    for (int i=0;i<length;i++)
    {
        if(name[i]==' ' || name[i] == '\t' ||name[i] == (int)NULL)
        {
            cout<<"\n";
        }else{
            cout<<name[i];
        }
    }

}