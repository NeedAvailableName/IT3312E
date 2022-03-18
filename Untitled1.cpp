/*
Bài toán 2 : cho m?t dãy s? nguyên a : a1, a2…. an dã du?c s?p x?p theo th? t? không gi?m và s? nguyên X . Xác d?nh xem X có n?m trong dãy a hay không?

- 1 <= N <= 10^6, |X| <= 10^9?

|ai| <= 10^9?

Ex : ?

Input : 5 10?

             1 5 7 10 12?

Output : “Yes” ?
sd tim kiem nhi phan
*/
#include<iostream>
using namespace std;
int main() {
	int i,n,a[n],x;
	bool flag = false;
	cin >> n >> x;
	for(i=0;i<n;i++) {
		cin >> a[i];
	}
	int j=0, k=n-1;
	while(j<=k) {
		int y=(k+j)/2;
		if(x==a[y]) {
			flag = true;
			break;
		}
		else if(x<a[y]) k=y+1;
		else j=y-1;
	}
	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
