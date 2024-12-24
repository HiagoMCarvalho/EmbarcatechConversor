#include "../include/conversor_area.h"

float converter_centimetrosQ_para_metrosQ(float centimentrosQ) {
    return centimentrosQ / 10000.0;
}

float converter_centimetrosQ_para_quilometrosQ(float centimetrosQ) {
    return centimetrosQ / 1000000000.0;
}

float converter_metrosQ_para_centimetrosQ(float metrosQ) {
    return metrosQ * 10000.0;
}

float converter_metrosQ_para_quilometrosQ(float metrosQ) {
    return metrosQ / 1000000.0;
}

float converter_quilometrosQ_para_centimetrosQ(float quilometrosQ) {
    return quilometrosQ * 1000000000.0;
}

float converter_quilometrosQ_para_metrosQ(float quilometrosQ) {
    return quilometrosQ * 1000000.0;
}