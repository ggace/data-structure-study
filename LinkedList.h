#pragma once

#include "Util.h"

#ifndef LinkedList
#define LinkedList

typedef struct _Node {
    
} Node;

#endif

Node* make_new_node(ll value);
void free_all(Node* node);

Node* create_list();

Node* begin(Node* node);
Node* end(Node* node);
Node* get_node(Node* node, ll index);
Node* search(Node* node, ll value);

ll size(Node* node);
int empty(Node* node);

void push_back(Node* node, ll value);
void push_front(Node* node, ll value);
void pop_back(Node* node);
void pop_front(Node* node);
void insert(Node* node, ll value, ll index);
void erase(Node* node, ll index);

void display(Node* node);


void swap(Node* node1, Node* node2);
