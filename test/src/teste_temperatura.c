#include "teste_temperatura.h"
#include <string.h>

void teste_temperatura(void) {
    TEST_ASSERT_EQUAL_DOUBLE(32, converterTemperatura(0, "Celsius", "Fahrenheit"));
    TEST_ASSERT_EQUAL_DOUBLE(273.15, converterTemperatura(0, "Celsius", "Kelvin"));
}