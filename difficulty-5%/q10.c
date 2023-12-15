#include <stdio.h>
#include <math.h>

int is_prime(int);

int main() 
{
  int n;
  printf("-----------The Sum of Primes---------\n");
  printf("Enter a Number: ");
  scanf("%d", &n);

  long long int prime_sum = 0;
  for (int i = 2; i <= n; i++)
  {
    if (is_prime(i)) 
      prime_sum += i;
  }

  printf("The sum of all Primes under %d is %lld. \n", n, prime_sum);

  return 0;
}

int is_prime(int n)
{
  
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0) return 0;
  }
  
  return 1;
}
