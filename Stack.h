#pragma once

#include "Util.h"

#ifndef Stack
#define Stack

typedef struct _stack{

} stack;

#endif

stack* make_new_node_stack(ll value);
void free_all(stack* node);

stack* create_stack();

stack* top(stack* node);

ll size(stack* node);
int empty(stack* node);

void push(stack* node, ll value);
void pop(stack* node);


void swap(stack* node1, stack* node2);