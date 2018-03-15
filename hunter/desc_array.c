#include<stdio.h>
void main()
{
	int a[20],i,gt,n,j,flag=0;
	printf("Enter the size of input");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				gt=a[i];
				a[i]=a[j];
				a[j]=gt;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		for(i=0;i<n;i++)
			{
				printf("%d",a[i]);
			}	
	}
	else
	{
		printf("%d",a[0]);
	}

}
