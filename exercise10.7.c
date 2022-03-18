#include<stdio.h>
int main () {
	int i, j, k, n, a[n][n], count = 0;
	printf("Enter n\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("Enter the number ");
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if(a[i][j] == a[j][i]) count += 1;
		}
	}
	if (count = n * n) printf("The matrix is symmetric\n");
	else printf("The matrix is not symmetric\n");
	return 0;
} 
