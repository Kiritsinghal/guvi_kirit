#include<stdio.h>
void main()
{
	char x;
	scanf("%c",&x);
	if(x=='a'||'A'||'e'||'E'||'i'||'I'||'o'||'O'||'u'||'U')
		printf("Vowel");
	else
		printf("Consonant");
}