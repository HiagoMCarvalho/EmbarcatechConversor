#include <stdio.h>
#include <string.h>
#include "distancia.h"
#include "massa.h"
#include "bytes.h"
#include "temperatura.h"
#include "velocidade.h"


int main()
{
   int unidade;
   double valor;
   char unidadeOrigem[20], unidadeDestino[20];

   printf("Digite o numero relacionado a unidade que deseja converter: \n");
   printf("1. distancia (metro, centimetro...)\n");
   printf("2. peso (gramas, kilogramas...)\n");
   printf("3. armazenamento (megabytes, gigabytes...)\n");
   printf("4. temperatura (Celsius, Fahrenheit, Kelvin)\n");
   printf("5. velocidade (km/h, m/s, mph)\n\n");
   scanf("%d", &unidade);

   switch (unidade){

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

    case 2:

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (quilograma, grama, miligrama ou tonelada): ");
    scanf("%s", unidadeOrigem);

    printf("Digite a unidade de destino (quilograma, grama, miligrama ou tonelada): ");
    scanf("%s", unidadeDestino);

    //Conversão
    double fatorOrigemMassa = obterFatorConversaoMassa(unidadeOrigem);
    double fatorDestinoMassa = obterFatorConversaoMassa(unidadeDestino);


    if (fatorOrigemMassa < 0 || fatorDestinoMassa < 0) //Condicional para verificar as unidades
    {
        printf("Erro, unidade inválida!");
        return 1;       
    }

        //Declarar valor para conversão
        double valorQuilograma = valor * fatorOrigemMassa;
        double valorConvertidoMassa = valorQuilograma / fatorDestinoMassa;

        //Valor convertido
        printf("%1.lf %s é igual a %1.lf %s\n", valor, fatorOrigemMassa, valorConvertidoMassa, fatorDestinoMassa);
    
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

    case 4:

        printf("Digite o valor a ser convertido: ");
        scanf("%lf", &valor);

        printf("Digite a unidade de origem (Celsius, Fahrenheit, Kelvin): ");
        scanf("%s", unidadeOrigem);

        printf("Digite a unidade de destino (Celsius, Fahrenheit, Kelvin): ");
        scanf("%s", unidadeDestino);

        double valorConvertidoTemp = converterTemperatura(valor, unidadeOrigem, unidadeDestino);

        if (valorConvertidoTemp < 0) {
            printf("Unidade desconhecida. Verifique as entradas e tente novamente.\n");
            return 1;
        }
        printf("%.4lf %s equivalem a %.4lf %s\n", valor, unidadeOrigem, valorConvertidoTemp, unidadeDestino);
        break;

    case 5:
        printf("Digite o valor a ser convertido: ");
        scanf("%lf", &valor);

        printf("Digite a unidade de origem (km/h, m/s, mph): ");
        scanf("%s", unidadeOrigem);

        printf("Digite a unidade de destino (km/h, m/s, mph): ");
        scanf("%s", unidadeDestino);

        double fatorVelocidadeOrigem = obterFatorVelocidade(unidadeOrigem);
        double fatorVelocidadeDestino = obterFatorVelocidade(unidadeDestino);

        if (fatorVelocidadeOrigem < 0 || fatorVelocidadeDestino < 0) {
            printf("Unidade desconhecida. Verifique as entradas e tente novamente.\n");
            return 1;
        }

        double valorConvertidoVel = (valor / fatorVelocidadeOrigem) * fatorVelocidadeDestino;

        printf("%.4lf %s equivalem a %.4lf %s\n", valor, unidadeOrigem, valorConvertidoVel, unidadeDestino);
        break;
        
    default:
        printf("unidade fora do escopo que pode ser analisado\n");
    }
    return 0;
}