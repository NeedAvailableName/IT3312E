#include<iostream>
using namespace std;
int C(int n, int k) {
	if((k==0)||(k==n)) return 1;
	else return C(n-1,k-1)+C(n-1,k);
}

int main() {
	int n,k;
	cout << "enter n and k:" << endl;
	cin >> n >> k;
	cout << C(n,k) << endl;
	return 0;
}