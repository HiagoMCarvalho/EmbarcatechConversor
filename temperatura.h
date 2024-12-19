#include <string.h>

double converterTemperatura(double valor, char origem[], char destino[]);
double converterTemperatura(double valor, char origem[], char destino[]) {
    if (strcmp(origem, "Celsius") == 0) {
        if (strcmp(destino, "Fahrenheit") == 0) return valor * 9.0 / 5.0 + 32.0;
        if (strcmp(destino, "Kelvin") == 0) return valor + 273.15;
    } else if (strcmp(origem, "Fahrenheit") == 0) {
        if (strcmp(destino, "Celsius") == 0) return (valor - 32.0) * 5.0 / 9.0;
        if (strcmp(destino, "Kelvin") == 0) return (valor - 32.0) * 5.0 / 9.0 + 273.15;
    } else if (strcmp(origem, "Kelvin") == 0) {
        if (strcmp(destino, "Celsius") == 0) return valor - 273.15;
        if (strcmp(destino, "Fahrenheit") == 0) return (valor - 273.15) * 9.0 / 5.0 + 32.0;
    }
    return -1.0;
}