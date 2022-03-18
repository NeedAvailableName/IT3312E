#include<stdio.h>
#include<string.h>
int helperProd(int list[], int i) {
    if(i == sizeof(list) - 1) return list[i];
    else return list[i] * helperProd(list, i+1);
}
int main() {
    int list[] = {1, 2, 3, 4, 5};
    printf("%d", helperProd(list, 0));
    return 0;
}