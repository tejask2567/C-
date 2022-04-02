#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() 
{
  int number;
  char operator;
  double first, second,n , result,sinValue, radianVal, degreeVal,cosValue,tanValue;
  float celsius , fahrenheit ;
  
  printf("WELCOME TO THE ULTIMATE CALCULATOR\n\nENTER\n1 for temperature converter(C-F)\n2 to find log(x)e value\n3 for sin converter\n4 for cos converter\n5 for tan converter\n6 for normal calculator:\t");
  scanf("%d",&number);
  
  // celsius to fahrenheit converter
  
    if (number ==1) {
      printf("%c Enter temperature in Celsius:", number);
      scanf("%f", &celsius);
      fahrenheit = (celsius * 9 / 5) + 32;
      printf("%f fahrenheit= ",fahrenheit);return 0; }
      
    if (number ==2) {
    printf("Enter a number to calculate its natural logarithm (base = e)\n");
  scanf("%lf", &n);

  result = log(n);

  printf("Natural log of %.2lf = %lf\n", n, result);return 0; }

  // SIN Convert Degree Value to Radian
 
  if (number==3) {
    printf(" Please Enter an Angle in degrees :  ");
  scanf("%lf", &degreeVal);
  
 
  radianVal = degreeVal * (PI/180);
  sinValue = sin(radianVal);
  
  printf("\nThe Sine value of %f = %f Radians\n ", degreeVal, sinValue); return 0; }
    
  // COS Convert Degree Value to Radian  
   
    if (number==4) {
      printf(" Please Enter an Angle in degrees :  ");
  scanf("%lf", &degreeVal);
  radianVal = degreeVal * (PI/180);
  cosValue = cos(radianVal);
  
  printf("\nThe COSIN value of %f = %f Radians\n ", degreeVal, cosValue);  return 0;}
  
    // TAN Convert Degree Value to Radian 

  if (number==5) {
    printf(" Please Enter an Angle in degrees :  ");
  scanf("%lf", &degreeVal);
  radianVal = degreeVal * (PI/180);
  tanValue = tan(radianVal);
  
  printf("\nThe TAN value of %f = %f Radians\n ", degreeVal, tanValue);  return 0;}
    
   //normal calculator 
    
    else {
      printf("enter the operator (+,-,*,/,):");
       scanf(" %c",&operator);

      printf("enter the numbers one by one:");
       scanf(" %lf %lf",&first,&second);
      switch (operator)
     {
       case '+':
         printf(" %lf + %lf = %lf\n", first,second,(first+second));
         break;
       case '-':
         printf(" %lf - %lf = %lf\n", first,second,(first-second));
          break;
       case '*':
         printf(" %lf * %lf = %lf\n", first,second,(first*second));
         break;
       case '/':
          if(second !=0.0)
           printf(" %lf / %lf = %lf\n", first,second,(first/second));
         else 
           printf("CAN'T DIVIDE BY ZERO\n");
         break;

        default:
        printf("invalid character");
     } }       
      return 0;   //gcc prototype.c -o prototype -lm
 }
