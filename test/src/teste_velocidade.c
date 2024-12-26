#include "teste_velocidade.h"
#include <string.h>

void teste_velocidade(void) {
    TEST_ASSERT_EQUAL_DOUBLE(1, obterFatorVelocidade("km/h"));
    TEST_ASSERT_EQUAL_DOUBLE(0.277778, obterFatorVelocidade("m/s"));
}