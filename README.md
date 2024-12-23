# EmbarcatechConversor

## Descrição
O **EmbarcatechConversor** é um software projetado para realizar conversões de diversas unidades de medida, incluindo temperatura, distância, velocidade, energia e manipulação de bytes. É um projeto educacional que visa demonstrar o uso de funções modulares em C para resolver problemas comuns no dia a dia.

## Funcionalidades
- Conversões de temperatura (Celsius, Fahrenheit, Kelvin).
- Conversões de distância (metros, quilômetros, milhas).
- Conversões de velocidade (m/s, km/h, mph).
- Conversões de energia (joules, calorias, kilowatts-hora).
- Manipulação de bytes para análises de sistemas.

## Estrutura do Projeto
- `conversor.c`: Arquivo principal que implementa a lógica do programa.
- `bytes.h`: Header para manipulação de bytes.
- `distancia.h`: Header para conversões de distância.
- `energia_converter.h`: Header para conversões de energia.
- `temperatura.h`: Header para conversões de temperatura.
- `velocidade.h`: Header para conversões de velocidade.
- `.vscode/settings.json`: Configurações do editor de texto Visual Studio Code.
- `.vscode/tasks.json`: Tarefas configuradas para compilação no Visual Studio Code.

## Como Usar
1. **Compilar o projeto:**
   Utilize um compilador C (como `gcc`) para compilar o arquivo principal:
   ```bash
   gcc -o conversor conversor.c
   ```
2. **Executar o programa:**
   No terminal, rode o executável gerado:
   ```bash
   ./conversor
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

