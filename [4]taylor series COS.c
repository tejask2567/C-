#include <stdio.h>
#include<math.h>
#define PI 3.142857
int main(void) {
    int deg,i;
    float x,nume,deno,term,sum;

    printf("enter degree: ");
    scanf("%d",&deg);

    x=deg*(PI/180);
    nume = 1;
    deno=1;
    sum=0;
    i=0;
    do{
      term=nume/deno;
      sum=sum+term;
      i=i+2;
      nume=-nume*x*x;
      deno=deno*i*(i-1);
    }
    while (fabs(term)>=0.000001);

    printf("computed value : cos(%d)=%.2f\n",deg,sum);
    printf("library function output : cos(%d) = %.2f\n", deg , cos(x));
  return 0;
}