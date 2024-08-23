#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
    int t ; 
    cin >> t; 
    while(t--) { 
        int n1 ; 
        cin >> n1 ; 
		int n = n1 ;   
        long long a[n1] ; 
        for(int i=0; i < n1 ; i++) { 
            cin >> a[i] ;
		} 
		vector<long long > v ; 
		for(int i=0; i < n ; i++) { 
		   v.push_back(a[i]*a[i]) ; 
		}   
		long long s = 0; 
		int ok = 1;   
	 for(long long i=0; i < n-1 ; i++) { 
	   if( s != 0) break ;  
	    for(long long j=i+1; j < n ; j ++) { 
	            auto it = lower_bound(v.begin()+j+1,v.end(),v[i]-v[j])  ; 
			    auto it1 = upper_bound(v.begin()+j+1,v.end(),v[i]-v[j])   ; 
			    s = it1 - it ; 
			    if(s != 0) { 
			    ok = 0; 
			     break;    
			    }
		}
 } 
	 if(ok != 0) { 
	    cout << "YES" << endl ; 
	 }	 
	 else cout <<"NO" <<endl ; 
	}
}
