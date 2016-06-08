#include<stdio.h>
#include<string.h>
main()
{
char a[20],temp[23];
int i=0,j=0;
printf("\nEnter the string to be reversed");
scanf("%s",a);
while(a[i]!='\0')
{
i++;
}
i--;
while(i>=0)
{
temp[j]=a[i];
j++;
i--;
}
temp[j]='\0';
printf("\nReversed String is %s",temp);
return 0;
}
