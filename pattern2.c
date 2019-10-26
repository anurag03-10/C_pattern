#include<stdio.h>
void main()
{
 int y=1,x;
 int a,b=1,c=a-1;
 printf("Enter no. of lines");
 scanf("%d",&a);
 for(;y<=a;y++)
 {
  for(;c>=b;c--)
  {
    printf(" ");
     for(x=1;x<=y;x++)
     {
      printf("*  ");
     }
   } 
   printf("\n");
  }
 }
