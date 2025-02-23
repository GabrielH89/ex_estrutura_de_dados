#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_SIZE 4

typedef struct {
    int items[MAX_SIZE];
    int top;
}Stack;

void initialize(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(Stack *stack, int value) {
    if(isFull(stack)) {
        printf("You cannot add element because the satck is full \n");
    }else{
        stack->top++;
        stack->items[stack->top] = value;
        printf("Element %d added \n", value);
    }
}

void pop(Stack *stack) {
    if(isEmpty(stack)) {
        printf("Cannot delete element cause the stack is empty \n");
    }else{
        int removedItem = stack->items[stack->top];
        stack->top--;
        printf("%d deleted from stack \n", removedItem);
    }
}

void peek(Stack *stack) {
    if(isEmpty(stack)) {
        printf("Cannot show the top element cause the stack is empty \n");
    }else{
        int topElement = stack->items[stack->top];
        printf("Top element: %d \n", topElement);
    }
}

void printStack(Stack *stack) {
    if(isEmpty(stack)) {
        printf("Cannot show the satck because it's empty \n");
    }else{
        printf("SHOWING STACK: \n [ ");
        for(int c=stack->top; c>=0; c--){
            printf("%d ", stack->items[c]);
        }
        printf("]\n");
    }    
}

void sizeStack(Stack *stack) {
    int size = stack->top+1;
    printf("Size of satck: %d\n", size);
}

int main() {
    Stack s1;
    initialize(&s1);

    push(&s1, 4);
    push(&s1, 13);
    push(&s1, 2);
    push(&s1, 22);
    pop(&s1);
    pop(&s1);
    printStack(&s1);
    peek(&s1);
    sizeStack(&s1);
}


