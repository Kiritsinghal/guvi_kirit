#include<stdio.h>
void main()
{
	int p,q,r;
	scanf("%d%d%d",&p,&q,&r);
	if(p>q)
	{
		if(p>r)
			printf("%d",p);
		else
			printf("%d",r);
	}
	else
	{
		if(q>r)
			printf("%d",q);
		else
			printf("%d",r);
	}
}