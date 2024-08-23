#include<bits/stdc++.h> 
using namespace std ;
int main() { 
     int t; 
     cin >> t; 
     while(t--) { 
         int n,k,a[105]  ; 
         set<int> se ;  
         int ok = 1; 
         int cnt = 0 ;    
         cin >> n >> k ; 
         for(int i=1 ; i<= k ; i++) { 
             cin >> a[i] ;  
            se.insert(a[i]) ; 
         } 
         int i = k ; 
         while(i >= 1 && a[i] == n-k+i) { 
             --i ; 
         } 
         if(i == 0) { 
           cout << k << endl ; 
		} 
         else { 
              ++a[i] ; 
            for(int j=i+1 ; j<= k ; j++) { 
                 a[j] = a[j-1] + 1 ; 
            } 
            for(int i=1 ; i<= k ; i++) { 
             if(se.count(a[i]) == 0) { 
                 ++cnt ; 
             }
         }
          cout << cnt << endl ;
         }    
     }
}
