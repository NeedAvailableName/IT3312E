#include<iostream>
using namespace std;
int min(int a, int b) {
	return (a<b) ? a:b;
}

int main () {
	long long m,n,k;
	cin >> m >> n >> k;
	k = min(k, n - k);
    int ans = 1;
    for(int i = 1; i <= k; i++, n--){
        ans *= n;
        ans /= i; 
    }
    cout << (ans%m) << endl;
    return 0;
}
