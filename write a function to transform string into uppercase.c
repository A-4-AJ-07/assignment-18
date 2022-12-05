#include<stdio.h>
#include<string.h>
void upper(char str1[]);
int main()
{
	char str1[10];
    printf("Enter the element of string 1:");
    fgets(str1,10,stdin);
    
    upper(str1);
}
void upper(char str1[])
{   
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
    		if(str1[i]>=97&&str1[i]<=122)
		{
			str1[i]=str1[i]-32;
		}
	}
	for(i=0;str1[i]!='\0';i++)
	{
		printf("%c",str1[i]);
	}
}