#include <stdio.h> 

// Função para converter de Watts para quilowatts
float wattsParaQuilowatts(float watts) {
    return watts / 1000.0; // Divide o valor em Watts por 1000 para obter o equivalente em quilowatts
}

// Função para converter de quilowatts para cavalos-vapor
float quilowattsParaCV(float quilowatts) {
    return quilowatts * 1.34102; // Multiplica o valor em quilowatts pelo fator de conversão para cavalos-vapor
}

// Função para converter de cavalos-vapor para Watts
float cvParaWatts(float cv) {
    return cv * 735.49875; // Multiplica o valor em cavalos-vapor pelo fator de conversão para Watts
}

// Função principal
int main() {
    int opcao;             // Variável para armazenar a escolha do usuário
    float valor, resultado; // Variáveis para armazenar o valor de entrada e o resultado da conversão

    // Apresenta o menu inicial ao usuário
    printf("Conversor de Unidades de Energia\n");
    printf("Selecione a opcao desejada:\n");
    printf("1. Converter Watts para Quilowatts\n");
    printf("2. Converter Quilowatts para Cavalos-Vapor\n");
    printf("3. Converter Cavalos-Vapor para Watts\n");
    printf("Opcao: ");
    scanf("%d", &opcao); // Lê a opção escolhida pelo usuário

    // Executa a operação correspondente à escolha do usuário
    switch (opcao) {
        case 1: // Caso o usuário escolha converter Watts para quilowatts
            printf("Digite o valor em Watts: "); // Solicita o valor ao usuário
            scanf("%f", &valor); // Lê o valor em Watts
            resultado = wattsParaQuilowatts(valor); // Realiza a conversão
            printf("%.2f Watts equivalem a %.2f Quilowatts\n", valor, resultado); // Exibe o resultado
            break;
        case 2: // Caso o usuário escolha converter quilowatts para cavalos-vapor
            printf("Digite o valor em Quilowatts: "); // Solicita o valor ao usuário
            scanf("%f", &valor); // Lê o valor em quilowatts
            resultado = quilowattsParaCV(valor); // Realiza a conversão
            printf("%.2f Quilowatts equivalem a %.2f Cavalos-Vapor\n", valor, resultado); // Exibe o resultado
            break;
        case 3: // Caso o usuário escolha converter cavalos-vapor para Watts
            printf("Digite o valor em Cavalos-Vapor: "); // Solicita o valor ao usuário
            scanf("%f", &valor); // Lê o valor em cavalos-vapor
            resultado = cvParaWatts(valor); // Realiza a conversão
            printf("%.2f Cavalos-Vapor equivalem a %.2f Watts\n", valor, resultado); // Exibe o resultado
            break;
        default: // Caso o usuário insira uma opção inválida
            printf("Opcao invalida! Por favor, tente novamente.\n"); // Exibe uma mensagem de erro
            break;
    }

    return 0; // Encerra o programa com sucesso
}
