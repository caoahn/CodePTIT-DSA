#include<bits/stdc++.h>
using namespace std ;
int n ; 
int a[1001] ; 
vector<vector<int>> v ;  
int check(int n) { 
     for(int i=2; i<= sqrt(n) ; i++) { 
          if(n % i == 0) { 
             return 0 ; 
          }
     } 
     return n> 1; 
}  
void Try(int i,int sum,vector<int> tmp) { 
      for(int j=i+1 ; j<= n ; j++) { 
          tmp.push_back(a[j]) ; 
          if(check(sum+a[j])) { 
             v.push_back(tmp) ; 
          } 
             Try(j,sum+a[j],tmp) ; 
             tmp.pop_back() ; 
      }
}
int main() { 
      int t ;
      cin >> t; 
      while(t--) { 
          cin >> n; 
          for(int i=1 ; i<= n ; i++) { 
             cin >> a[i] ; 
          }  
          vector<int> tmp ; 
          v.clear() ; 
          Try(0,0,tmp) ; 
          for(int i=0;i<v.size() ; i++) { 
             sort(v[i].begin(),v[i].end(),greater<int>()) ; 
          } 
        sort(v.begin(),v.end()) ; 
        for(auto x : v) { 
             for(auto y : x) { 
                 cout << y<<' ' ; 
             } 
             cout << endl ; 
        }
      }
}