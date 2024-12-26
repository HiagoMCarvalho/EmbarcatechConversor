#include "./include/teste_conversor_tempo.h"
#include "teste_conversor_area.h"
#include "./include/teste_distancia.h"
#include "./include/teste_byte.h"
#include "./include/teste_volume.h"
#include "./include/teste_massa.h"
#include "./include/teste_temperatura.h"
#include "./include/teste_velocidade.h"
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

    //TESTES PARA DISTANCIA
    RUN_TEST(teste_distancia);

    //TESTES PARA DADOS
    RUN_TEST(teste_bytes);

    //TESTES PARA VOLUME
    RUN_TEST(teste_Litros_para_ml);
    RUN_TEST(teste_Litros_para_mcubico);

    //TESTES PARA MASSA
    RUN_TEST(teste_massa);

    //TESTE PARA TEMPERATURA
    RUN_TEST(teste_temperatura);

    //TESTE PARA VELOCIDADE
    RUN_TEST(teste_velocidade);



    return UNITY_END();
}

