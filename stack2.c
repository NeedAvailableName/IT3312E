#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
typedef struct Stack {
    int top;
    unsigned capacity;
    int *array;
} Stack;
 
Stack *createStack(unsigned capacity) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}
 
int stackFull(Stack *stack) {
    return stack->top == stack->capacity - 1; 
}
 
int stackEmpty(Stack *stack) {   
    return stack->top == -1;  
}

void stackPush(Stack *stack, int item) {
    if (stackFull(stack)) return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

int stackPop(Stack *stack) {
    if (stackEmpty(stack)) return INT_MIN;
    return stack->array[stack->top--];
}

int peek(Stack *stack) {
    if (stackEmpty(stack)) return INT_MIN;
    return stack->array[stack->top];
}

void displayStack(Stack *stack) {
    int i;
    for(i = 0; i <= stack->top; i++) {
        printf("%d ", stack->array[i]);
    }
}

int main() {
    Stack *stack = createStack(100);
    stackPush(stack, 14);
    stackPush(stack, 25);
    stackPush(stack, 38);
    stackPush(stack, 48);
    printf("%d popped from stack\n", stackPop(stack));
    printf("Top item is %d\n", peek(stack));
    displayStack(stack);
    return 0;
}
/*typedef struct {
    int num;
}Item;
Item *s;
int maxSize, numItem = 0;
int stackEmpty() {
    return (numItem == 0);
}
int stackFull() {
    return (numItem == maxSize);
}
void push(Item item) {
    if(stackFull) {
        printf("Stack over flow\n");
    }
    printf("Enter the num: ");
    scanf("%d", &item.num);
    s[numItem] = item;
    numItem++;
}
Item pop(Item item) {
    if(stackEmpty) {
        printf("Stack under flow\n");
    }
    numItem--;
    return s[numItem];
}
int main() {
    Item *s = (Item *)malloc(sizeof(Item));
    printf("Enter the max size of stack: ");
    scanf("%d", &maxSize);
    int i;
    for(i = 0; i < 3; i++) {
        push(s[i]);
    }
    pop(s[i]);
    free(s);
}*/
