#include<stdio.h>
int helperSum(int s[], int i) {
    if(i == 1) return s[0];
    else return s[i-1] + helperSum(s, i-1);
}
int main() {
    int s[5] = {1, 2, 3, 4, 5};
    printf("%d", helperSum(s, 5));
    return 0;
}