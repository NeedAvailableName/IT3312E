/*1.define a struct Student with name, dob, scores of subjects
2. define a struct that is a dynamic array to store a list of student
3. define a fuction to init the array of student as empty
4. define a function to add new student at the end of the array
5. define a function to search for a student with highest average score
6. define a fuction to print out the screen the list of students*/
#include<stdio.h>
#include<stdlib.h>
int n, k;

typedef struct {
    char name[40];
    char dob[20];
    float score[3];
    float sum;
} student;
student *s;

void readArr(student *s) {
    int i, j;
    for(i = 0; i < n; i++) {
        printf("Enter the name: ");
        gets(s[i].name);
        fflush(stdin);
        printf("Enter the dob: ");
        gets(s[i].dob);
        fflush(stdin);
        for(j = 0; j < k; j++) {
            printf("Enter the score of subject %d: ", j+1);
            scanf("%f", s[i].score[j]);
        }
    }
} 

student func4(student *new) {
    int i;
    n++;
    new = (student *)realloc(s, sizeof(student));
    printf("Enter the name: ");
    gets(new->name);
    fflush(stdin);
    printf("Enter the dob: ");
    gets(new->dob);
    for(i = 0; i < 3; i++) {
        printf("Enter the score: ");
        scanf("%f", &new->score[i]);
    }
    return *new;
}

void func5(student *s) {
    int i, j;
    float max;
    for(i = 0; i < n; i++) {
        for(j = 0; j < 3; j++) {
            s[i].sum += s[i].score[j];
        }
    }
    float ave = s[0].sum/3;
    for(i = 0; i < n; i++) {
        if(s[i].sum < s[i+1].sum) ave = s[i+1].sum/3;
    }
    for(i = 0; i < n; i++) {
        if(ave * 3 == s[i].sum) printf("%-30s %-20s \t %f \t %f \t %f\n", s[i].name, s[i].dob, s[i].score[j], s[i].score[j], s[i].score[j]);
    }
}

void func6(student *s) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            printf("%-30s %-20s \t %f \t %f \t %f\n", s[i].name, s[i].dob, s[i].score[j], s[i].score[j], s[i].score[j]);
        }
    }
}

int main() {
    int opt;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    fflush(stdin);
    student *s = (student *)calloc(n, sizeof(student));
    printf("Enter the number of subjects: ");
    scanf("%d", &k);
    fflush(stdin);
    readArr(s);
    do {
        printf("MENU\n");
        printf("3.init the array of student as empty\n");
        printf("4.add new student at the end of the array\n");
        printf("5.search for a student with highest average score\n");
        printf("6.print out the screen the list of students\n");
        printf("7. Exit\n");
        printf("Enter the option: ");
        scanf("%d", &opt);
        switch (opt) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4: func4(s);
            break;    
        case 5: func5(s);
            break;
        case 6: func6(s);
            break;
        case 7: printf("Exit\n");
            break;    
        default:
            break;
        }
    } while(opt != 7);
    return 0;
}
