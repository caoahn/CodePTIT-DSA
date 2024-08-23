#include <bits/stdc++.h>
#pragma gcc optimize("Ofast")
#define endl '\n'
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		ll a[n];
		for (ll &x : a) {
			cin >> x;
			x *= x;
		} 
		for(int i=0; i < n ; i++) { 
		    cout << a[i] <<' ' ; 
		   } 
		   cout << endl ; 
		sort(a, a + n, greater<ll>());
		int ok = 0;
		for (int i = 0; i < n - 2; ++i) {
			ll tmp = a[i];
			int l = i + 1, r = n - 1;
			while (l < r) {
				if (a[l] + a[r] == tmp) {
					ok = 1;
					break;
				}
				else if (a[l] + a[r] > tmp)
					++l;
				else
					--r;
			}
		}
		if (ok)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
