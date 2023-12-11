#include <stdio.h>
#include <math.h>

int main() 
{

  int n;
  scanf("%d", &n);
  int a = 1, b = 1;

  for (a = 1; a <= n; a++) 
  {
    for (b = a + 1; b <= n; b++)
    {
      long long int c_squared = (a * a) + (b * b);
      float c = sqrt(c_squared); 
      if ((a + b) == (n - c)) 
      {
        printf("a: %d, b: %d, c: %d\n", a, b, (int) c);
        printf("product: %d\n", a * b * (int)c);
      }
    }
  }
  printf("\n");
  return 0;
}
