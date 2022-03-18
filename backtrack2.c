#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int n, m, a[100];
bool candidate(int j, int k) {
    //function returns true if and only if j belongs to Sk
    int i;
    for(i = 1; i <= k-1; i++) {
        if(j == a[i]) return false;
    }
    return true;
}

void printSolution() {
    int i, j;
    for(i = 1; i <= n; i++) {
        printf("%d", a[i]);
    }
    printf("\n");
}

void Try(int k) {
    int j;
    for(j = 1; j <= n; j++) {
        if(candidate(j, k)) {
            a[k] = j;
            if(k == n) printSolution();
            else Try(k+1);
        }
    }
}

int main() {
    printf("Enter n = ");
    scanf("%d", &n);
    Try(1);
}