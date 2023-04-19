#define MAX_SIZE 8
#define FALSE 0
typedef struct STACK{
    int top;
    int array[MAX_SIZE];
}stack;

void create(stack Pila);
int is_full(stack Pila);
int is_empty(stack Pila);

#include "stack.c"

