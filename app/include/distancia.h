#include <string.h> 

double obterFatorConversaoDistancia(char unidade[]);

double obterFatorConversaoDistancia(char unidade[]) {
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