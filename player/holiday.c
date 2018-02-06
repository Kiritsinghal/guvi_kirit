#include<stdio.h>
void main()
{
	char s[10];
	gets(s);
	if(s[0]=='s' || s[0]=='S') 
		printf("yes");
	else
		printf("no");
}
