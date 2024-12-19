#include <string.h>

double obterFatorVelocidade(char unidade[]);

double obterFatorVelocidade(char unidade[]) {
    if (strcmp(unidade, "km/h") == 0) return 1.0;
    if (strcmp(unidade, "m/s") == 0) return 0.277778;
    if (strcmp(unidade, "mph") == 0) return 0.621371;
    return -1.0;
}