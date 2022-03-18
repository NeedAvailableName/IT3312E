#include<stdio.h>
#include<stdlib.h>
int main() {
    int i, j, n, pos1, pos2;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++) {
        printf("Enter the number in the position %d: ", i+1);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for(i = 0; i < n; i++) {
        if(max < a[i]) max = a[i];
    }
    for(i = 0; i < n; i++) {
        if(max == a[i]) pos1 = (i+1);
    }
    int min = a[0];
    for(j = 0; j < n; j++) {
        if(min > a[j]) min = a[j];
    }
    for(j = 0; j < n; j++) {
        if(min == a[j]) pos2 = (j+1);
    }
    printf("The maximum element is %d in the position %d\n", max, pos1);
    printf("The minimum element is %d in the position %d\n", min, pos2);
    return 0;
}
