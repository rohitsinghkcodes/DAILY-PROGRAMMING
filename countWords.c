//Program to count the total no of words entered in a string
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char s[100];
    int len,i,count=0;
    printf("Enter the string=");
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if((s[i]!=' ' && s[i+1]==' ')||(s[i]!='\t' && s[i+1]=='\t'))
        {
            count++;
        }
        
    }
    printf("\nTotal no of words:%d",count);
    getch();
}