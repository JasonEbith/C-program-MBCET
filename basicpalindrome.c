#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
int i,j,n,flag=0;
printf("Enter the string");
gets(str);
n=strlen(str);
for(i=0; j=n-1; i<=n/2, i++,j--)
{
if(str[i]!=str[j])
{
    flag=1;
    break;
}
}
if(flag==1)
printf("it is not a palindrome");
else
printf("IT IS A PALINDROME");
}
