#include<stdio.h>
int input_n()
{
  int n;
  printf("Enter the number");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
  for(i=0;i<=n;i++)
  {
    sum=sum+i;

  }
  return sum;
}
void output(int n,int sum)
{
  int i;
  printf("0");
  for(i=1;i<=n;i++)
  {
  printf(" + %d  ",i);
  }
  printf("is %d",sum);
}
int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);

}