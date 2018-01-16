#include<stdio.h>

void main()

{

    char n;

    scanf("%c",&n);

    if(n>=65 && n<=91 || n>=97 && n<=122)

    printf("Alphabet");

    else 

    printf("No");

}