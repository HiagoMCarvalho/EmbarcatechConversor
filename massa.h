#include <string.h>

double obterFatorConversaoMassa(char unidade[]);

double obterFatorConversaoMassa(char unidade[])
{
    if (strcmp(unidade, "quilograma") == 0)
        return 1.0;

    if (strcmp(unidade, "grama") == 0)
        return 1000.0;

    if (strcmp(unidade, "miligrama") == 0)
        return 1000000.0;

    if (strcmp(unidade, "tonelada") == 0)
        return 0.000001;

    double converterMassa(double valor, char origem[], char destino[]){
        double fatorOrigem = obterFatorConversaoMassa(origem);
        double fatorDestino = obterFatorConversaoMassa(destino);

        if (fatorOrigem == 0 || fatorDestino == 0)
        {
            return -1;
        }

        return valor * (fatorOrigem / fatorDestino);
    }

    return 0;
}
