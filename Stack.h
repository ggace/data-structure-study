#pragma once

#include "Util.h"

#ifndef Stack
#define Stack

typedef struct _stack{
    
    void (*free)(stack*);

    stack*(* top)(stack*);

    ll (*size)(stack*);
    int (*empty)(stack*);

    void (*push)(stack*, ll);
    void (*pop)(stack*);

    //함수 이외는 직접 구현

} stack;

#endif

stack* make_new_node_stack(ll value);
void free_all_stack(stack* node);

stack* make_stack();

stack* top_stack(stack* node);

ll size_stack(stack* node);
int empty_stack(stack* node);

void push_stack(stack* node, ll value);
void pop_stack(stack* node);


void swap_stack(stack* node1, stack* node2);