#include<stdio.h>
int main()
{
int n,k,a[30],sum=0,i=1;
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=k;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
}
