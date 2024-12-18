#include <stdio.h>
#include <string.h>
#include "distancia.h"
#include "bytes.h"


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

    double fatorOrigem = obterFatorConversaoDistancia(unidadeOrigem);
    double fatorDestino = obterFatorConversaoDistancia(unidadeDestino);

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

    case 3:

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem ((megabytes, gigabytes...): ");
    scanf("%s", unidadeOrigem);

    printf("Digite a unidade de destino ((megabytes, gigabytes...): ");
    scanf("%s", unidadeDestino);

    double fatorOrigembytes = obterFatorConversaoByte(unidadeOrigem);
    double fatorDestinobytes = obterFatorConversaoByte(unidadeDestino);

    // Verificar se as unidades são válidas
    if (fatorOrigem < 0 || fatorDestino < 0) {
        printf("Unidade desconhecida. Verifique as entradas e tente novamente.\n");
        return 1;
    }

    // Conversão
    double valorEmBytes = valor * fatorOrigembytes;
    double valorConvertidoBytes = valorEmBytes / fatorDestinobytes;

    // Exibir o resultado
    printf("%.4lf %s equivalem a %.4lf %s\n", valor, unidadeOrigem, valorConvertidoBytes, unidadeDestino);

    break;

   
   default:

   printf("unidade fora do escopo que pode ser analisado\n");
    break;
   }

    return 0;
}