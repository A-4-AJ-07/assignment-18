#include<stdio.h>
#include<string.h>
void rev(char a[]);
int main()
{
	char str[10];
    printf("Enter the element of string:");
    fgets(str,10,stdin);
    rev(str);
}
void rev(char a[])
{   
    int i,d;
	d=strlen(a);
	printf("Reverse of string:");
	for(i=d-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}