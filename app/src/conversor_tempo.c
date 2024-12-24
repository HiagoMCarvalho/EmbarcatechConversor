#include "../include/conversor_tempo.h"


float converter_segundos_para_minutos(float segundos) {
    return segundos / 60.0;
}

float converter_segundos_para_horas(float segundos) {
    return segundos / 3600.0;
}

float converter_minutos_para_segundos(float minutos) {
    return minutos * 60.0;
}

float converter_minutos_para_horas(float minutos) {
    return minutos / 60.0;
}

float converter_horas_para_segundos(float horas) {
    return horas * 3600.0;
}

float converter_horas_para_minutos(float horas) {
    return horas * 60.0;
}