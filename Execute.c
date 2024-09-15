#include <stdlib.h>
#include <stdio.h>

#ifdef __linux__
int main() {
    system("gcc main.c Stack.c Queue.c LinkedList.c -o Main; ./Main");
    return 0;
} 
#else
int main() {
    system("gcc main.c Stack.c Queue.c LinkedList.c -o Main && Main");
    return 0; 
}
#endif