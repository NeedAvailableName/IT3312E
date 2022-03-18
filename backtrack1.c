//Enumerate all m-element subset of n element
#include<stdio.h>
#include<stdlib.h>
int n, m, a[100];
void printSolution() {
    for(int i = 1; i <= m; i++) {
        printf("%d", a[i]);
    }
    printf("\n");
}
void Try(int k) {
    //Sk = {a[k-1] + 1, a[k-1] + 2, ..., n-(m-k)}
    for(int y = a[k-1] + 1; y <= n-m+k; y++) {
        a[k] = y;
        if(k == m) printSolution();
        else Try(k+1);
    }
}

int main() {
    printf("Enter the value of n = ");
    scanf("%d", &n);
    printf("Enter the value of m = ");
    scanf("%d", &m);
    a[0] = 0;
    Try(1);
}
