#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n, a[1005], x[1005];

vector<string>v;

void Try(int i, string s, int cnt) {
//	if (cnt >= n) return;
	for (int j = i + 1; j <= n; j++) {
		if (a[i] < a[j]) {
			if (cnt >= 1)
				v.push_back(s + to_string(a[j]) + " ");
			Try(j, s + to_string(a[j]) + " ", cnt + 1);
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	Try(0, "", 0);
	sort(v.begin(), v.end());
	for (auto x : v) {
		cout << x << endl;
	}
	return 0;
}
