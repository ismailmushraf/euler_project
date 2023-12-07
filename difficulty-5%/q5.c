#include<stdio.h>

int main()
{
  for (unsigned long long int i = 20; i < 900000000; i+=20)
  {
    int divisible_by_1to20 = 1;
    for (int j = 1; j <= 20; j++)
    {
      if (i % j != 0)
      {
        divisible_by_1to20 = 0;
        break;
      }
    }
    if (divisible_by_1to20) printf("%lld\n", i);
  }
}
