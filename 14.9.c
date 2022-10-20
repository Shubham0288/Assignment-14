/* Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user*/
#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("Enter the lenght of the array : ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("The array in normal order is : ");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("The array in reverse order is : \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}