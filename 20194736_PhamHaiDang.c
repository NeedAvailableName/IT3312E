#include<stdio.h>
#include<limits.h>
void maxsub1(int a[], int n) {
	int i,j,k;
	int maxsum=0;
	for(i=0;i<n;i++) {
		for(j=i;j<n;j++) {
			int sum=0;
		    for(k=i;k<=j;k++) {
		    	sum+=a[k];
		    	if(sum>maxsum) maxsum=sum;
			}
		}
	}
	printf("%d\n", maxsum);
}
void maxsub2(int a[], int n) {
	int i,j;
	int maxsum=a[0];
	for(i=0;i<n;i++) {
		int sum=0;
		for(j=i;j<n;j++) {
			sum+=a[j];
			if(maxsum<sum) maxsum=sum;
		}
	}
	printf("%d\n", maxsum);
}
int max(int a, int b) {
    if(a>b) return a;
    else return b;
}
int maxleft(int a[], int low, int high) {
	int maxsum=INT_MIN;
	int sum=0;
	int k;
	for(k=high;k>=low;k--) {
		sum+=a[k];
		maxsum=max(sum,maxsum);
	}
	return maxsum;
}
int maxright(int a[], int low,int high) {
	int maxsum = INT_MIN;
	int sum =0;
	int k;
	for(k=low;k<=high;k++) {
		sum+=a[k];
		maxsum=max(sum,maxsum);
	}
	return maxsum;
}
int maxsub3(int a[], int low, int high) {
	if(low==high) return a[low];
	int mid=(low+high)/2;
	int ML=maxsub3(a,low,mid);
	int MR=maxsub3(a,mid+1,high);
	int MM=maxleft(a,low,mid)+maxright(a,mid+1,high);
	int M=max(ML,MR);
	M=max(M,MM);
	return M;
}
int maxsub4(int a[], int n) {
	int i, smax=a[0];
	int e=a[0];
	for(i=1;i<n;i++) {
		e=max(a[i],e+a[i]);
		smax=max(e,smax);
	}
	return smax;
}
int main () {
	int n=5;
	int a[]={1,2,3,4,5};
	maxsub1(a,n);
	maxsub2(a,n);
	printf("%d\n",maxsub3(a,0,n-1));
	printf("%d\n", maxsub4(a,n));
	return 0;
}
