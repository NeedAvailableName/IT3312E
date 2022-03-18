/*
B�i to�n 2 : cho m?t d�y s? nguy�n a : a1, a2�. an d� du?c s?p x?p theo th? t? kh�ng gi?m v� s? nguy�n X . X�c d?nh xem X c� n?m trong d�y a hay kh�ng?

- 1 <= N <= 10^6, |X| <= 10^9?

|ai| <= 10^9?

Ex : ?

Input : 5 10?

             1 5 7 10 12?

Output : �Yes� ?
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
