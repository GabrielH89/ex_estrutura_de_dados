#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Tamanho máximo da pilha

// Definição da estrutura da pilha
typedef struct {
    int items[MAX_SIZE]; // Array para armazenar os elementos da pilha
    int top;             // Índice do topo da pilha (-1 indica pilha vazia)
} Stack;

// Função para inicializar a pilha
void initialize(Stack *stack) {//Sstack é um ponteiro que aponta para a estrutura Stack
    stack->top = -1; // Define o topo como -1 para indicar pilha vazia
}

// Função para verificar se a pilha está vazia
int isEmpty(Stack *stack) {
    return stack->top == -1; // Retorna 1 se pilha vazia, senão retorna 0
}

// Função para verificar se a pilha está cheia
int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1; // Retorna 1 se pilha cheia, senão retorna 0
}

// Função para empilhar um elemento na pilha (push)
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Erro: Pilha cheia, não é possível empilhar o elemento.\n");
    } else {
        stack->top++; // Incrementa o topo da pilha
        stack->items[stack->top] = value; // Insere o elemento no topo da pilha
        printf("Elemento %d empilhado com sucesso.\n", value);
    }
}

// Função para desempilhar um elemento da pilha (pop)
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Erro: Pilha vazia, não é possível desempilhar.\n");
        return -1; // Retorna um valor indicando erro (por exemplo, -1)
    } else {
        int removedItem = stack->items[stack->top]; // Obtém o elemento do topo da pilha
        stack->top--; // Decrementa o topo da pilha
        return removedItem; // Retorna o elemento desempilhado
    }
}

void display(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Pilha vazia.\n");
    } else {
        printf("Itens da pilha:\n");
        for (int i = stack->top; i >= 0; i--) {
            printf("%d\n", stack->items[i]);
        }
    }
}

// Função principal para testar a implementação da pilha
int main() {
    Stack stack;
    initialize(&stack); // Inicializa a pilha

    push(&stack, 10); // Empilha o valor 10
    push(&stack, 20); // Empilha o valor 20
    push(&stack, 30); // Empilha o valor 30

    printf("Elemento desempilhado: %d\n", pop(&stack)); // Desempilha e imprime o elemento
    
    push(&stack, 40); // Empilha o valor 40

    display(&stack);
    return 0;
}
