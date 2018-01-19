#include<stdio.h>
void main()
{
	int n,k,a,x=0;
	scanf("%d",&n);
	k=n;
	while(k>0)
	{
		a=k%10;
		x=x*10+a;
		k=k/10;
	}
	if(x==n)
		printf("Palindrome");
	else
		printf("Not Palindrome");
}