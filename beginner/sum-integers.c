#include<stdio.h>
void main()
{
	int i,n,k,a[20],x=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=k;i++)
		x=x+a[i];
	printf("%d",&x);
}