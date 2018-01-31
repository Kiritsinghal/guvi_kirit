#include<stdio.h>
#include<math.h>
void main()
{
	int n,l=0,s=0,r,m;
	scanf("%d",&n);
	m=n;
	while(m>0)
	{
	    m=m/10;
	    l++;
	}
	m=n;
	while(m>0)
	{
	    r=m%10;
	    m=m/10;
	    s=s+pow(r,l);
	}
	if(n==s)
	    printf("yes");
	else
	    printf("no");
}			
		