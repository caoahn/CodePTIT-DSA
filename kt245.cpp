#include<bits/stdc++.h> 
using namespace std ; 
int n,x ; 
int a[1001] ;   
vector<vector<string>> v ; 
void Try(int i,int sum,vector<string> tmp) { 
      for(int j=i; j <= n ; j++) { 
         tmp.push_back(to_string(a[j])) ; 
         if(sum + a[j] <= x){
             if(sum + a[j] == x) { 
                 v.push_back(tmp) ; 
             } 
             else Try(j,sum + a[j],tmp) ; 
         } 
           tmp.pop_back() ;     
      }
} 
int main() {  
      int t ; 
      cin >> t; 
      while(t--) { 
          cin >> n >> x ; 
          for(int i=1 ; i<= n ; i++) { 
             cin >> a[i] ; 
          } 
          sort(a+1,a+1+n) ; 
        vector<string> tmp ; 
          v.clear() ; 
          Try(1,0,tmp) ;  
          //sort(v.begin(),v.end()) ;  
          if(v.size() == 0) { 
             cout <<"-1" << endl ; 
          }
          else { 
               for(int i=0; i < v.size() ; i++) { 
             cout << "[" ; 
                     for(int j=0 ; j < v[i].size() ; j++) { 
                          cout << v[i][j] ; 
                           if(j != v[i].size()-1) cout <<' ' ; 
             } 
             cout << "]" ; 
           } 
           cout << endl ;    
          }
      } 
      return 0 ; 
}