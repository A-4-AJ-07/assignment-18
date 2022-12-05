#include<stdio.h>
#include<string.h>
void word(char str[]);
void swap(char a[],int i,int j)
{
	char temp;
	while(i<=j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
}

int main()
{
	char str[10];
	printf("Enter the string:");
	gets(str);
	word(str);
}
void word(char str[])
{
	 int i=0,start=0,end=0,flag=0;
	 while(str[i]!='\0')
	 {
	 	while(str[i]!=' ')
	 	{
	 		if(str[i]=='\0')
	 		{
	 			flag=1;
	 			break;
			 }
			 end++;
			 i++;
		 }
		 swap(str,start,end-1);
		 if(flag==1)
		 break;
		 start=end++;
	 }
	 swap(str,0,i-1);
	puts(str);
	return 0;
}