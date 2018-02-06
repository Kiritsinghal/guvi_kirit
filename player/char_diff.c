#include<stdio.h>
void main()
{
	char a[10],b[10];
	int i,d=0,x,y;
	gets(a);
	gets(b);
	x=strlen(a);
	y=strlen(b);
	if(x!=y)
	{
		printf("Invalid string");
		exit(0);
	}
	else
	{
		for(i=0;i<x;i++)
		{
			if(a[i]!=b[i])
				d++;
		}
	}
	if(d>1 || d==0)
		printf("no");
	else
		printf("yes");
}
