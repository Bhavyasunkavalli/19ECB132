#include<stdio.h>
#include"CS_PSP.h"
int main()
{
char ch;
int i=0;
while( (ch=getch())!=10)
{
 if (ch==127)// 127 is the ascii code for backspace
{
printf("\b");
printf(" ");
printf("\b");
}
else
{
    printf("*");
}
}
return 0;
}
