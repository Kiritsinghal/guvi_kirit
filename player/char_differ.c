#include<stdio.h>
void main()
{
	char a[10],b[10];
	int i,d=0;
	gets(a);
	gets(b);
	if(strlen(a)!=strlen(b))
	{
		printf("Invalid string");
		exit(0);
	}
	else
	{
		for(i=0;i<strlen(a);i++)
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

