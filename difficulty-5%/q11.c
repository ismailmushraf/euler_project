#include <stdio.h>

int max_prod_row(int n, int m, int arr[n][m]);
int max_prod_col(int n, int m, int arr[n][m]);
int max_prod_diag(int n, int m, int arr[n][m]);

int main() 
{
  int n, m;
  printf("Enter a The Dimensions of Grid: ");
  scanf("%d%d", &n, &m);
  printf("Enter the Numbers: \n");
  int grid[n][m];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      scanf("%d", &grid[i][j]);

  int great_product_along_rows = max_prod_row(n, m, grid);
  int great_product_along_cols = max_prod_col(n, m, grid);
  int great_product_along_diag = max_prod_diag(n, m, grid);
  printf("Max Product along rows: %d\n", great_product_along_rows);
  printf("Max Product along cols: %d\n", great_product_along_cols);
  printf("Max Product along diagonal: %d\n", great_product_along_diag);

  return 0;
}

int max_prod_row(int n, int m, int arr[n][m])
{
  int max_prod = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= (m - 4); j++)
    {
      int prod = arr[i][j] * arr[i][j+1] * arr[i][j+2] * arr[i][j+3];
      if (prod > max_prod)
        max_prod = prod;
    }
  }
  return max_prod;
}

int max_prod_col(int n, int m, int arr[n][m])
{ 
  int max_prod = 1;
  for (int j = 0; j < m; j++)
  {
    for (int i = 0; i <= (n-4); i++)
    {
      int prod = arr[i][j] * arr[i+1][j] * arr[i+2][j] * arr[i+3][j];
      if (prod > max_prod)
        max_prod = prod;
    }
  }
  return max_prod;
}

int max_prod_diag(int n, int m, int arr[n][m])
{
  int diag_pos_i = n - 4;

  int max_product = 1;
  while (diag_pos_i >= 0)
  {
    
    for (int i = diag_pos_i, j = 0; i < n-4+1; i++, j++)
    {
      int product = arr[i][j] * arr[i+1][j+1] * arr[i+2][j+2] * arr[i+3][j+3];
      if (product > max_product)
        max_product = product;
    }

    diag_pos_i--;
  }

  int diag_pos_j = 1;
  while (diag_pos_j <= (m - 4))
  {
    for (int j = diag_pos_j, i = 0; j < n -4+1; j++, i++)
    {
      int product = arr[i][j] * arr[i+1][j+1] * arr[i+2][j+2] * arr[i+3][j+3];
      if (product > max_product)
        max_product = product;
    }

    diag_pos_j++;
  }

  diag_pos_i = 4 - 1;

  while (diag_pos_i < n)
  {
    for (int i = diag_pos_i, j=0; i >= 4-1; i--, j++)
    {
      int product = arr[i][j] * arr[i-1][j+1] * arr[i-2][j+2] * arr[i-3][j+3];
      if (product > max_product)
        max_product = product;
    }
    diag_pos_i++;
  }

  diag_pos_j = 1;

  while (diag_pos_j <= (m-4))
  {
    for (int j = diag_pos_j, i = n-1; j <= (m-4); i--, j++)
    {
      int product = arr[i][j] * arr[i-1][j+1] * arr[i-2][j+2] * arr[i-3][j+3];
      if (product > max_product)
        max_product = product;
    }
    diag_pos_j++;
  }

  return max_product;
}
