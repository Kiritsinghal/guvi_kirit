#include<stdio.h>
void main()
{
	int x=0,n;
	scanf("%d",&n);
	if(n==0)
		x++;
	while(n>0)
	{
		n=n/10;
		x++;
	}
	printf("%d",x);
}