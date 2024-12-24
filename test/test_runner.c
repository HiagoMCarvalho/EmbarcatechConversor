#include "./include/teste_conversor_tempo.h"
#include "teste_conversor_area.h"
#include "./unity/unity.h"

int main(void) {
    UNITY_BEGIN();

    // TESTES PARA TEMPO
    RUN_TEST(teste_segundos_para_minutos);
    RUN_TEST(teste_segundos_para_horas);
    RUN_TEST(teste_minutos_para_segundos);
    RUN_TEST(teste_minutos_para_horas);
    RUN_TEST(teste_horas_para_segundos);
    RUN_TEST(teste_horas_para_segundos);

    // TESTES PARA AREA
    RUN_TEST(teste_centimetrosQ_para_metrosQ);
    RUN_TEST(teste_metrosQ_para_centimetrosQ);
    RUN_TEST(teste_metrosQ_para_quilometrosQ);
    RUN_TEST(teste_quilometrosQ_para_centimetrosQ);
    RUN_TEST(teste_quilometrosQ_para_metrosQ);

    return UNITY_END();
}

