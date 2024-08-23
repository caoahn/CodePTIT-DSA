#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		long long a[n];
		for(int i=0; i < n ; i++) { 
               int x ; 
               cin >> x ; 
               a[i] =(long long)x*x ; 
        }
		sort(a, a + n, greater<long long>());
		int ok = 0;
		for (int i = 0; i < n - 2; ++i) {
			long long tmp = a[i];
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
