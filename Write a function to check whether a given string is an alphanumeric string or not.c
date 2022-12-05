#include<stdio.h>
#include<string.h>
void a(char a[]);
int main()
{
	char str[10];
    printf("Enter the element of string:");
    fgets(str,10,stdin);
    a(str);
}
void a(char a[])
{   
    int i,flag;

	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=48&&a[i]<=57)
		{
		  flag=0;
		  break;
	         }
	         else
	         flag=1;
	}
	if(flag==1)
	printf("String is not an alphanumeric.");
	if(flag==0)
	printf("String is an alphanumeric.");
}