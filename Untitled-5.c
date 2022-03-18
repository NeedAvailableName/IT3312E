#include <stdio.h>
#include <math.h>
int main () {
	int  i, j, k, n, a[n], *ptr;
	printf("Enter n\n");
	scanf("%d", &n);
	ptr = a;
	for (i = 0; i < n; i++) {
		printf("Enter the number: ");
		scanf("%d", (ptr + i));
	}
	for (i = 0; i < n; i++) {
		for (j = i; j <= n; j++) {
			for (k = i; k < j; k++) {
				printf("%d ", *(ptr + k));
			}
			printf("\n");
		}
	}
	return 0;
}
