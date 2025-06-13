#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

typedef struct Node { // Definición de un nodo de la lista enlazada
    int data;
    struct Node* next;
} Node;

static Node* head = NULL; // Puntero al inicio de la lista
static unsigned int size = 0;

void linked_list_init() { // Inicializa la lista enlazada
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }
    size = 0;
}

int linked_list_append(int data) { // Agrega un elemento al final de la lista
    Node* new_node = malloc(sizeof(Node));
    if (!new_node) return -1; // Error al asignar memoria
    new_node->data = data;
    new_node->next = NULL;

    if (!head) { // Si la lista está vacía, el nuevo nodo es el primero
        head = new_node;
    } else { // Si la lista no está vacía, se recorre hasta el final
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = new_node;
    }

    size++;
    return 0;
}

int linked_list_prepend(int data) { //  Agrega un elemento al inicio de la lista
    Node* new_node = malloc(sizeof(Node));
    if (!new_node) return -1; // Se da error al asignar memoria

    new_node->data = data; // Asigna el dato al nuevo nodo
    new_node->next = head; // El nuevo nodo apunta al antiguo inicio de la lista
    head = new_node;

    size++;
    return 0;
}

int linked_list_remove(int data) { // Elimina el primer elemento que coincide con el dato proporcionado
    Node* current = head;
    Node* previous = NULL;

    while (current) { // Recorre la lista
        if (current->data == data) { // Si encuentra el dato
            if (previous) { // Si no es el primer nodo
                previous->next = current->next; // Elimina el nodo actual
            } else { // Si es el primer nodo
                head = current->next; // Actualiza el inicio de la lista
            }
            free(current);
            size--;
            return 0;
        }
        previous = current; // Avanza al siguiente nodo
        current = current->next; // Avanza al siguiente nodo
    }

    return -1; // Elemento no encontrado
}

int linked_list_contains(int data) { // Verifica si un elemento está en la lista
    Node* current = head; // Comienza desde el inicio de la lista
    while (current) {
        if (current->data == data) return 1; // Si encuentra el dato, retorna 1
        current = current->next;
    }
    return 0;
}

unsigned int linked_list_size() { // Devuelve el tamaño de la lista
    return size;
}

void linked_list_print() { // Imprime todos los elementos de la lista enlazada
    Node* current = head;
    while (current) {
        printf("%d ", current->data); // Imprime el dato del nodo actual
        current = current->next; // Avanza al siguiente nodo
    }
    printf("\n"); 
}
