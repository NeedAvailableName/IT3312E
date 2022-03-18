#include<stdio.h>
#include<stdbool.h>
void insertSort(int a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        int temp = a[i];
        int pos = i;
        while(pos > 0 && temp < a[pos-1]) {
            a[pos] = a[pos-1];
            pos--;
        }
        a[pos] = temp;
    }
}
void selectionSort(int a[], int n) {
    int i, j, index;
    for(i = 0; i < n; i++) {
        index = i;
        for(j = i+1; j < n-1; j++) {
            if(a[j] < a[index]) index = j;
        }
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }   
}
void bubbleSort(int a[], int n) {
    int i, j;
    bool alreadySort = false;
    for(i = 1; i <= n-1; i++) {
        if(alreadySort == false) {
            alreadySort = true;
            for(j = 0; j <= n-i-1; j++) {
                if(a[j] < a[j+1]) {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    alreadySort = false;
                }
            }
        }
    }
}

int main() {
    int a[] = {23, 78, 45, 8, 32, 56};
    //insertSort(a, 6);
    selectionSort(a, 6);
    int i;
    for(i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

