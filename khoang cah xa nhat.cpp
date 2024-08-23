#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long 
ll Max[100005], a[100005];
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		Max[n - 1] = a[n - 1];
		for (ll i = n - 2; i >= 0; i--)
		{
			Max[i] = max(a[i], Max[i + 1]);
		}
	   int i=0;  
       int j=0; 
       int ans = -1 ; 
       while(i < n && j < n) { 
           if(Max[i] > a[i] ) { 
              ans = max(ans,j-i) ; 
              ++j ; 
           } 
           else ++i ; 
       } 
       cout << ans << endl ; 
	}
	return 0;
}