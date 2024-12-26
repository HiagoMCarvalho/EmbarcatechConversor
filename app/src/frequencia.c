#include "../include/frequencia.h"

// funções para conversão de frequências
double HzToKHz(double hz) {
    return hz / 1000.0;
}

double HzToMHz(double hz) {
    return hz / 1000000.0;
}

double HzToGHz(double hz) {
    return hz / 1000000000.0;
}

double HzToTHz(double hz) {
    return hz / 1000000000000.0;
}

double KHzToHz(double khz) {
    return khz * 1000.0;
}

double KHzToMHz(double khz) {
    return khz / 1000.0;
}

double KHzToGHz(double khz) {
    return khz / 1000000.0;
}

double KHzToTHz(double khz) {
    return khz / 1000000000.0;
}

double MHzToHz(double mhz) {
    return mhz * 1000000.0;
}

double MHzToKHz(double mhz) {
    return mhz * 1000.0;
}

double MHzToGHz(double mhz) {
    return mhz / 1000.0;
}

double MHzToTHz(double mhz) {
    return mhz / 1000000.0;
}

double GHzToHz(double ghz) {
    return ghz * 1000000000.0;
}

double GHzToKHz(double ghz) {
    return ghz * 1000000.0;
}

double GHzToMHz(double ghz) {
    return ghz * 1000.0;
}

double GHzToTHz(double ghz) {
    return ghz / 1000.0;
}

double THzToHz(double thz) {
    return thz * 1000000000000.0;
}

double THzToKHz(double thz) {
    return thz * 1000000000.0;
}

double THzToMHz(double thz) {
    return thz * 1000000.0;
}

double THzToGHz(double thz) {
    return thz * 1000.0;
}
