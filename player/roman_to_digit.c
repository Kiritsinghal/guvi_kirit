#include<stdio.h>
void main()
{
	char a[5]; int i,d=0,x;
	printf("Enter the roman number");
	gets(a);
	x=strlen(a);
	if(x<=4)
	{
		for(i=0;i<x-1;i++)
		{
			if(a[i]=='I')
			{	
				if(a[i+1]=='V')
					d+=4;
				else if(a[i+1]=='X')
					d+=9;
				else
					d++;		
			}
			else if(a[i]=='V')
			{
				d+=5;
			}
			else if(a[i]=='X')
				d+=10;
		}
		printf("%d",d);
	}
	else
	{
		printf("Invalid input");
		exit (0);
	}
}
