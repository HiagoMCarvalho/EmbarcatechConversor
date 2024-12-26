#include "teste_byte.h"
#include <string.h>

void teste_bytes(void) {
    TEST_ASSERT_EQUAL_DOUBLE(1.0, obterFatorConversaoByte("byte"));
    TEST_ASSERT_EQUAL_DOUBLE(0.125, obterFatorConversaoByte("bit"));
}