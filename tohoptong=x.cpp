#include<bits/stdc++.h> 
using namespace std ;  
int n,x ; 
int a[1005] ; 
vector<string> v ; 
string res="" ; 
void Try(int i,int sum,string res) { 
      if(sum > x) return ; 
      if(sum == x) {  
          res.pop_back() ; 
          v.push_back("{" + res + "}") ;  
          res ="" ; 
          return  ;  
      } 
      for(int j=i ; j < n ; j++) { 
         if(sum + a[j] <= x) { 
              Try(j,sum + a[j],res + to_string(a[j]) + ' ') ; 
         }
      }
}
int main() { 
      int t ;
      cin >> t; 
      while(t--) { 
          cin >> n >> x ; 
          v.clear()  ; 
          for(int i=0; i < n ; i++) cin >> a[i] ;  
          sort(a,a+n) ; 
          Try(0,0,"") ;  
          if(v.size() == 0 ) { 
              cout <<"-1" << endl  ; 
          } 
          else { 
              cout << v.size() << ' ' ; 
              for(auto it : v) { 
             cout << it <<' ' ; 
          } 
          cout << endl ;   
        }
    }
}