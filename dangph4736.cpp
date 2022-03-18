#include<iostream>
using namespace std;

long long n,k,j=0;
int x[100];
int mark[100];

int check(int v, int m){
    if(mark[v]) return 0;
    return 1;
}

void solution() {
    for(int i = 1; i <= n; i++) cout << x[i] << " ";
    cout << endl;
}

void Try(int m) {
    for(int v = 1; v <= n; v++){
        if(check(v, m)){
            x[m] = v;
            mark[v] = 1;
            if(m == n) {
            	if(j!=k) j++;
			}
			if(j==k) {
				solution();
				j++;
			}
            else Try(m + 1);
            mark[v] = 0;
        }
    }
}

int main() {
    cin >> n >> k;
    Try(1);
}
