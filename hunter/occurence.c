#include<stdio.h>
void main()
{
	int a[100000],b[100000],i,n,c,j;
	printf("Enter the no of inputs");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					c=0;
					break;
				}
				else
				{
					c=a[i];
				}
			}	
		}
		if(c>0)
		{
			printf("%d",c);
			exit(0);
		}
	}
}
