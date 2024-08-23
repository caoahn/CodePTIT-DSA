#include<bits/stdc++.h> 
using namespace std ; 
#define ll long long 
int n, k ;
vector<string> s ; 
int dd[100] = { 0 } ; 
int x[100] = { 0 } ; 
ll res = 1000000000 ;  
void check() { 
      vector<int> v; 
      for(int i=0; i < n ; i++) { 
          string tmp ="" ; 
          for(int j=1 ; j<= k ; j++) { 
              tmp += s[i][x[j]-1] ; 
          } 
          v.push_back(stoi(tmp)) ; 
      } 
      sort(v.begin(),v.end()) ; 
      res = min(res,(ll)( v[n-1] - v[0]) ); 
} 
void Try(int i) { 
       for(int j=1 ; j<= k ; j++) { 
          if(!dd[j]) { 
               x[i] = j ; 
               dd[j] = 1 ; 
               if(i == k) { 
                   check() ; 
               }
               else Try(i+1) ; 
               dd[j] = 0 ; 
          } 
       }
}
int main() {  
      cin >> n >> k ; 
      s.resize(n) ; 
      for(int i=0 ; i<n ; i++) { 
          cin >> s[i] ; 
      }  
      Try(1) ; 
      cout << res << endl ; 
      return 0 ; 
}