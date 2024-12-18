#include <stdio.h>
#include <string.h>
#include "distancia.h"


int main()
{
   int unidade;
   double valor;
   char unidadeOrigem[20], unidadeDestino[20];

   printf("Digite o numero relacionado a unidade que deseja converter: \n");
   printf("1. distancia (metro, centimetro...)\n");
   printf("2. peso (gramas, kilogramas...)\n");
   printf("3. armazenamento (megabytes, gigabytes...)\n");
   scanf("%d", &unidade);

   switch (unidade)
   {
   case 1:
   
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (metro, centimetro, quilometro, etc.): ");
    scanf("%s", unidadeOrigem);

    printf("Digite a unidade de destino (metro, centimetro, quilometro, etc.): ");
    scanf("%s", unidadeDestino);

    double fatorOrigem = obterFatorConversao(unidadeOrigem);
    double fatorDestino = obterFatorConversao(unidadeDestino);

    // Verificar se as unidades são válidas
    if (fatorOrigem < 0 || fatorDestino < 0) {
        printf("Unidade desconhecida. Verifique as entradas e tente novamente.\n");
        return 1;
    }

    // Conversão
    double valorEmMetros = valor / fatorOrigem;
    double valorConvertido = valorEmMetros * fatorDestino;

    // Exibir o resultado
    printf("%.2lf %s equivalem a %.2lf %s\n", valor, unidadeOrigem, valorConvertido, unidadeDestino);

    break;
   
   default:

   printf("unidade fora do escopo que pode ser analisado\n");
    break;
   }

    return 0;
}