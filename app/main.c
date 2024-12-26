
#include <stdio.h>
#include <string.h>
#include "./include/distancia.h"
#include "./include/massa.h"
#include "./include/bytes.h"
#include "./include/temperatura.h"
#include "./include/velocidade.h"
#include "./include/conversor_area.h"
#include "./include/conversor_tempo.h"
#include "./include/frequencia.h" 



void interface_tempo(float valor);
void interface_area(float valor);

int main()
{
    int unidade;
    double valor;
    char unidadeOrigem[20], unidadeDestino[20];

    //Seleção da conversao
    printf("Digite o numero relacionado a unidade que deseja converter: \n");
    printf("[1] - DISTANCIA\n");
    printf("[2] - PESO\n");
    printf("[3] - DADOS\n");
    printf("[4] - TEMPERATURA\n");
    printf("[5] - VELOCIDADE\n");
    printf("[6] - TEMPO\n");
    printf("[7] - AREA\n");
    printf("[8] - FREQUENCIA\n");
  

    printf("OPCAO: ");
    scanf("%d", &unidade);

   switch (unidade){

    case 1:
   
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (metro, centimetro, quilometro,milimetro, milha, jarda, pe): ");
    scanf("%s", unidadeOrigem);

    printf("Digite a unidade de destino (metro, centimetro, quilometro,milimetro, milha, jarda, pe): ");
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
        
        double valorConvertidoMassa = valor * (fatorDestinoMassa / fatorOrigemMassa);

        //Valor convertido
        printf("%.2lf %s eh igual a %lf %s \n", valor, unidadeOrigem, valorConvertidoMassa, unidadeDestino);
    
    break;

    case 3:

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (megabyte, gigabyte, terabyte, kilobyte, byte, bit): ");
    scanf("%s", unidadeOrigem);

    printf("Digite a unidade de destino (megabyte, gigabyte, terabyte, kilobyte, byte, bit): ");
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

    case 8: {
    
    int uniOrig =0, uniDest =0;
     
    printf("Programa Conversor de Frequencia\n");
    printf("Escolha a unidade de origem:\n");
    printf("1  Hz\n");
    printf("2  Khz\n");
    printf("3  Mhz\n");
    printf("4. GHz\n"); 
    printf("5. THz\n");
    printf("Digite a opcao: ");
    scanf("%d", &uniOrig);

    printf("Escolha a unidade de destino:\n");
    printf("1. Hz\n"); 
    printf("2. kHz\n"); 
    printf("3. MHz\n"); 
    printf("4. GHz\n"); 
    printf("5. THz\n");
    printf("Digite a opcao: ");
    scanf("%d", &uniDest);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch(uniOrig) {
        case 1: // Hz
            if (uniDest == 2) {
                printf("%.2lf Hz e igual a %.2lf kHz\n", valor, HzToKHz(valor));
            } else if (uniDest == 3) {
                printf("%.2lf Hz e igual a %.2lf MHz\n", valor, HzToMHz(valor));
            } else {
                printf("Unidade de destino invalida!\n");
            }
            break;
        case 2: // kHz
            if (uniDest == 1) {
                printf("%.2lf kHz e igual a %.2lf Hz\n", valor, KHzToHz(valor));
            } else if (uniDest == 3) {
                printf("%.2lf kHz e igual a %.2lf MHz\n", valor, KHzToMHz(valor));
            } else {
                printf("Unidade de destino invalida!\n");
            }
            break;
        case 3: // MHz
            if (uniDest == 1) {
                printf("%.2lf MHz e igual a %.2lf Hz\n", valor, MHzToHz(valor));
            } else if (uniDest == 2) {
                printf("%.2lf MHz e igual a %.2lf kHz\n", valor, MHzToKHz(valor));
            } else {
                printf("Unidade de destino invalida!\n");
            }
            break;
             case 4: // GHz 
             if (uniDest == 1) {
                printf("%.2lf GHz e igual a %.2lf Hz\n", valor, 
                GHzToHz(valor)); 
             } else if (uniDest == 2) { 
                printf("%.2lf GHz e igual a %.2lf kHz\n", valor, 
                GHzToKHz(valor)); 
             } else if (uniDest == 3) { 
               printf("%.2lf GHz e igual a %.2lf MHz\n", valor, 
               GHzToMHz(valor)); 
             } else if (uniDest == 5) {
               printf("%.2lf GHz e igual a %.2lf THz\n", valor, 
               GHzToTHz(valor)); 
             } else { printf("Unidade de destino invalida!\n"); } 
             break;

             case 5: // THz 
             if (uniDest == 1) { 
                printf("%.2lf THz e igual a %.2lf Hz\n", valor, 
                THzToHz(valor)); 
             } else if (uniDest == 2) { 
                printf("%.2lf THz e igual a %.2lf kHz\n", valor, 
                THzToKHz(valor)); 
             } else if (uniDest == 3) { 
                printf("%.2lf THz e igual a %.2lf MHz\n", valor, 
                THzToMHz(valor));
             } else if (uniDest == 4) { 
                printf("%.2lf THz e igual a %.2lf GHz\n", valor, 
                THzToGHz(valor));
             } else { printf("Unidade de destino invalida!\n"); } 
             break;
        
        default:
            printf("Unidade de origem invalida!\n");
    }

  

        
    break;
    }

case 9: {

int Litros_para_ml(int litros){
    return litros * 1000;
}
double Litros_para_mcubico(int litros){
    return litros / 1000.0;
}

    char unidade[20];
    int litros;

    printf("Digite a unidade para conversao (mililitros ou mcubico): ");
    scanf("%s", unidade);

    // verificar qual unidade foi escolhida e realizar a conversão
    if (strcmp(unidade, "mililitros") == 0) {
        printf("Digite a quantidade de litros: ");
        scanf("%d", &litros);
        printf("%d litros em mililitros: %d\n", litros, Litros_para_ml(litros));
    } 
    else if (strcmp(unidade, "mcubico") == 0) {
        printf("Digite a quantidade de litros: ");
        scanf("%d", &litros);
        printf("%d litros em metros cubicos: %lf\n", litros, Litros_para_mcubico(litros));
    } 
    else {
        printf("Unidade invalida. Por favor, insira 'mililitros' ou 'mcubico'.\n");
        return 1;
    }
}

    return 0;
    break;
    
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
