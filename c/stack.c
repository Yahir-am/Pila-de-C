#include "stack.h"
#include <stdbool.h>
void create(stack *st){
    st->top = -1;
}
void is_full(stack){
    if(stack.top == MAX_SIZE - 1){
        return true;
    }else{
        return false;
    }
}
void is_empty(stack){
    if(stack.top == -1){
        return true;
    }else{
        return false;
    }
}
void push(stack *s, element e){
    if(is_full(stack)){
        printf("Overflow\n");
    }else{
        stack.top++;
        stack.array[stack.top] = e;
    }
}
void pop(stack *s){
    if(is_empty(stack)){
        printf("Underflow\n");
    }else{
        printf("/d",stack.array[stack.top]);
        stack.top--;
    }
}