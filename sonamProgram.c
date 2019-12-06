#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int i,j,n;
    float b[50],a[50];
    printf("Enter the size of array=");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n-2;i++)
    {
        if(a[i]>=0)
        {
        b[i]=(a[i]+a[i+1]+a[i+2])/3; 
        }
        if(a[i]<=-1)
        {
            exit(0);
        }
    }
    for(i=0;i<n-2;i++)
    {
        printf("%f\t",b[i]);
        
    }
    getch();
}