#include <stdio.h>
#include <stdlib.h>
void temperatura()
{
  float graus, fahrenheit, f, c;
  int conversao, i;
  printf("Digite quantas conversoes voce deseja realizar: ");
  scanf("%d", &conversao);
  for (i = 0; i < conversao; i++)
  {
    printf("Digite a sua temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) / 1.8;
    fahrenheit = (graus * 1.8) + 32;
    printf("Digite a sua temperatura em Celsius:");
    scanf("%f", &graus);
    fahrenheit = (graus * 1.8) + 32;
    printf("Temperatura convertida em Graus Celsius: %f.2\nTemperatura convertida em Fahrenheit: %f.2\n", c, fahrenheit);
  } 
}
int main(void)
{
  temperatura();
  return (0);
}
