#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

typedef struct StackNode{
    char item;
    struct StackNode *next;
}StackNode;

typedef StackNode* stack;

stack makeNode(char c){
    stack new;
    new = (stack)malloc(sizeof(StackNode));
    new->item = c;
    new->next = NULL;
    return new;
}

int stackEmpty(stack s){
    return (s == NULL);
}

int countStack(stack s){
    stack temp;
    temp = s;
    int n = 0;
    while(temp != NULL){
        n ++;
        temp = temp->next;
    }
    return n;
}

int stackFull(stack s){
    return (countStack(s) > MAX);
}

stack stackPushOne(char c, stack s){
    stack new = makeNode(c);
    if (s == NULL){
        return new;
    }
    new->next = s;
    return new;
}

stack stackPushAll(char s1[], stack s){
    // stack new = makeNode(s1[0]);
    // if(s1 == NULL){
    //     return new;
    // }
    int i = 0;
    while(s1[i] != '\0'){
        s = stackPushOne(s1[i], s);
        i ++;
    }
    return s;
}

stack stackPop(stack s){
    if(s == NULL){
        return NULL;
    }
    stack new = s;
    s = s->next;
    free(new);
    return s;
}

void printStack(stack s){
    stack temp = s;
    while(temp != NULL){
        printf("%c ", temp->item);
        temp = temp->next;
    }
    printf("\n");
}

void freeStack(stack s){
    stack temp = s;
    while(s != NULL){
        free(temp);
        s = s->next;
        temp = s;
    }
}

int main(){
    int n, carry = 0;
    char n1[] = "123456";
    char n2[] = "123456";
    stack s1 = NULL;
    stack s2 = NULL;
    stack s3 = NULL;
    s1 = stackPushAll(n1, s1);
    printStack(s1);
    s2 = stackPushAll(n2, s2);
    printStack(s2);
    while(s1 != NULL && s2 != NULL){
        n = s1->item - '0' + s2->item - '0';
        if(n <= 9){
            s3 = stackPushOne(n + carry + '0', s3);
            carry = 0;
        }
        else{
            s3 = stackPushOne(n + carry + '0', s3);
            carry = n - 10;
        }
        s1 = stackPop(s1);
        s2 = stackPop(s2);
    }

    if(s1 == NULL){
        while(s2 != NULL){
            s3 = stackPushOne(s2->item, s3);
            s2 = stackPop(s2);
        }
    }

    if(s2 == NULL){
        while(s1 != NULL){
            s3 = stackPushOne(s1->item, s3);
            s2 = stackPop(s1);
        }
    }
    printStack(s3);
}