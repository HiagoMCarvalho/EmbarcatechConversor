#include <string.h>

double obterFatorConversaoDistancia(double valor, char unidade[]);

double obterFatorConversaoMassa(char unidade[])
{
if (strcmp(unidade, "quilograma") == 0) return 1.0;

if(strcmp(unidade, "grama") == 0) return 1000;

if (strcmp(unidade, "miligrama")) return 1000000;

if (strcmp(unidade, "tonelada")) return /*valor*/ 1000000;

    return 0;
}

