#include<stdio.h>

long long int smallestMultiple(int);
long long int lcm(long long int, long long int);
long long int gcd(long long int, long long int);


int main() 
{
  int n;
  printf("Enter a Number: ");
  scanf("%d", &n);
  long long int result = smallestMultiple(n); 
  printf("The Smallest number divisible by 1 to %d is %lld\n", n, result);
}

long long int smallestMultiple(int num)
{
  long long int result = 1;
  for (int i = 2; i <= num; i++)
  {
    result = lcm(result, i);
  }
  return result;
}

long long int lcm(long long a, long long b)
{
  return (a * b)/gcd(a, b);
}

long long int gcd(long long int a, long long int b)
{
  while (b!=0)
  {
    long long temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
