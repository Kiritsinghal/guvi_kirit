#include<stdio.h>

void main()

{

    char s[20];

    int n,i;

    gets(s);

    n=strlen(s);    
    for(i=n;i>=0;i--)

    {

        printf("%c",s[i]);

    }

}