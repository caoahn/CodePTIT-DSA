#include<bits/stdc++.h> 
using namespace std ; 
int n,t,a[1005] , x[1005] , ok ; 
void ktao() { 
     for(int i=1 ; i <= n ; i++) { 
         a[i] = i ; 
     }
} 
void sinh() { 
     int i =  n ; 
     while(i >= 1 && a[i] > a[i+1]) { 
         --i ; 
     } 
     if(i == 0 ) { 
        ok = 0; 
     } 
     else { 
         int k =n ; 
         while(a[k] < a[i]) --k ; 
         swap(a[i],a[k]) ; 
         int l=i+1 ; 
         int r =n ; 
         while(l <= r) { 
             swap(a[l],a[r]) ; 
             ++l ; 
             --r ; 
         }
     }
}
int main() { 
      cin >> t; 
      while(t--) {  
        cin >> n ; 
        ok = 1 ; 
        ktao() ; 
        while(ok) { 
             for(int i=1; i<= n ; i++) { 
                 cout << a[i] ; 
             } 
             cout << endl ; 
             sinh() ; 
        }
      } 
      return 0 ; 
}