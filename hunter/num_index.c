#include<stdio.h>
void main()
{
	int i,a[100],b[100],n,c=0;
	printf("Enter the number of inputs");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	b[0]=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			b[c]=a[i];
			c++;
		}
	}
	if(b[0]!=0)
	{
		for(i=0;i<c;i++)
			printf("%d",b[i]);
	}
	else
		printf("-1");
}
