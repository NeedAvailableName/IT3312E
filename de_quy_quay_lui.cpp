/*liet ke day nhi phan n chu so*/
#include<iostream>
using namespace std;

int n,x[100];
int check(int v, int i) {
	return 1;
}
int solution() {
	int i;
	for(i=1;i<=n;i++) {
		cout<<x[i];
	}
	cout<<endl;
}
int Try(int k) {
	int v;
	for(v=0;v<=1;v++) {
		if(check(v,k)) {
			x[k]=v;
			if(k==n) solution();
			else Try(k+1);
		}
	}
}
int main () {
	cin>>n;
	Try(1);
	return 0;
}
