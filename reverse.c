#include<stdio.h>
int main()
{
int a,r=0,i;
printf("\nEnter the number");
scanf("%d",&a);
while(a!=0)
{
r=r*10;
r=r+a%10;
a=a/10;
}
printf("%d",r);
return 0;
}
