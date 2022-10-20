/* Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user*/
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter the 10 numbers in array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum=%d\n",sum);
    avg=sum/10;
    printf("Avg=%f",avg);
}