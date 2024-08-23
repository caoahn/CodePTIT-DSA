#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
    int t ; 
    cin >> t ; 
    while(t--) { 
        long long n,k ; 
        cin >> n >> k ; 
        long long a[n] ; 
        for(long long i=0; i <n ; i++) { 
           cin >> a[i] ; 
		}  
		sort(a,a+n) ; 
		long long sum = 0 ; 
		for(long long i=0; i < n ; i++) { 
		    auto it1 = lower_bound(a+i+1,a+n,k-a[i]) ; 
			auto it2 = upper_bound(a+i+1,a+n,k-a[i])  ; 
			sum += it2 - it1 ; 
		} 
		cout << sum << endl ;
	} 
}
