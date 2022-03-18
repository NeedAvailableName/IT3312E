#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
typedef struct Stack {
    char top;
    char *str;
}Stack;

void stackPush(Stack *stack, char a) {
    if (stackFull(stack)) return;
    stack->str[++stack->top] = a;
}

int stackPop(Stack *stack) {
    if (stackEmpty(stack)) return INT_MIN;
    return stack->str[stack->top--];
}

int top;
void check(char str[], int n, char stack[]) {
    for(int i = 0; i < n; i++) {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{') {
            top = top + 1;
            stackPush(stack, str[i]);
        }
        if(str[i] == ')' || str[i] == ']' || str[i] == '}') {
            if(top == -1 )
            {
                top = top -1 ;
                break ;
             }
            else
            {
                 top = top -1 ;
            }
        }
    }
    if(top == -1)
        printf("String is balanced!\n");
    else
        printf("String is unbalanced!\n");
}
 
int main ( ) 
{
    char str[ ] = "{}[]()";
    return 0;
}