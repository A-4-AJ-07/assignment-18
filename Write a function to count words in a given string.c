#include<stdio.h>
#include<string.h>
void word(char str[]);
int main()
{
	char str[10];
	printf("Enter the string:");
	gets(str);
	word(str);
}
void word(char str[])
{
	int i,d=1;
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]==32 )
		    d++;
		
	}
	printf("the total number of words are %d  ",d);
}