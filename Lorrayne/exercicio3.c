
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n1;
  printf("Digite um valor ate 100: ");
  scanf("%d", &n1);
  numerosprimos(n1);
  return 0;
}

void numerosprimos(int n)
{
  int i;
  for ( i = 0; i < 100; i++)
  {
    	if(n%2!=0){
    ("Numeros primos entre 1 a 100: ", n);
      }
  }

}
