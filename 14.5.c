/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user*/
#include<stdio.h>
int main()
{
    int a[10],i,smaller;
    printf("Enter the 10 numbers in array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    smaller=a[0];
    for(i=0;i<=9;i++)
    {
        if(smaller>a[i])
        {
            smaller=a[i];
        }
    }
    printf("The smaller number in given array is %d",smaller);
    return 0;
}