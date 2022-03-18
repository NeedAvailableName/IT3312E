#include<iostream>
using namespace std;
int n, count;
int b[100];
void ghinhan() {
	int i,j;
	count++;
	cout<<"Xau thu "<<count<<":";
	for(i=1;i<=n;i++) {
		j=b[i];
		cout<<j;
	}
	cout<<endl;
}
void xau(int i) {
	int j;
	for(j=0;j<=1;j++) {
		b[i]=j;
		if(i==n) ghinhan();
		else xau(i+1);
	}
}
int main() {
	cout<<"Nhap n: ";
	cin>>n;
	count=0;
	xau(1);
	cout<<"So luong xau = "<<count<<endl;
	return 0;
}
