#include <string.h>

double obterFatorConversaoMassa(char unidade[]);

double obterFatorConversaoMassa(char unidade[])
//Valores com padrão de quilograma
{
    if (strcmp(unidade, "quilograma") == 0)
        return 1;

    if (strcmp(unidade, "grama") == 0)
        return 1000;

    if (strcmp(unidade, "miligrama") == 0)
        return 1000000;

    if (strcmp(unidade, "tonelada") == 0)
        return 1000;

    return 0;
}
