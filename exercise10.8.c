#include <stdio.h>
int reverse (int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d\t", a[n-i-1]);
	}
}
int main () {
	int i, n, a[n];
	printf("Enter n\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter the number ");
		scanf("%d", &a[i]);
    }
	reverse(a, n);
	return 0;
}
