#include <stdio.h> // Biblioteca padrão de entrada e saída, usada para printf e scanf

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

