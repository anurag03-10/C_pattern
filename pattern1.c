#include<stdio.h>
void main()
{
 int y=1,x;
 int a;
 printf("Enter no. of lines");
 scanf("%d",&a);
 for(;y<=a;y++)
 {
   for(x=1;x<=y;x++)
   {
    printf("*  ");
    }
    printf("\n");
  }
 }
