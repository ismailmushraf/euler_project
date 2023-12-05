#include<stdio.h>
#include<math.h>

int find_next_prime(int, unsigned long long int);
int is_prime(unsigned long long int);

int main()
{

  printf("Enter a number: ");
  unsigned long long int n;
  scanf("%lld", &n);

  int currPrime = 2;
  while (!is_prime(n))
  {
    if (n % currPrime == 0)
      n = n / currPrime;
    else 
      currPrime = find_next_prime(currPrime, n);
  }
  printf("Largest Prime Factor: %lld\n", n);
  return 0;
}

int find_next_prime(int prevPrime, unsigned long long int num)
{
  for (int i = prevPrime+1; i < num; i++) 
  {
    if (is_prime(i))
      return i;
  }
  return 0;
}

int is_prime(unsigned long long int num)
{
  for (int i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0) return 0;
  }
  return 1;
}
