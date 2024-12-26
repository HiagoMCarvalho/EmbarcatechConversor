#include "teste_distancia.h"
#include <string.h>

void teste_distancia(void) {
    TEST_ASSERT_EQUAL_DOUBLE(1.0, obterFatorConversaoDistancia("metro"));
    TEST_ASSERT_EQUAL_DOUBLE(0.001, obterFatorConversaoDistancia("quilometro"));
}