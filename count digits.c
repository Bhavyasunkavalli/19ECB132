#include<stdio.h>
void main()
{
	char s[10];
	printf("enter the string");
	gets(s);
	int i,l=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(isdigit(s[i])==1)
		l++;
	}
	printf("the number of digits is %d",l);
}
