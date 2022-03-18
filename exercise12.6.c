#include<stdio.h>
int main () {
	int *ptr, i, n, a[n];
	printf("Enter n\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter the number\n");
		scanf("%d", &a[i]);
	}
	for (i = n-1; i >= 0; i--) {
		printf("%d\t", a[i]);
	}
	printf("\n");
	ptr = &a[n-1];
	for (i = n-1; i >= 0; i--) {
		printf("%d\t", *(ptr-i));
	}
	return 0;
}
