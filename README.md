# Stack y Lista Enlazada en C

Este proyecto implementa dos estructuras de datos fundamentales en C: **una pila (stack)** y **una lista enlazada (linked_list)**. 
Ambas estructuras son probadas a través de casos ya preestablecidos en el `main.c` dado para ambos problemas.

---

## Estructura de Archivos

- `main.c`  
  Contiene las funciones de prueba para ambas estructuras (`test_stack` y `test_linked_list`). Ejecuta ambos tests al correr el programa.

- `stack.c` / `stack.h`  
  Implementación de una pila con un arreglo estático de tamaño fijo (`MAX_STACK_SIZE`). Soporta ooeraciones clásicas `push`, `pop`, para verificar si está vacía o llena, etc.

- `linked_list.c` / `linked_list.h`  
  Implementación de una lista enlazada simple. Permite insertar elementos al inicio o al final, eliminar elementos, verificar si un dato existe, obtener el tamaño de la lista e imprimirla.

---

## Funcionamiento del ejecutable

El programa ejecutable corre los siguientes tests al iniciar:

1. **Prueba de Pila:** Agrega 100 elementos, intenta sobrepasar el límite, extrae algunos, vacía la pila y prueba casos límite.
2. **Prueba de Lista Enlazada:** Inserta elementos, los elimina, verifica existencia y muestra el estado de la lista.

---

## Compilación

### Compilar todo
Note que aunque para el problema 1 se requiere solamente lo del `stack.c` y para el problema 2 se requiere solamente lo de `linked_list.c`, se deben compilar ambos archivos juntos para el correcto funcionamiento de `main.c`. 
```bash
gcc -Wall main.c stack.c linkedlist.c -o programa
valgrind ./programa
