#include "Queue.h"

//큐 생성
queue* create_queue(){
    queue* new_queue = make_new_node_queue(-1);

    new_queue->free = free_all_queue;

    new_queue->front = front_queue;
    new_queue->back = back_queue;

    new_queue->size = size_queue;
    new_queue->empty = empty_queue;

    new_queue->push = push_queue;
    new_queue->pop = pop_queue;

    //그외는 직접 개발

    return new_queue;
}

//노드 생성 삭제용
queue* make_new_node_queue(ll value){

}
void free_all_queue(queue* node){

}

//값
queue* front_queue(queue* node){

}
queue* back_queue(queue* node){

}

//사이즈
ll size_queue(queue* node){

}
int empty_queue(queue* node){

}

//요소 삽입 삭제
void push_queue(queue* node, ll value){

}
void pop_queue(queue* node){

}

//큐 스왑
void swap_queue(queue* node1, queue* node2){

}