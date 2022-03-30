#include<stdio.h>
void main()
{
	char s[10],T[10];
	int i;
	printf("enter string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
	T[i]=toupper(s[i]);
}
	printf("string converted to upper case is\n");
	puts(T);
}
