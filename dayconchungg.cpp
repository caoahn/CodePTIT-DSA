#include<bits/stdc++.h>
using namespace std ; 
int main() { 
      int t ;
      cin >> t ;
      while(t--) {  
           int n,m,k ; 
           cin >> n >> m >> k ; 
          long long a[n],b[m],c[k] ; 
           for(int i=0; i < n ; i++) cin >> a[i] ; 
           for(int i=0 ; i< m ; i++) cin >> b[i] ; 
           for(int i=0; i < k ; i++) cin >> c[i] ;     
           map<long long,int> mp1 ; 
           map<long long,int> mp2 ; 
           map<long long,int> mp3;  
           for(int i=0; i < n ; i++) { 
              mp1[a[i]]++ ; 
           } 
           for(int i=0; i < m ; i++) { 
              mp2[b[i]]++ ; 
           } 
           for(int i=0; i < k ; i++) { 
              mp3[c[i]]++; 
           }
           vector<long long> v ; 
            for(auto x : mp1) { 
                 if(mp2.count(x.first) != 0 && mp3.count(x.first) != 0 ) { 
                          for(int i=0; i < min (x.second,  min(  mp2[x.first] , mp3[x.first] ) ); i++) { 
                                v.push_back(x.first) ; 
            }
      } 
     }
       if(v.size() == 0) { 
                 cout <<"NO"  ; 
            }
            else { 
                for(auto it : v) { 
                 cout << it <<' ' ; 
            }      
      } 
      cout << endl ;
    }
}