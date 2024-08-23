#include<bits/stdc++.h> 
using namespace std ; 
int n,k ; 
int a[1001] ;  
vector<vector<int>> v ; 
void Try(int i,int sum,vector<int> res) { 
     for(int j=i ; j <= n ; j++) { 
            res.push_back(a[j]) ; 
            if(sum + a[j] <= n) { 
                  if(sum + a[j] == n) { 
                      v.push_back(res) ; 
                  } 
                  else { 
                     Try(j+1,sum+a[j],res) ; 
                  }
            } 
            res.pop_back() ; 
     }
}
int main() { 
       int t ; 
       cin >> t; 
       while(t--) { 
           cin >> n >> k  ; 
           for(int i=1 ; i<= n ; i++) { 
             cin >> a[i] ; 
           }  
           sort(a+1,a+n+1) ; 
          v.clear() ; 
          vector<int> res; 
          Try(1,0,res) ; 
          for(auto x : v) { 
             for(auto y : x) { 
                 cout << y<<' ' ; 
             } 
             cout << endl ; 
          } 
          cout << endl ; 
       }
}