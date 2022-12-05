#include<stdio.h>
#include<string.h>
int count(char a[]);
int main()
{
	char str[10];
	printf("Enter the string:");
	fgets(str,10,stdin);
	count(str);
}
int count(char a[])
{
	int i,j,k=0;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[j]==a[i])
			k++;
			
		}
		if(k!=0)
		{
			printf(" %c is duplicate",a[i]);
		}
	}
}