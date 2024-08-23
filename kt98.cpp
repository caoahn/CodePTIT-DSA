#include<bits/stdc++.h> 
using namespace std ; 
int n ; 
int a[101] ;   
vector<vector<string>> v ; 
void Try(int i,int pos,vector<string> tmp) {  
     for(int j=i+1 ; j <= n ; j++) { 
        tmp.push_back(to_string(a[j])) ; 
          if(a[j] > a[i]) { 
              if(pos >= 1) { 
                  v.push_back(tmp) ; 
              }
              Try(j,pos+1,tmp) ;  
          }  
        tmp.pop_back() ; 
     }
}
int main() { 
      cin >> n ; 
      for(int i=1 ; i <= n ; i++) { 
         cin >> a[i] ; 
      } 
      v.clear() ;  
      vector<string> tmp ; 
      Try(0,0,tmp) ; 
       sort(v.begin(),v.end()) ; 
       for(auto x : v) { 
         for(auto y : x) { 
             cout << y <<" " ; 
         } 
         cout << endl ; 
       }
      return 0 ; 
}