#include<stdio.h>
int main()
{
int n,r,r1;
printf("enter any number:");
scanf("%d",&n);
if(n>0)
{
r=n%10;
}
n=n/10;
while(n>0)
{
r1=n%10;
n=n/10;
}
printf("last digit is %d",r);
printf("first digit is %d",r1);
return 0;
}

\*output:
enter any number:46
last digit is 6first digit is 4*/
