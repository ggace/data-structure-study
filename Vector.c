#include "Vector.h"

vector* make_vector() {
    vector* new_vector = (vector*)malloc(sizeof(vector));

    new_vector->arr = (ll*)malloc(sizeof(ll) * 3);
    new_vector->size = 0;
    new_vector->capacity = 3;

    new_vector->begin = begin_vector;
    new_vector->end = end_vector;
    new_vector->get_address = get_address_vector;
    new_vector->search = search_vector;

    new_vector->front = front_vector;
    new_vector->back = back_vector;
    new_vector->get = get_vector;

    new_vector->empty = empty_vector;

    new_vector->push_back = push_back_vector;
    new_vector->push_front = push_front_vector;
    new_vector->pop_back = pop_back_vector;
    new_vector->pop_front = pop_front_vector;
    new_vector->insert = insert_vector;
    new_vector->erase = erase_vector;

    return new_vector;
}

void free_all_vector(vector* v) {
    free(v->arr);
    free(v);
}

ll* begin_vector(vector* v) {
    return v->arr;
}
ll* end_vector(vector* v) {
    return v->arr + v->size;
}
ll* get_address_vector(vector* v, ll index) {
    return v->arr + index;
}
ll* search_vector(vector* v, ll value) {
    for(ll i = 0; i < v->capacity; i++) {
        if(v->arr[i] == value) {
            return v->arr+i;
        }
    }

    return NULL;
}

ll front_vector(vector* v) {
    return v->arr[0];
}
ll back_vector(vector* v) {    
    return v->arr[(v->size)-1];
}
ll get_vector(vector* v, ll index) {
    return v->arr[index];
}

char empty_vector(vector* v) {
    return v->size == 0;
}

void extend_vector(vector* v) {
    
    (v->capacity) += 3;
    ll* temp_arr = (ll*)malloc(sizeof(ll) * v->capacity);

    memcpy(temp_arr, v->arr, v->size * sizeof(ll));
    free(v->arr);
    v->arr = temp_arr;


    if(v->arr == NULL) {
        fprintf(stderr, "fail to update vector capacity");
        exit(0);
    }
}


void push_back_vector(vector* v, ll value){
    if(v->size+1 >= v->capacity) {
        extend_vector(v);
    }

    v->arr[v->size] = value;
    ++(v->size);

}
void push_front_vector(vector* v, ll value){
    if(v->size+1 >= v->capacity) {
        extend_vector(v);
    }

    for(ll i = v->size-1; i >= 0; i--) {
        v->arr[i+1] = v->arr[i];
    }
    v->arr[0] = value;
    ++(v->size);
}
void pop_back_vector(vector* v){
    --(v->size);
}
void pop_front_vector(vector* v){
    for(ll i = 1; i < v->size; i++) {
        v->arr[i-1] = v->arr[i];
    }

    --(v->size);
}
void insert_vector(vector* v, ll index, ll value){
    if(index == v->size) {
        v->push_back(v ,value);
        return;
    }
    if(index > v->size) {
        return;
    }

    if(v->size+1 >= v->capacity) {
        extend_vector(v);
    }

    for(ll i = v->size-1; i >= index; i--) {
        v->arr[i+1] = v->arr[i];
    }

    v->arr[index] = value;
    ++(v->size);

}
void erase_vector(vector* v, ll index){
    if(v->size == index) {
        v->pop_back(v);
        return;
    }
    if(index > v->size) {
        return; 
    }
    for(ll i = index+1; i < v->size; i++) {
        v->arr[i-1] = v->arr[i];
    }

    --(v->size);
}