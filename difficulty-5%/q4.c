#include<stdio.h>

int reverse_number(int num)
{
  int reverse = 0;

  while (num > 0)
  {
    int rem = num % 10;
    reverse = reverse * 10 + rem;
    num = num / 10;
  }
  return reverse;
}

int main()
{
  int max_palindrome_prod = 0;
  for (int i = 100; i <= 999; i++)
  {
    for (int j = 100; j <= 999; j++)
    {
      int prod = i * j;
      int prod_rev = reverse_number(prod);

      if (prod == prod_rev && prod > max_palindrome_prod)
        max_palindrome_prod = prod;
    }
  }
  printf("%d\n", max_palindrome_prod);
  return 0;
}
