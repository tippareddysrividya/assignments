#include<stdio.h>
int main()
{
  int n,x,y;
  printf("enter the number");
  scanf("%d",&n);
  x = n;
  y= 1;
  while(x> y)
  {
    x = (x + y)/2;
    y = n/x;
  }  
  
  printf (" root of %d is %d", n, x);
return 0;
}
