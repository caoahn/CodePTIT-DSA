#include<bits/stdc++.h> 
using namespace std;   
int n ; 
int a[1001] ; 
int b[1001] ; 
long long solve(int a[],int b[]) {  
     long long res = 0 ; 
     sort(a,a+n) ; 
     sort(b,b+n,greater<int>()) ; 
     for(int i=0; i < n ; i++) { 
        res += a[i]*b[i] ; 
	 }
	 return res ;
}
int main() { 
   int t ;
   cin >> t ;
   while(t--) { 
        cin >> n ; 
        for(int i=0; i < n; i++) cin >> a[i] ; 
        for(int i=0;i < n ; i++) cin >> b[i] ; 
        cout << max(solve(a,b) , solve(b,a) ) << endl ; 
   }
}
