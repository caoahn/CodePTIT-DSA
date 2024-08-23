#include<bits/stdc++.h> 
using namespace std ; 
// 8 1 
// 1 2 6 4 7 3 9 10 
// 1 2 3 4 6 7 9 10  
int main() { 
      int n ; 
      cin >> n; 
      int a[n] ;
      vector<int> v1 ; 
      vector<int> v2 ; 
      vector<int> v3 ; 
      for(int i=0; i < n ; i++)  { 
         cin >> a[i] ; 
         if(i % 2 == 0) { 
              v1.push_back(a[i]) ; 
         } 
         else v2.push_back(a[i]) ; 
      } 
      sort(v1.begin(),v1.end()) ; 
      sort(v2.begin(),v2.end(),greater<int>()) ; 
      int k = 0; 
      int q = 0 ; 
      for(int i=0; i < n ; i++) { 
          if(i % 2 == 0) { 
             v3.push_back(v1[k])  ; 
              ++k ; 
          } 
          else { 
            v3.push_back(v2[q]) ; 
            ++q ;  
          }
      }
        for(auto it : v3) { 
            cout << it << ' ' ; 
          } 
}