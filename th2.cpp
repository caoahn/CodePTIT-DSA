#include<bits/stdc++.h> 
using namespace std ; 
int n,k,a[1001] ; 
vector<string> v ; 
string res ="" ; 
void Try(int i) { 
      for(int j=a[i-1]+1 ; j<= n-k+i ; j++) { 
          a[i] = j ; 
          if(i == k) { 
              for(int z=1 ;z<=k ; z++) { 
                 res += to_string(a[z]) ;  
                 res += ' ' ; 
              } 
              res.pop_back() ; 
              v.push_back(res) ; 
              res ="" ; 
          } 
          else Try(i+1) ; 
      }
}
int main() { 
        int t ; 
        cin >> t; 
        while(t--) {  
              cin >> n >> k ;  
              v.clear() ; 
              Try(1) ; 
              for(int i= v.size() -1 ; i >= 0 ; i--) { 
                 cout << v[i] << endl ; 
              }
        }
}