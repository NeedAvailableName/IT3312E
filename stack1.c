#include<stdio.h>
#include<stdlib.h>

typedef struct stackNode {
    float num;
    struct stackNode *next;
} stackNode;

typedef struct {
    stackNode *top;
} stack;

stack *stackConstruct() {
    stack *s = (stack *)malloc(sizeof(stack));
    if(s == NULL) {
        return NULL;
    }
    s->top = NULL;
    return s;
}

void stackDestroy(stack *s) {
    while(!stackEmpty(s)) {
        stackPop(s);
    }
    free(s);
}

int stackEmpty(stack *s) {
    return(s->top == NULL);
}

int stackFull() {
    return 1;
}

void displayStack(stack *s) {
    stackNode *node;
    if(stackEmpty(s)) printf("No stack\n");
    node = s->top;
    while(node != NULL) {
        printf("%f ", s->top->num);
        node = node->next;
    }
}

int stackPush(stack *s) {
    stackNode *node = (stackNode *)malloc(sizeof(stackNode));
    if(node == NULL) {
        stackFull();
        return 1;
    }
    node->num = scanf("%f", &node->num);
    node->next = s->top;
    s->top = node;
    return 0;
}

int stackPop(stack *s) {
    stackNode *node;
    if(stackEmpty(s)) return 1;
    node = s->top;
    s->top = node->next;
    free(node);
}

int main() {
    stack *s = (stack *)malloc(sizeof(stack));
    s = stackConstruct();
    stackPush(s);
    stackPush(s);
    stackPop(s);
    displayStack(s);
}