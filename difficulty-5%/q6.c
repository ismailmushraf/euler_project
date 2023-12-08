#include<stdio.h>

int sum_of_squares(int n);
int square_of_sum(int n);
int main()
{

  int n;
  printf("Enter a Number: ");
  scanf("%d", &n);
  int a = sum_of_squares(n);
  int b = square_of_sum(n);

  printf("The difference of %d - %d = %d\n", b, a, b - a);

}

int sum_of_squares(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += (i * i);
  }
  return sum;
}

int square_of_sum(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  
  return sum * sum;
}
