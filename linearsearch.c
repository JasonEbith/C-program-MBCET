#include<stdio.h>
int main()
{
 int  i, a[10], pos,c=0,num,n;
 printf("enter the limits");
 scanf("%d", &n);
 printf("enter numbers");
 for(i=0; i<n; i++)
 {
 scanf("%d",&a[i]);
 }
printf("Number to be searched");
scanf("%d", &num);
for(i=0; i<n; i++)
{
    if(num==a[i])
{
    c=1;
pos= i+1;
break;
}
}
if(c==0)
{
     printf("number not found");
}
else{
    printf("number is found at %d", pos);
}

return 0;
}
