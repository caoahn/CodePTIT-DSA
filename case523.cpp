#include<bits/stdc++.h> 
using namespace std ;
int main() { 
    int t ; 
    cin >> t; 
    while(t--) { 
        int n, k ; 
        cin >> n >> k ; 
        int a[n] ; 
        for(int i=0; i < n  ; i++) cin >> a[i] ; 
        sort(a,a+n) ; 
        int cnt = 0 ;  
        for(int i=0; i < n - 1 ; i++) { 
            auto it = lower_bound(a+i+1,a+n,k + a[i]) - a; 
            int c = it - i - 1 ;  
            if(c != 0) { 
              cnt += c ; 
			}
		} 
		cout << cnt << endl ; 
	}
}
