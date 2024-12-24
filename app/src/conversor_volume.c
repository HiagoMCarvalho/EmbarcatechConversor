#include <stdio.h>
#include <string.h>
#include "conversor_volume.h"

int Litros_para_ml(int litros){
    return litros * 1000;
}
double Litros_para_mcubico(int litros){
    return litros / 1000.0;
}

