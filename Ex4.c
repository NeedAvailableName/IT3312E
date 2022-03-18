#include<stdio.h>
#include<math.h>
void func(double a, int *x, double *y) {
	*x = (int)a;
	*y = a - *x;
}
int main() {
	int x;
	double a,y;
	scanf("%f", &a);
	func(a,&x,&y);
	printf("%d %f\n", x, y);
	return 0;
}
