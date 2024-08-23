#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
 
#define ll long long
// MAX (long long) 1000000000000000000
// #define M 100 + 5
#define N 200
 
#define MOD (ll)1000000007
#define ld long double
#define sz size()
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define zero(n) setw(n) << setfill('0')
#define stp(n) fixed << setprecision(n)
 
int main() {
    int t;
    cin >> t;
 
    ll f[50];
    f[0] = 1;
    f[1] = 0;
 
    for (int i = 2; i <= 45; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
 
    ll l[50];
    l[0] = 1;
    l[1] = 1;
    for (int i = 2; i <= 45; i++) {
        l[i] = l[i - 1] + l[i - 2];
    }
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        ll res = 0;
 
        while (k > 0 && n >= 0) {
            if (k == l[n]) {
                res += f[n];
                break;
            }
            if (k >= l[n - 1]) {
                res += f[n - 1];
                k -= l[n - 1];
                n = n - 2;
            }
            else {
                n = n - 1;
            }
        }
 
        cout << res << endl;
    }
 
    return 0;
}