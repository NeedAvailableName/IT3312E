#include <stdio.h>
int main () {
	int i, j, A[3][3], B[3][3], C[3][3];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Enter the number in matrix A ");
			scanf("%d", &A[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {		
			printf("Enter the number in matrix B ");
			scanf("%d", &B[i][j]);		
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			int k, sum = 0;
			for (k = 0; k < 3; k++) {
				sum += A[i][k] * B[k][j];
				C[i][j] = sum;
			}
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
	        printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
	return 0;
}
