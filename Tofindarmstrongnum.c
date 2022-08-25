#include<stdio.h>
int main()
{
    int a,b,n,sum=0;
    printf("enter the number\n ");
    scanf("%d",&n);
     b=n;
    while(b>0)
    {
        a=b%10;
        sum= sum+ (a*a*a);
        b=b/10;
    }
   if(sum==n)
   printf("the number %d is Armstrong",n);
   else
   printf("the number is not armstrong");
   return 0;
}
