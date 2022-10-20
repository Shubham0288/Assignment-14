/* Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int a[20],b[20],i,n;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    printf("Enter the elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("The copying elements in array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;

}