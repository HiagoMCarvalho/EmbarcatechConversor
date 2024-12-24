#include <stdio.h>
#include <string.h>
#include "./include/distancia.h"
#include "./include/massa.h"
#include "./include/bytes.h"
#include "./include/temperatura.h"
#include "./include/velocidade.h"
#include "conversor_area.h"
#include "conversor_tempo.h"


void interface_tempo(float valor);
void interface_area(float valor);

int main()
{
    int unidade;
    double valor;
    char unidadeOrigem[20], unidadeDestino[20];

    printf("Digite o numero relacionado a unidade que deseja converter: \n");
    printf("[1] - DISTANCIA\n");
    printf("[2] - PESO\n");
    printf("[3] - DADOS\n");
    printf("[4] - TEMPERATURA\n");
    printf("[5] - VELOCIDADE\n");
    printf("[6] - TEMPO\n");
    printf("[7] - AREA\n");

    printf("OPCAO: ");
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


    if (fatorOrigemMassa <= 0 || fatorDestinoMassa <= 0) //Condicional para verificar as unidades
    {
        printf("Erro, unidade inválida!");
        return 1;       
    }

        //Declarar valor para conversão
        
        double valorConvertidoMassa = valor * (fatorOrigemMassa / fatorDestinoMassa);

        //Valor convertido
        printf("%.2lf %s é igual a %lf %s \n", valor, unidadeOrigem, valorConvertidoMassa, unidadeDestino);
    
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
    
    case 6: {
        float valor = 0.0;
        printf("Digite o valor a ser Convertido: ");
        scanf("%f", &valor);
        interface_tempo(valor);
        break;
    }

    case 7: {
        float valor = 0.0;
        printf("Digite o valor a ser Convertido: ");
        scanf("%f", &valor);
        interface_area(valor);
        break;
    }

    default:
        printf("unidade fora do escopo que pode ser analisado\n");
    }

    return 0;
}


void interface_tempo(float valor) {
    if(valor < 0) {
        printf("Valor de Tempo Invalido\n");
    } else {
        int unidadeInicial = 0, unidadeFinal = 0;

        printf("Qual a Unidade Inicial?\n");
        printf("[1]-Segundos [2]-Minutos [3]-Horas\n");
        printf("OPCAO: ");
        scanf("%d", &unidadeInicial);

        printf("Qual a Unidade Final?\n");
        printf("[1]-Segundos [2]-Minutos [3]-Horas\n");
        printf("OPCAO: ");
        scanf("%d", &unidadeFinal);
        
        if (
            unidadeInicial < 1 || 
            unidadeInicial > 3 ||
            unidadeFinal < 1 ||
            unidadeFinal > 3 ||
            unidadeFinal == unidadeInicial
        ) { printf("Unidade Invalida\n"); }
        else {
            if(unidadeInicial == 1 && unidadeFinal == 2) {valor = converter_segundos_para_minutos(valor);}
            if(unidadeInicial == 1 && unidadeFinal == 3) {valor = converter_segundos_para_horas(valor);}
            if(unidadeInicial == 2 && unidadeFinal == 1) {valor = converter_minutos_para_segundos(valor);}
            if(unidadeInicial == 2 && unidadeFinal == 3) {valor = converter_minutos_para_horas(valor);}
            if(unidadeInicial == 3 && unidadeFinal == 1) {valor = converter_horas_para_segundos(valor);}
            if(unidadeInicial == 3 && unidadeFinal == 2) {valor = converter_horas_para_minutos(valor);}

            printf("Valor Convertido: %.2f\n", valor);
        }
    }
}

void interface_area(float valor) {
    if(valor < 0) {
        printf("Valor de Area Invalido\n");
    } else {
        int unidadeInicial = 0, unidadeFinal = 0;

        printf("Qual a Unidade Inicial?\n");
        printf("[1]-CentimetrosQuad. [2]-MetrosQuad. [3]-QuilometrosQuad.\n");
        printf("OPCAO: ");
        scanf("%d", &unidadeInicial);

        printf("Qual a Unidade Final?\n");
        printf("[1]-CentimetrosQuad. [2]-MetrosQuad. [3]-QuilometrosQuad.\n");
        printf("OPCAO: ");
        scanf("%d", &unidadeFinal);
        
        if (
            unidadeInicial < 1 || 
            unidadeInicial > 3 ||
            unidadeFinal < 1 ||
            unidadeFinal > 3 ||
            unidadeFinal == unidadeInicial
        ) { printf("Unidade Invalida\n"); }
        else {
            if(unidadeInicial == 1 && unidadeFinal == 2) {valor = converter_centimetrosQ_para_metrosQ(valor);}
            if(unidadeInicial == 1 && unidadeFinal == 3) {valor = converter_centimetrosQ_para_quilometrosQ(valor);}
            if(unidadeInicial == 2 && unidadeFinal == 1) {valor = converter_metrosQ_para_centimetrosQ(valor);}
            if(unidadeInicial == 2 && unidadeFinal == 3) {valor = converter_metrosQ_para_quilometrosQ(valor);}
            if(unidadeInicial == 3 && unidadeFinal == 1) {valor = converter_quilometrosQ_para_centimetrosQ(valor);}
            if(unidadeInicial == 3 && unidadeFinal == 2) {valor = converter_quilometrosQ_para_metrosQ(valor);}

            printf("Valor Convertido: %.2f\n", valor);
        }
    }
}