#pragma once

#include "Util.h"

#ifndef Stack
#define Stack

typedef struct _Node{

} Node;

#endif

Node* make_new_node(ll value);
void free_all(Node* node);

Node* create_queue();

Node* front(Node* node);
Node* back(Node* node);

ll size(Node* node);
int empty(Node* node);

void push(Node* node, ll value);
void pop(Node* node);


void swap(Node* node1, Node* node2);