 #include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int h,m,s;
for(h=0;h<=24;h++)
{
    printf("%.2d",h);
    fflush(stdout);

    printf("\b\b\b");

for(m=0;m<=59;m++)
{
    printf("%.2d",m);
    fflush(stdout);

    printf("\b\b\b");


for(s=0;s<=59;s++)
{
    printf("%.2d: %.2d :%.2d",h,m,s);
    fflush(stdout);
sleep(1);
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("\a\a");//for beep sound
}
}
}

fflush(stdout);

return 0;
}
