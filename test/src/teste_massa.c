#include "teste_massa.h"
#include <string.h>

void teste_massa(void) {
    TEST_ASSERT_EQUAL_DOUBLE(1000, obterFatorConversaoMassa("grama"));
    TEST_ASSERT_EQUAL_DOUBLE(1, obterFatorConversaoMassa("quilograma"));
}