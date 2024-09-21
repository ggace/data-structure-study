#include "LinkedList.h"


//리스트 생성
list* create_list(){
    list* new_list = make_new_node_list(-1);

    new_list->free = free_all_list;
    new_list->begin = begin_list;
    new_list->end = end_list;
    new_list->get_address = get_address_list;
    new_list->search = search_list;

    new_list->front = front_list;
    new_list->back = back_list;

    new_list->size = size_list;
    new_list->empty = empty_list;

    new_list->push_back = push_back_list;
    new_list->pop_front = pop_front_list;
    new_list->pop_back = pop_back_list;
    new_list->pop_front = pop_front_list;
    new_list->insert = insert_list;
    new_list->erase = erase_list;

    new_list->display = display_list;

    //그외는 직접 개발

    return new_list;
}

//노드 생성 삭제용
list* make_new_node_list(ll value){

}
void free_all_list(list* node){

}

//이터레이터
list* begin_list(list* node){

}
list* end_list(list* node){

}
list* get_address_list(list* node, ll index){

}
list* search_list(list* node, ll value){

}

//값
ll front_list(list* node){

}
ll back_list(list* node){

}

//사이즈관련
ll size_list(list* node){

}
int empty_list(list* node){

}

//요소 삽입 삭제
void push_back_list(list* node, ll value){

}
void push_front_list(list* node, ll value){

}
void pop_back_list(list* node){

}
void pop_front_list(list* node){

}
void insert_list(list* node, ll value, ll index){

}
void erase_list(list* node, ll index){

}

//요소 모두 출력
void display_list(list* node){

}

//두 리스트 스왑, 하고 싶으면
void swap_list(list* node1, list* node2){

}
