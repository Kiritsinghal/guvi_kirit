#include<stdio.h>
void main()
{
	int a[20],b[20],n,i,c=0,j=0,flag=0;
	printf("Enter the no of inputs");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b[j]=a[0];
	c++;
	for(i=1;i<n;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
		}	
		if(flag==0)
		{
			b[c]=a[i];
			c++;
		}
		flag=0;		
	}
	for(i=0;i<c;i++)
	{
		printf("%d",b[i]);
	}
}

