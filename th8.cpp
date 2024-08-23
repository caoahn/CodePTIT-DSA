#include<bits/stdc++.h> 
using namespace std; 
long long n,k ; 
long long a[11][11], b[11][11] ;   
const int mod = 1e9+7 ;  
int sum ; 
void nhan(long long x[11][11],long long y[11][11]) { 
        long long tmp[11][11] ; 
        for(int i=0; i < n ; i++) { 
              for(int j=0 ; j < n ; j++) { 
                  long long res = 0 ; 
                  for(int k=0; k < n ; k++) { 
                       res += (x[i][k]* y[k][j]) % mod ;  
                       res %= mod ; 
                  } 
                  tmp[i][j] = res ; 
              }
        } 
        for(int i=0; i < n ; i++) { 
              for(int j=0; j < n ; j++) { 
                  a[i][j] = tmp[i][j] ; 
              }
        }
} 
void mu(long long a[11][11],int k) { 
      if(k <= 1) { 
         return ; 
      } 
      mu(a,k/2) ; 
      nhan(a,a) ; 
      if(k%2 == 1) { 
         nhan(a,b) ; 
      }
}
void solve() {    
      cin >> n >> k ; 
      for(int i=0; i < n ; i++) {  
          for(int j=0; j < n ; j++) { 
             cin >> a[i][j] ; 
             b[i][j] = a[i][j] ; 
          }
      } 
      mu(a,k) ;  
      sum = 0 ; 
       for(int i=0; i< n ; i++) { 
       sum = (sum%mod + a[0][i]%mod) % mod ; 
       } 
       cout << sum << endl ; 
} 
int main() { 
    int t ; 
    cin >> t ; 
    while(t--) {  
         solve() ; 
    }
}