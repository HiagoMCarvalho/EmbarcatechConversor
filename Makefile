# Variáveis gerais
CC = gcc
CFLAGS = -Wall -Wextra -Iapp/include -Itest/include -Itest/unity -DUNITY_INCLUDE_DOUBLE
BUILD_DIR = build
BIN_DIR = $(BUILD_DIR)\bin
OBJ_DIR = $(BUILD_DIR)\obj

# Fontes e binários
APP_SRC = $(filter-out app/main.c, $(wildcard app/src/*.c))
APP_OBJ = $(APP_SRC:app/src/%.c=$(OBJ_DIR)\app_%.o)
APP_BIN = $(BIN_DIR)\main.exe

TEST_SRC = $(wildcard test/src/*.c)
TEST_OBJ = $(TEST_SRC:test/src/%.c=$(OBJ_DIR)\test_%.o) $(OBJ_DIR)\unity.o $(OBJ_DIR)\test_runner.o $(APP_OBJ)
TEST_BIN = $(BIN_DIR)\test_runner.exe

run_test: $(TEST_BIN)
	$(TEST_BIN)

run_main: $(APP_BIN)
	$(APP_BIN)

# Alvos padrão
all: build_main build_tests

# Compilação do programa principal
build_main: $(APP_BIN)

$(APP_BIN): $(APP_OBJ) $(OBJ_DIR)\main.o
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)\app_%.o: app/src/%.c
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)\main.o: app/main.c
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Compilação do programa de testes
build_tests: $(TEST_BIN)

$(TEST_BIN): $(TEST_OBJ)
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)\test_%.o: test/src/%.c
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)\unity.o: test/unity/unity.c
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)\test_runner.o: test/test_runner.c
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza de arquivos gerados
clean:
	@if exist $(BUILD_DIR) rmdir /s /q $(BUILD_DIR)

# PHONY targets
.PHONY: all build_main build_tests clean