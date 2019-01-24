#include<stdio.h>
void main()
{
  int n,i,j=0;
  scanf("%d",&n);
  while(n!=0){
  i=n%10;
  j=j*10+i;
  n=n/10;}
  printf("\n%d",j);
  return 0;}
