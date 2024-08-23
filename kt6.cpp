#include<bits/stdc++.h> 
using namespace std ;
int n ; 
int a[1001]  ; 
vector<string> v ;
string res ="" ;    
string token ="" ; 
void Try(int i) { 
     if(i <= 0) return ; 
     for(int j =1 ; j<= i ; j++) { 
          token += to_string(a[j]) ; 
          token +=' ' ; 
     } 
     token.pop_back() ; 
     res = "[" + token + "]" ; 
     v.push_back(res) ; 
     token = res ="" ; 
     for(int j=1 ; j < i ; j++) { 
         a[j] += a[j+1] ;   
     } 
     Try(i-1) ; 
}
int main() { 
      int t ;
      cin >> t ; 
      while(t--) { 
          cin >> n; 
          for(int i=1; i <= n  ;i++) { 
             cin >> a[i] ; 
          }  
          v.clear() ; 
          Try(n) ; 
          for(int i=v.size()-1 ; i>=0;i--) { 
            cout << v[i] << " " ; 
          }  
        cout << endl ; 
      } 
      return 0 ; 
}