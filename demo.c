/*WAP that merges two sorted arrays a and b to make a sorted array c using pointer*/
#include<stdio.h>
int *merge(int *a[], int *b[], int *c[]) {
    int i;
    for(i = 0; i < 4; i++) {
        if(a[i] < b[i]) {
            c[i] = a[i];
            merge(a[i+1], b[i], c[i+1]);
        }
        else {
            c[i] = b[i];
            merge(a[i], b[i+1], c[i+1]);
        }
        return &c[i];
    }
}
int main() {
    int i;
    int a[] = {1, 3, 5 ,7};
    int b[] = {2, 4, 6, 8};
    int c[10];
    for(i = 0; i < 8; i++) {
        printf("%d \n", merge(a, b, c));
    }
    return 0;
}