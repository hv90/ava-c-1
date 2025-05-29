#include <stdio.h>
int main()
{
  int matriz[3][3];
  int i, j;
  // Leitura dos elementos da matriz
  printf("Digite os elementos da matriz 3x3:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Elemento [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  // Impressão da matriz resultante
  printf("\nMatriz resultante após multiplicação por 5:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      // Multiplicando cada elemento por 5 e imprimindo o resultado
      printf("%d\t", matriz[i][j] * 5);
    }
    printf("\n");
  }
  return 0;
}