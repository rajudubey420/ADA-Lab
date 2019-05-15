#include<stdio.h>
#include<conio.h>
int binary(int [],int,int,int,int);
void main()
 {
  int a[10],i,m,n,c,l,u;
  clrscr();
  printf("\n Enter size of the array: ");
  scanf("%d",&n);
  printf("\n Enter the elements of the array:");
  for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
  printf("\n Enter the number to searched:\t");
  scanf("%d",&m);
  l=0;
  u=n-1;
  c=binary(a,n,m,l,u);
  if(c==0)
	printf("\n Number is not found");
  else
	printf("\n Number is found");
  getch();
 }

int binary(int a[],int n,int m,int l,int u)
 {
  int mid,c=0;
  if(l<=u)
   {
    mid=(l+u)/2;
    if(m==a[mid])
     {
      c=1;
     }
    else if(m<a[mid])
     {
      return binary(a,n,m,l,mid-1);
     }
    else
     {
      return binary(a,n,m,mid+1,u);
     }
   }
  return c;
 }