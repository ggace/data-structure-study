#pragma once

#include "Util.h"

#ifndef Queue
#define Queue

typedef struct _queue {
    
    void (*free)(queue*);

    queue* (*front)(queue*);
    queue* (*back)(queue*);

    ll (*size)(queue*);
    int (*empty)(queue*);

    void (*push)(queue*, ll);
    void (*pop)(queue*);

    //함수 이외는 직접 구현

} queue;

#endif

queue* make_new_node_queue(ll value);
void free_all_queue(queue* node);

queue* create_queue();

queue* front_queue(queue* node);
queue* back_queue(queue* node);

ll size_queue(queue* node);
int empty_queue(queue* node);

void push_queue(queue* node, ll value);
void pop_queue(queue* node);

void swap_queue(queue* node1, queue* node2);