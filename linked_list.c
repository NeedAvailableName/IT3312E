#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char name[40];
    char ID[10];
    float grade;
} student;
typedef struct node{
    student data;
    struct node *next;
}node;
int main() {
    int i,n;
    printf("Enter the number of student: ");
    scanf("%d", &n);
    node *temp;
    printf("Enter information for student 1: \n");
    temp = (node *)malloc(sizeof(node));
    printf("Enter the name: ");
    fflush(stdin);
    gets(temp->data.name);
    fflush(stdin);
    printf("Enter the ID: ");
    gets(temp->data.ID);
    fflush(stdin);
    printf("Enter the grade: ");
    scanf("%f", &temp->data.grade);
    fflush(stdin);
    node *head = temp;
    node *cur;
    for(i = 1; i < n; i++) {
        printf("Enter information for student %d: \n", i+1);
        cur = (node *)malloc(sizeof(node));
        temp->next = cur;
        printf("Enter the name: ");
        gets(cur->data.name);
        fflush(stdin);
        printf("Enter the ID: ");
        gets(cur->data.ID);
        fflush(stdin);
        printf("Enter the grade: ");
        scanf("%f", &cur->data.grade);
        fflush(stdin);
        temp = cur;
    }
    cur->next = NULL;
    for(cur = head; cur != NULL; cur = cur->next) {
        printf("%s\t%s\t%f\n", cur->data.name, cur->data.ID, cur->data.grade);
    }
    return 0;
}