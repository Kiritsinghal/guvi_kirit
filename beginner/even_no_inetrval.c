#include<stdio.h>
void main()
{
	int n,m,i=0;
	scanf("%d%d",&n,&m);
	for(i=n;i<m;i++)
	{
		if(i%2==0)
			printf("%d ",i);
	}
}