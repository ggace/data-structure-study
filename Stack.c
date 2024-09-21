#include "Stack.h"

stack* make_stack(){
    stack* new_stack = make_new_node_stack(-1);

    new_stack->free = free_all_stack;

    new_stack->top = top_stack;
    
    new_stack->size = size_stack;
    new_stack->empty = empty_stack;

    new_stack->push = push_stack;
    new_stack->pop = pop_stack;

    //그 외는 직접개발

    return new_stack;
}

stack* make_new_node_stack(ll value){

}
void free_all_stack(stack* node){

}

stack* top_stack(stack* node){

}

ll size_stack(stack* node){

}
int empty_stack(stack* node){

}

void push_stack(stack* node, ll value){

}
void pop_stack(stack* node){

}


void swap_stack(stack* node1, stack* node2){

}