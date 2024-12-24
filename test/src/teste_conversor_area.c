#include "teste_conversor_area.h"

#define DELTA 0.0051  // Definindo a margem de erro aceitável

void teste_centimetrosQ_para_metrosQ(void) {
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.0001, converter_centimetrosQ_para_metrosQ(1.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 1.0, converter_centimetrosQ_para_metrosQ(10000.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 5.0, converter_centimetrosQ_para_metrosQ(50000.0));
}

void teste_centimetrosQ_para_quilometrosQ(void) {
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.000001, converter_centimetrosQ_para_quilometrosQ(10000.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.05, converter_centimetrosQ_para_quilometrosQ(500000000.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.0005, converter_centimetrosQ_para_quilometrosQ(500000.0));
}

void teste_metrosQ_para_centimetrosQ(void) {
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 10000.0, converter_metrosQ_para_centimetrosQ(1.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 50000.0, converter_metrosQ_para_centimetrosQ(5.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 250000.0, converter_metrosQ_para_centimetrosQ(25.0));
}

void teste_metrosQ_para_quilometrosQ(void) {
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.000001, converter_metrosQ_para_quilometrosQ(1.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.005, converter_metrosQ_para_quilometrosQ(5000.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 0.25, converter_metrosQ_para_quilometrosQ(250000.0));
}

void teste_quilometrosQ_para_centimetrosQ(void) {
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 1000000000.0, converter_quilometrosQ_para_centimetrosQ(1.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 5000000000.0, converter_quilometrosQ_para_centimetrosQ(5.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 25000000000.0, converter_quilometrosQ_para_centimetrosQ(25.0));
}

void teste_quilometrosQ_para_metrosQ(void) {
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 1000000.0, converter_quilometrosQ_para_metrosQ(1.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 5000000.0, converter_quilometrosQ_para_metrosQ(5.0));
    TEST_ASSERT_FLOAT_WITHIN(DELTA, 25000000.0, converter_quilometrosQ_para_metrosQ(25.0));
}