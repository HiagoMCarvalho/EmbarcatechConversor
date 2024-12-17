#include <stdio.h>
double obterFatorConversao(char unidade[]) {
    if (strcmp(unidade, "metro") == 0) return 1.0;
    if (strcmp(unidade, "centimetro") == 0) return 100.0;
    if (strcmp(unidade, "quilometro") == 0) return 0.001;
    if (strcmp(unidade, "milimetro") == 0) return 1000.0;
    if (strcmp(unidade, "milha") == 0) return 0.000621371;
    if (strcmp(unidade, "jarda") == 0) return 1.09361;
    if (strcmp(unidade, "pe") == 0) return 3.28084;
    if (strcmp(unidade, "polegada") == 0) return 39.3701;

    // Unidade desconhecida
    return -1.0;
}
int main()
{
   int unidade;

   printf("Digite o numero relacionado a unidade que deseja converter: \n");
   printf("1. distancia (metro, centimetro...)\n");
   printf("2. peso (gramas, kilogramas...)\n");
   printf("3. armazenamento (megabytes, gigabytes...)\n");
   scanf("%d", &unidade);

   switch (unidade)
   {
   case 1:
    double valor;
    char unidadeOrigem[20], unidadeDestino[20];

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