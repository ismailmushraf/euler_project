#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main()
{
  printf("-------Prints the nth Prime Number-------\n");
  int n;
  scanf("%d", &n);
  int count = 0, i = 1;
  
  while (count != n)
  {
    i++;
    if (isPrime(i))
    {
      count++;
    }
  }
  printf("The %dth Prime number is %d", n, i);
  printf("\n");

  return 0;
}

int isPrime(int n)
{
  if (n <= 1) return 0;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0) return 0;
  }
  return 1;
}
