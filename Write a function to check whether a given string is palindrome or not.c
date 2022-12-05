#include<stdio.h>
#include<string.h>
void rev(char a[]);
int main()
{
	char str[10];
	printf("Enter the string:");
	gets(str);
	rev(str);
}
void rev(char a[])
{
	int flag,i,d;
	d=strlen(a)-1;
	for(i=0;i<=d;i++)
	{
		if(a[i]!=a[d-i])
		{
			flag=0;
			break;
		}
		else
		flag=1;
	}
	if(flag==1)
	printf("String is a palindrome.");
	else
	printf("String is not a palindrome.");
	printf("%d",d);
}