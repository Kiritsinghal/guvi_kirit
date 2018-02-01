#include<stdio.h>
void main()
{
	char s[20];
	gets(s);
	strcat(s, ".");
	printf("%s",s);
}
