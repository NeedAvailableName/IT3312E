#include<stdio.h>
int main () {
    int i,n,k,x,a[100];
    scanf("%d%d%d", &n, &k, &x);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=n;i>k;i--) {
        a[i]=a[i-1];
    }
    a[k]=x;
    n++;
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
