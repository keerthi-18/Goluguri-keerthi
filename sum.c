#include<stdio.h>
int main()
{
int a; 
scanf("%d",&a);
if(a<0)
printf("%d is negative",a);
else if(a>0)
printf("%d is positive",a);
else
printf("given number is zero");
}
