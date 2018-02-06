#include<stdio.h>
void main()
{
	char a[10]; int x,i,y;
	gets(a);
	x=strlen(a);
	for(i=0;i<x;i++)
	{
		y=a[i];
		a[i]=a[i+1];
		a[i+1]=y;
		i++;
	}
	printf("%s",a);
}
