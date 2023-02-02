#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  int *p;
  scanf("%d",&n);
  p=&n;
  printf("Fibonacci=%d",fibo(*p));

    return 0;
}
int fibo(int n)
{
 if(n==0){
   return 0;

 }
 else if(n==1){
  return 1;
 }
 else{
  return fibo(n-1)+fibo(n-2);
 }
}
