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

    return 0;
}
