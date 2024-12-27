# Variáveis gerais
CC = gcc
CFLAGS = -Wall -Wextra -Iapp/include -Itest/include -Itest/unity -DUNITY_INCLUDE_DOUBLE -g
BUILD_DIR = build
BIN_DIR = $(BUILD_DIR)/bin
OBJ_DIR = $(BUILD_DIR)/obj

# Detectar o ambiente
ifeq ($(shell echo $$SHELL | grep -i bash),) # Não é Bash (provavelmente cmd.exe)
    IS_WINDOWS = 1
else
    IS_WINDOWS = 0
endif

# Comandos para criação e remoção de diretórios
ifeq ($(IS_WINDOWS), 1)
    MKDIR = if not exist $(subst /,\,$(1)) mkdir $(subst /,\,$(1))
    RM = rmdir /s /q $(subst /,\,$(1))
else
    MKDIR = mkdir -p $(1)
    RM = rm -rf $(1)
endif

# Fontes e binários
APP_SRC = $(filter-out app/main.c, $(wildcard app/src/*.c))
APP_OBJ = $(APP_SRC:app/src/%.c=$(OBJ_DIR)/app_%.o)
APP_BIN = $(BIN_DIR)/main.exe

TEST_SRC = $(wildcard test/src/*.c)
TEST_OBJ = $(TEST_SRC:test/src/%.c=$(OBJ_DIR)/test_%.o) $(OBJ_DIR)/unity.o $(OBJ_DIR)/test_runner.o $(APP_OBJ)
TEST_BIN = $(BIN_DIR)/test_runner.exe

run_test: $(TEST_BIN)
	$(TEST_BIN)

run_main: $(APP_BIN)
	$(APP_BIN)

# Alvos padrão
all: build_main build_tests

# Compilação do programa principal
build_main: $(APP_BIN)

$(APP_BIN): $(APP_OBJ) $(OBJ_DIR)/main.o
	$(call MKDIR, $(BIN_DIR))
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/app_%.o: app/src/%.c
	$(call MKDIR, $(OBJ_DIR))
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/main.o: app/main.c
	$(call MKDIR, $(OBJ_DIR))
	$(CC) $(CFLAGS) -c $< -o $@

# Compilação do programa de testes
build_tests: $(TEST_BIN)

$(TEST_BIN): $(TEST_OBJ)
	$(call MKDIR, $(BIN_DIR))
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/test_%.o: test/src/%.c
	$(call MKDIR, $(OBJ_DIR))
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/unity.o: test/unity/unity.c
	$(call MKDIR, $(OBJ_DIR))
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/test_runner.o: test/test_runner.c
	$(call MKDIR, $(OBJ_DIR))
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza de arquivos gerados
clean:
	$(call RM, $(BUILD_DIR))

# PHONY targets
.PHONY: all build_main build_tests clean