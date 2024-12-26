#include "teste_volume.h"
#define DELTA 0.005000

int teste_Litros_para_ml(void)
{
    TEST_ASSERT_INT_WITHIN(DELTA, 1000, Litros_para_ml(1));
    TEST_ASSERT_INT_WITHIN(DELTA, 10000, Litros_para_ml(10));
}

double teste_Litros_para_mcubico(void)
{
    TEST_ASSERT_EQUAL_DOUBLE(1, Litros_para_mcubico(1000));
    TEST_ASSERT_EQUAL_DOUBLE(10, Litros_para_mcubico(10000));
}