#pragma once

#include "Util.h"

#ifndef Queue
#define Queue

typedef struct _queue {

} queue;

#endif

//노드 생성 삭제용
queue* make_new_node_queue(ll value);
void free_all(queue* node);

//큐 생성
queue* create_queue();

//값
queue* front(queue* node);
queue* back(queue* node);

//사이즈
ll size(queue* node);
int empty(queue* node);

//요소 삽입 삭제
void push(queue* node, ll value);
void pop(queue* node);

//큐 스왑
void swap(queue* node1, queue* node2);