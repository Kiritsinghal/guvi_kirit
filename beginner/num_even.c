#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	if(n>=1 && n<=100000)
	{
		if(n%2==0)
			printf("Even");
		else
			printf("Odd");
	}
	else
		printf("No not in range");
}