# EmbarcatechConversor

## Descrição
O **EmbarcatechConversor** é um software projetado para realizar conversões de diversas unidades de medida, incluindo temperatura, distância, velocidade, energia e manipulação de bytes. É um projeto educacional que visa demonstrar o uso de funções modulares em C para resolver problemas comuns no dia a dia.

## Funcionalidades
- Conversões de temperatura (Celsius, Fahrenheit, Kelvin).
- Conversões de distância (metros, quilômetros, milhas).
- Conversões de velocidade (m/s, km/h, mph).
- Conversões de energia (joules, calorias, kilowatts-hora).
- Manipulação de bytes para análises de sistemas.
- Conversão de Tempo (Segundos, Minutos e Horas).
- Conversão de Área (Centimetros², Metros² e Quilometros²).

## Estrutura do Projeto
- `app`: Pasta principal que contém os seguintes arquivos:
   - `include`: Pasta com os cabeçalhos das conversões (arquivos .h).
   - `src`: Pasta com os arquivos de conversão (arquivos .c).
   - `main.c`: Arquivo principal do projeto, onde as funções são importadas e utilizadas.
- `test`: Pasta reservada para testes, onde contém os seguintes arquivos:
   - `include`: Pasta com os cabeçalhos dos testes (arquivos .h).
   - `src`: Pasta com os arquivos de testes (arquivos .c).
   - `unity`: Pasta reservada para o framework de testes unitários 'Unity'.
   - `test_runner.c`: Arquivo principal para a realização da cadeia de testes unitários.
- `Makefile`: Arquivo configurado para compilar e executar os binários em ambiente Windows.

## Como Usar
**Primeiro Passo:**
Verifique se em seu ambiente constam o *Compilador gcc* e a ferramenta de automação de construção *Make*.
   ``` bash
   gcc --version
   ```
   ``` bash
   make --version
   ```
**Segundo Passo:**
Estando na pasta raiz do projeto, execute os comandos *make* com base em sua necessidade:
- Compilar e executar o programa:
   ``` bash
   make run_main
   ```
- Compilar e executar os testes unitários:
   ``` bash
   make run_test
   ```
- Apenas compilar o programa:
   ``` bash
   make build_main
   ```
- Apenas compilar os testes unitários:
   ``` bash
   make build_tests
   ```
- Limpar os arquivos temporários (.exe e .o):
   ``` bash
   make clean
   ```

## Exemplos de Uso
Durante a execução, o programa solicita que o usuário escolha o tipo de conversão desejada e os valores a serem convertidos.

Exemplo:
- Escolha: Temperatura
- Entrada: 100 (Celsius)
- Saída: 212 (Fahrenheit)

## Requisitos
- Sistema operacional com suporte a compilação C (Windows, Linux, macOS).
- Compilador C (como GCC).

## Licença
Este projeto está licenciado sob a MIT License. Consulte o arquivo `LICENSE` para mais detalhes.

## Contato
Para dúvidas ou sugestões, entre em contato pelo email: hiago.moura7@gmail.com.

