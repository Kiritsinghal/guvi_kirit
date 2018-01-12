#inlcude<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	if(n>=1 && n<=100000)
	{
		if(n>0)
		{
			printf("Positive");
		}
		else if(n<0)
		{
			printf("Negative");
		}
		else
		{
			printf("Zero");
		}
	}
	else
	{
		printf("Number not in range");
	}
}