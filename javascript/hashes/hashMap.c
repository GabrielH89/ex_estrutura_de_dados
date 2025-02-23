#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 11

// Estrutura para armazenar chave-valor como string
typedef struct {
    char key[100];  // Chave como string (tamanho máximo definido como 100)
    char value[100];  // Valor associado como string (tamanho máximo definido como 100)
} Entry;

// Inicializa todos os elementos da tabela como nulos
void initializeTable(Entry t[]) {
    for (int c = 0; c < SIZE; c++) {
        strcpy(t[c].key, "");  // Define a chave como uma string vazia
        strcpy(t[c].value, "");  // Define o valor como uma string vazia
    }
}

// Função de hash para calcular o índice com base na chave
int hashFunction(char key[]) {
    int sum = 0;
    // Somar os valores ASCII dos caracteres da chave
    for (int i = 0; key[i] != '\0'; i++) {
        sum += key[i];
    }
    return sum % SIZE;  // Retorna o índice calculado
}

// Insere um par chave-valor na tabela de hash
void push(Entry t[], char key[], char value[]) {
    int id = hashFunction(key);
    while (strcmp(t[id].key, "") != 0) {  // Enquanto a posição não estiver vazia
        id = (id + 1) % SIZE;  // Sonda linearmente para a próxima posição
    }
    strcpy(t[id].key, key);  // Armazena a chave na posição encontrada
    strcpy(t[id].value, value);  // Armazena o valor associado
}

// Procura um valor na tabela de hash com base na chave
char* search(Entry t[], char key[]) {
    int id = hashFunction(key);
    while (strcmp(t[id].key, "") != 0) {  // Enquanto a posição não estiver vazia
        if (strcmp(t[id].key, key) == 0) {  // Se a chave for encontrada
            return t[id].value;  // Retorna o valor associado
        }
        id = (id + 1) % SIZE;  // Sonda linearmente para a próxima posição
    }
    return NULL;  // Chave não encontrada
}

// Exibe todos os elementos da tabela de hash
void showTable(Entry t[]) {
    for (int c = 0; c < SIZE; c++) {
        if (strcmp(t[c].key, "") != 0) {  // Se a posição não estiver vazia
            printf("%s == %s \n", t[c].key, t[c].value);
        }
    }
}

int main() {
    Entry table[SIZE];
    initializeTable(table);

    push(table, "apple", "red");
    push(table, "banana", "yellow");

    char key[] = "banana";
    char* searchValue = search(table, key);
    if (searchValue != NULL) {
        printf("Value for key '%s' found: %s \n", key, searchValue);
    } else {
        printf("Value for key '%s' not found \n", key);
    }

    showTable(table);

    return 0;
}
