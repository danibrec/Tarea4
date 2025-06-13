#ifndef STACK_H
#define STACK_H


void stack_init(); //Inicializa la pila

int stack_push(int value); //Inserta un elemento en la pila
int stack_pop();    //Elimina el elemento superior de la pila

unsigned int stack_size(); //Devuelve el número de elementos en la pila

int stack_is_empty();   //Comprueba si la pila está vacía

int stack_is_full();    //Comprueba si la pila está llena

#endif
