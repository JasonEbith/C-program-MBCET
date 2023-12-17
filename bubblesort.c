#include<stdio.h>
void main()
{ int limit,i,j,values[20],temp;
  printf("Enter limit of array\n");
  scanf("%d",&limit);
  printf("Enter values\n");
  for(i=0;i<limit;i++)
  { scanf("%d",&values[i]);
  }
  for(i=0;i<limit;i++)
  { for(j=0;j<limit-i-1;j++)
     {if(values[j]< values[j+1])
        { temp=values[j+1];
          values[j+1]=values[j];
          values[j]=temp;
        }
       
     }
     
  }
  printf("Sorted array:");
  for(i=0;i<limit;i++)
  { printf("%d\t",values[i]);
    
  }
}
