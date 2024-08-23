#include<bits/stdc++.h> 
using namespace std ;
string s ; 
int k ; 
map<int,char> mp ; 
int a[1001] ; 
int n;  
vector<string> v  ;
void Try(int i,string res) { 
     for(int j=a[i-1]+1 ; j <= n- k + i ; j++) { 
          a[i] = j ; 
          res += s[a[i]-1] ; 
          if(i == k) { 
              v.push_back(res) ; 
          }  
          else Try(i+1,res) ; 
          res.pop_back() ; 
     }
}
int main() { 
      int t  ; 
      cin >> t ; 
      while(t--) { 
          cin >> n >> s ;  
          v.clear() ; 
          for(int i=1 ; i<= n ; i++) { 
              k = i ; 
              Try(1,"") ; 
          } 
        sort(v.begin(),v.end()) ;  
        for(auto x : v) { 
             cout <<  x <<' ' ; 
        } 
        cout << endl ;  
} 
}