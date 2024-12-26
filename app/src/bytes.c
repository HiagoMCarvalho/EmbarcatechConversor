#include <string.h>
#include "../include/bytes.h"

double obterFatorConversaoByte(char unidade[]) {
    if (strcmp(unidade, "byte") == 0) return 1.0;
    if (strcmp(unidade, "bit") == 0) return 1.0 / 8.0; // 1 byte = 8 bits
    if (strcmp(unidade, "kilobyte") == 0) return 1024.0;
    if (strcmp(unidade, "megabyte") == 0) return 1024.0 * 1024.0;
    if (strcmp(unidade, "gigabyte") == 0) return 1024.0 * 1024.0 * 1024.0;
    if (strcmp(unidade, "terabyte") == 0) return 1024.0 * 1024.0 * 1024.0 * 1024.0;

    // Unidade desconhecida
    return -1.0;
}