#include<bits/stdc++.h> 
using namespace std;   
const int du = 1e9+7 ;  
long long dao(int n) { 
   long long res = 0 ; 
   while(n!= 0) { 
     res = res*10 + n%10 ; 
     n /= 10 ; 
   } 
   return res ; 
}
long long solve(long long n,long long k) { 
     if(k == 0) return 1 ; 
     if(k == 1) return n ; 
    long long x = solve(n,k/2) ; 
     if(k % 2  == 0) { 
        return (x%du * x%du)% du ;  
	 } 
	 else return (x%du * x%du * n) % du ; 
}
int main() { 
    int t ;
    cin >> t; 
    while(t--) { 
        long long n ; 
        cin >> n ;  
        cout << solve(n,dao(n)) << endl ; 
	}
}
