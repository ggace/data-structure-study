#pragma once

#ifndef Vector
#define Vector

#include "Util.h"

typedef struct _vector {
    ll *arr;
} vector;

#endif

vector* make_vector();
vector* free_all();

vector* begin(vector* v);
vector* end(vector* v);
vector* get_node(vector* v, ll index);
vector* search(vector* v, ll value);

ll front(vector* v);
ll back(vector* v);

ll size(vector* v);
ll empty(vector* v);

void push_back(vector* node, ll value);
void push_front(vector* node, ll value);
void pop_back(vector* node);
void pop_front(vector* node);
void insert(vector* node, ll value, ll index);
void erase(vector* node, ll index);
