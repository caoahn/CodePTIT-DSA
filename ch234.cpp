#include<bits/stdc++.h> 
using namespace std ; 
int n,p,s;
int n1; 
vector<vector<string>> v ; 
int check(int n) { 
     for(int i=2 ; i <= sqrt(n) ; i++) { 
          if(n % i == 0) return 0; 
     }  
     return n > 1 ; 
}   
vector<int> v1 ; 
void solve() { 
     for(int i=1 ; i<= 1000000 ; i++) { 
          if(check(i)) { 
             v1.push_back(i) ; 
          }
     }
}
void Try(int i,int sum,int k,vector<string> tmp) { 
      for(int j=i ; j < n1 ; j++) { 
            tmp.push_back(to_string(v1[j])) ; 
           if(v1[j] > p) { 
               if(sum + v1[j] <= s && k <= n) { 
                  if(sum + v1[j] == s && k == n) { 
                     v.push_back(tmp) ; 
                  } 
                  else Try(j+1,sum+v1[j],k+1,tmp) ; 
               }
           } 
           tmp.pop_back() ; 
      }
}
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
        solve() ;  
        n1= v1.size() ; 
       cin >> n >> p >> s ; 
       v.clear() ; 
       vector<string> tmp  ; 
      Try(0,0,0,tmp) ; 
      cout << v.size() << endl ;
      }
}