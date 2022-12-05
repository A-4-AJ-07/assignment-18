#include<stdio.h>
#include<string.h>
void length(char s[]);
int main()
{
    char str[10];
    printf("Enter the element of string:");
    fgets(str,10,stdin);
    length(str);
}
void length(char s[])
{
    int i,d=-1;
    for(i=0;s[i]!=NULL;i++)
    {
        d++;
    }
    printf("Length of string:%d",d);
}
