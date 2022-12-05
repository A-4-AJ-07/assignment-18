#include<stdio.h>
#include<string.h>
void lower(char str1[]);
int main()
{
	char str1[10];
    printf("Enter the element of string 1:");
    fgets(str1,10,stdin);
    
    lower(str1);
}
void lower(char str1[])
{   
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
    		if(str1[i]>=65&&str1[i]<=90)
		{
			str1[i]=str1[i]+32;
		}
	}
	for(i=0;str1[i]!='\0';i++)
	{
		printf("%c",str1[i]);
	}
}