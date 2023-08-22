#include <stdio.h>

int main()
{
  int x =1000;
  int *px = &x;

  *px=0;
  printf("nilai: %d|%p|%p|%d\n", x,&x,px,*px);

  int **ppx =&px;
  **ppx=10000;
  printf("nilai ppX : %d|%p|%p|%p|%d\n",x,&x,px,*ppx,**ppx);

  
  return 0;
}