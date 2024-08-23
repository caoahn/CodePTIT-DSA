#include<bits/stdc++.h> 
using namespace std;
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
       int n1,n2,n3 ; 
       cin >> n1 >> n2 >> n3; 
       int a[n1] ; 
       int b[n2] ; 
       int c[n3] ; 
       for(int i=0; i<n1 ; i++) cin >> a[i] ; 
       for(int i=0; i<n2 ; i++) cin >> b[i] ; 
       for(int i=0; i <n3 ; i++) cin >> c[i] ; 
        int l = 0 ; 
        int r = 0 ; 
        int m = 0 ; 
        vector<int> v ;
        while(l < n1 && r < n2 && m < n3) { 
           if(a[l] == b[r] && b[r] == c[m]) { 
              v.push_back(a[l]) ; 
              ++l ;
              ++r ; 
              ++m ; 
		   } 
		   else if(a[l] < b[r]) { 
		      ++l ; 
		   } 
		   else if(b[r] < c[m]) { 
		      ++r ; 
		   } 
		   else ++m ; 
		} 
		for(auto it : v) { 
		  cout << it <<" " ; 
		} 
		cout << endl ; 
   }
}
