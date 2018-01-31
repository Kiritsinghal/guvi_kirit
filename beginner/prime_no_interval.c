#include<stdio.h>
void main()
{
	int n,m,i=0,j,f;
	scanf("%d%d",&n,&m);
	for(i=n+1;i<m;i++)
	{
		f=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=0;
				break;
			}
		}
	if(f==1)
		printf("%d\n",i);
	}	
}	
				
		