#include<stdio.h>
#include<string.h>
void compare(char Str1[],char Str2[]);
int main()
{
	char str1[10],str2[10];
    printf("Enter the element of string 1:");
    fgets(str1,10,stdin);
    printf("Enter the element of string 2:");
    fgets(str2,10,stdin);
    compare(str1,str2);
}
void compare(char Str1[],char Str2[])
{   
    int i,flag;
      flag=strcmp(Str1,Str2);
      if(flag==1)
      printf("First string is greater than second.");
      if(flag==0)
      printf("First string is equal to second.");
      if(flag==-1)
      printf("First string is less than second.");
      
}