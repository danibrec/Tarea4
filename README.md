# Stack y Lista Enlazada en C

Este proyecto implementa dos estructuras de datos fundamentales en C: **una pila (stack)** y **una lista enlazada (linked list)**. 
Ambas estructuras son probadas a través de casos ya preestablecidos en el `main.c` dado para ambos problemas.

---

## Estructura de Archivos

- `main.c`  
  Contiene las funciones de prueba para ambas estructuras (`test_stack` y `test_linked_list`). Ejecuta ambos tests al correr el programa.

- `stack.c` / `stack.h`  
  Implementación de una pila con un arreglo estático de tamaño fijo (`MAX_STACK_SIZE`). Soporta operaciones clásicas como `push`, `pop`, verificar si está vacía o llena, etc.

- `linkedlist.c` / `linkedlist.h`  
  Implementación de una lista enlazada simple. Permite insertar elementos al inicio o al final, eliminar elementos, verificar si un dato existe, obtener el tamaño de la lista e imprimirla.

---

## Funcionamiento del ejecutable

El programa ejecutable corre los siguientes tests al iniciar:

1. **Prueba de Pila:** Agrega 100 elementos, intenta sobrepasar el límite, extrae algunos, vacía la pila y prueba casos borde.
2. **Prueba de Lista Enlazada:** Inserta elementos, los elimina, verifica existencia y muestra el estado de la lista.

---

## Compilación

### Compilar todo
```bash
gcc -Wall main.c stack.c linkedlist.c -o programa
valgrind ./programa
