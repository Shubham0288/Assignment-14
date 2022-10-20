/* Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int a[10],i,greater;
    printf("Enter the 10 numbers in the array : ");
    greater=a[0];
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(greater<a[i])
        {
            greater=a[i];
        }
    }
    printf("The greater number in array is %d",greater);
    return 0;
}