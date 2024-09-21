#pragma once

#ifndef Vector
#define Vector

#include "Util.h"

typedef struct _vector {
    
    ll size;
    ll capacity;
    ll *arr;

    ll* (*begin)(struct _vector*);
    ll* (*end)(struct _vector*);
    ll* (*get_address)(struct _vector*, ll);
    ll* (*search)(struct _vector*, ll);

    ll (*front)(struct _vector*);
    ll (*back)(struct _vector*);
    ll (*get)(struct _vector*, ll);

    char (*empty)(struct _vector*);
    void (*push_back)(struct _vector*, ll);
    void (*push_front)(struct _vector*, ll);
    void (*pop_back)(struct _vector*);
    void (*pop_front)(struct _vector*);
    void (*insert)(struct _vector*, ll, ll);
    void (*erase)(struct _vector*, ll);

    void (*free)(vector);
} vector;

#endif

vector* make_vector();

void free_all_vector(vector* v);

ll* begin_vector(vector* v);
ll* end_vector(vector* v);
ll* get_address_vector(vector* v, ll index);
ll* search_vector(vector* v, ll value);

ll front_vector(vector* v);
ll back_vector(vector* v);
ll get_vector(vector* v, ll index);

char empty_vector(vector* v);

void push_back_vector(vector* v, ll value);
void push_front_vector(vector* v, ll value);
void pop_back_vector(vector* v);
void pop_front_vector(vector* v);
void insert_vector(vector* v, ll index, ll value);
void erase_vector(vector* v, ll index);
