#include<stdio.h>
#define size 100
#include<math.h>
int main() {
	double A[size], sum, ans;
	double ave;
	int i,n;
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		scanf("%f ", &A[i]);
	}
	for(i=0;i<n;i++) {
		sum+=A[i];
	}
	ave=sum/n*1.0;
	for(i=0;i<n-1;i++) {
		if(fabs(A[i]-ave)<fabs(A[i+1]-ave)) ans = A[i];
	}
	printf("%f\n", ans);
	return 0;
}
