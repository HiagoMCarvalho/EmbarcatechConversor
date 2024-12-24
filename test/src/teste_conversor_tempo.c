#include "teste_conversor_tempo.h"

#define DELTA 0.005000  // Definindo a margem de erro aceitável

void setUp(void) {
}

void tearDown(void) {
}

// Testes para Conversão de Tempo 
void teste_segundos_para_minutos(void) {
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.166667, converter_segundos_para_minutos(10.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.283333, converter_segundos_para_minutos(17.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.716667, converter_segundos_para_minutos(43.0));
}

void teste_segundos_para_horas(void) {
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.006388888, converter_segundos_para_horas(23.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.009444, converter_segundos_para_horas(34.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.177778, converter_segundos_para_horas(640.0));
}

void teste_minutos_para_segundos(void) {
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 3300.000000, converter_minutos_para_segundos(55.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 420.000000, converter_minutos_para_segundos(7.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 1920.000000, converter_minutos_para_segundos(32.0));
}

void teste_minutos_para_horas(void) {
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 1.450000, converter_minutos_para_horas(87.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.700000, converter_minutos_para_horas(42.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 4.166667, converter_minutos_para_horas(250.0));
}

void teste_horas_para_segundos(void) {
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 18000.000000, converter_horas_para_segundos(5.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 9000.000000, converter_horas_para_segundos(2.5));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 26280.000000, converter_horas_para_segundos(7.3));
}

void teste_horas_para_minutos(void) {
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 510.000000, converter_horas_para_minutos(8.5));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 672.000000, converter_horas_para_minutos(11.2));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 240.000000, converter_horas_para_minutos(4.0));
}