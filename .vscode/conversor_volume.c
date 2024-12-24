#include <stdio.h>
#include <string.h>

int Litros_para_ml(int litros){
    return litros * 1000;
}
double Litros_para_mcubico(int litros){
    return litros / 1000.0;
}

double main() {
    char unidade[20];
    int litros;

    printf("Digite a unidade para conversao (mililitros ou mcubico): ");
    scanf("%s", unidade);

    // verificar qual unidade foi escolhida e realizar a conversão
    if (strcmp(unidade, "mililitros") == 0) {
        printf("Digite a quantidade de litros: ");
        scanf("%d", &litros);
        printf("%d litros em mililitros: %d\n", litros, Litros_para_ml(litros));
    } 
    else if (strcmp(unidade, "mcubico") == 0) {
        printf("Digite a quantidade de litros: ");
        scanf("%d", &litros);
        printf("%d litros em metros cubicos: %lf\n", litros, Litros_para_mcubico(litros));
    } 
    else {
        printf("Unidade invalida. Por favor, insira 'mililitros' ou 'mcubico'.\n");
        return 1;
    }

    return 0;
}
