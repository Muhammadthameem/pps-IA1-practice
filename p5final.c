#include<stdio.h>
float input()
{
  float a;
  printf("Enter the number");
  scanf("%f",&a);
  return a;
}
float my_sqrt(float n)
{
  float mid,temp;
  mid = n/2;
  temp = 0;
  while(mid != temp)
  {
    temp = mid;
    mid = (n/temp+temp)/2;
    return mid;

  }
}  
  void output(float n,float sqrt_result)
  {
    printf("Square root of %f is %f",n,sqrt_result);
  }
void main()
{
  float a,b;
  a = input();
  b = my_sqrt(a);
  output(a,b);
}