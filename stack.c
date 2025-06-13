#include <stdio.h> 
#include "stack.h"

#define MAX_STACK_SIZE 100 

static int stack[MAX_STACK_SIZE]; // Array para almacenar los elementos de la pila
static int top = -1;

void stack_init() { // Inicializa la pila
    top = -1;
}

int stack_push(int value) { // Inserta un elemento en la pila
    if (stack_is_full()) { // Verifica si la pila está llena
        return -1; 
    }
    stack[++top] = value;
    return 0;
}

int stack_pop() {
    if (stack_is_empty()) { // Verifica si la pila está vacía
        return -1;
    }
    return stack[top--];
}

unsigned int stack_size() { // Devuelve el número de elementos en la pila
    return (unsigned int)(top + 1);
}

int stack_is_empty() { // Comprueba si la pila está vacía
    return top == -1; //Si se cumple, significa que la pila está vacía
}

int stack_is_full() { // Comprueba si la pila está llena
    return top == MAX_STACK_SIZE - 1;
}
