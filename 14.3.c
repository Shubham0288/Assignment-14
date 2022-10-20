/* Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user*/
#include<stdio.h>
int main()
{
    int a[10],i,SO=0,SE=0;
    printf("Enter the 10 numbers in array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            SE=SE+a[i];
        }
        else
        {
            SO=SO+a[i];
        }
    }
    printf("Sum of the all even number is %d\n",SE);
    printf("Sum of the all odd numbers is %d",SO);
    return 0;
}