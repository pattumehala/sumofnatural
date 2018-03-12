#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("\nEnter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\nThe sum of natural number is:%d",sum);
return 0;
}
