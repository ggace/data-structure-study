#pragma once

#include "Util.h"

#ifndef LinkedList
#define LinkedList

typedef struct _list {

    
    void (*free)(list* node);
    
    list*(* begin)(list* node);
    list*(* end)(list* node);
    list*(* get_address)(list* node, ll index);
    list*(* search)(list* node, ll value);

    ll (*front)(list* node);
    ll (*back)(list* node);

    ll (*size)(list* node);
    int (*empty)(list* node);

    void (*push_back)(list* node, ll value);
    void (*push_front)(list* node, ll value);
    void (*pop_back)(list* node);
    void (*pop_front)(list* node);
    void (*insert)(list* node, ll value, ll index);
    void (*erase)(list* node, ll index);

    void (*display)(list* node);

    //함수 이외는 직접 구현
    
} list;

#endif

//노드 생성 삭제용
list* make_new_node_list(ll value);
void free_all_list(list* node);

//리스트 생성
list* create_list();

//이터레이터
list* begin_list(list* node);
list* end_list(list* node);
list* get_address_list(list* node, ll index);
list* search_list(list* node, ll value);

//값
ll front_list(list* node);
ll back_list(list* node);

//사이즈관련
ll size_list(list* node);
int empty_list(list* node);

//요소 삽입 삭제
void push_back_list(list* node, ll value);
void push_front_list(list* node, ll value);
void pop_back_list(list* node);
void pop_front_list(list* node);
void insert_list(list* node, ll value, ll index);
void erase_list(list* node, ll index);

//요소 모두 출력
void display_list(list* node);

//두 리스트 스왑, 하고 싶으면
void swap_list(list* node1, list* node2);
