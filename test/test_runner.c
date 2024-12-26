#include "./include/teste_conversor_tempo.h"
#include "teste_conversor_area.h"
#include "./unity/unity.h"
#include "../include/test_frequencia.h"


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

    // TEST PARA FREQUENCIA
     RUN_TEST(test_HzToKHz); 
     RUN_TEST(test_HzToMHz); 
     RUN_TEST(test_HzToGHz); 
     RUN_TEST(test_HzToTHz); 

     RUN_TEST(test_KHzToHz); 
     RUN_TEST(test_KHzToMHz);
     RUN_TEST(test_KHzToGHz);
     RUN_TEST(test_KHzToTHz);

     RUN_TEST(test_MHzToHz);
     RUN_TEST(test_MHzToKHz);
     RUN_TEST(test_MHzToGHz);
     RUN_TEST(test_MHzToTHz);

     RUN_TEST(test_GHzToHz);
     RUN_TEST(test_GHzToKHz);
     RUN_TEST(test_GHzToMHz);
     RUN_TEST(test_GHzToTHz);

     RUN_TEST(test_THzToHz);
     RUN_TEST(test_THzToKHz);
     RUN_TEST(test_THzToMHz);
     RUN_TEST(test_THzToGHz);

    return UNITY_END();
}

