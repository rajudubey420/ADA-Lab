#include<conio.h>
#include<stdio.h>
void main()
{
    int n;
    int a[10];
    int b[10];
    int c[10];
    int sum=0,i,t,j=0,k=0;
    printf("\nEnter no of coins in candidate set: ");
    scanf("%d",&n);
    printf("\nEnter the coins in candidate set in ascending order\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter total amount required: ");
    scanf("%d",&t);
    for(i=n-1; i>=0;i--)
    {
        if((a[i]+sum)<=t)
        {
            sum=sum+a[i];
            b[j++]=a[i];
        }
    }
    printf("Solution set is: ");
    for(i=0; i<j; i++)
    {
        printf("%d, ",b[i]);
    }
}
