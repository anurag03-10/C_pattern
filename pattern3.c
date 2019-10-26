#include<stdio.h>
void main()
{
 int y=1,x,a;
 char z;
 printf("Enter no. of lines");
 scanf("%d",&a);
 for(;y<=a;y++)
 { z='A';
   for(x=1;x<=y;x++)
    { 
    
    printf("%c ",z);
    z++;
    }
    
    printf("\n");
  }
 }
