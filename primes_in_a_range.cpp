#include <bits/stdc++.h>
using namespace std;
long long int n = 1000001;
long long int seive[1000001];

void primes() {
    // for (int i = 0; i <= 10; i++) cout << seive[i] << " ";
    seive[0] = seive[1] = 1;
    for (int i = 2; i * i <= n; i++) {
        if (seive[i] == 0) {
            for (int j = i * i; j <= n; j+=i) {
                if (seive[j] == 0) {
                    seive[j] = 1;
                }
            }
        }
    }
}

int main() {
    primes();
    int t;
	cin >> t;
	while(t--) {
		int cnt = 0;
		int a,b;
		cin >> a >> b;
		for (int i = a; i <= b; i++) {
			if (seive[i] == 0) {
				cnt++;
			}
		}
	cout << cnt << endl;
	}
}
