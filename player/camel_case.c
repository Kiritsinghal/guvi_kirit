#include<stdio.h>
void main()
{
	char a[20];
	int x,i;
	gets(a);
	a[0]-=32;
	x=strlen(a);
	for(i=0;i<x;i++)
	{
		if(a[i]==32)
		{
			a[i+1]-=32;
		}
	}
	printf("%s",a);
}
