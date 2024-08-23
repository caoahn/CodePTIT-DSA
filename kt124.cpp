#include<bits/stdc++.h> 
using namespace std ;
int n, k ; 
int a[1001] ;  
vector<string> v ; 
void Try(int i,int sum,string res) { 
      if(sum > k) { 
         return ; 
      } 
      if(sum == k) { 
         res.pop_back() ; 
         v.push_back("[" + res + "]")  ; 
      } 
      for(int j=i; j <= n ; j++) { 
         if(sum + a[j] <= k) { 
              Try(j+1,sum+a[j],res + to_string(a[j]) + ' ') ; 
         }
      }
}
int main() { 
      int t ;
      cin >> t; 
      while(t--)  { 
            cin >> n >> k ; 
            for(int i=1 ; i <= n ; i++) { 
                  cin >> a[i] ; 
            } 
            sort(a+1,a+n+1) ; 
            v.clear() ;     
            vector<string> res ; 
            Try(1,0,"") ; 
            for(auto x : v) { 
                 cout << x << ' ' ; 
            } 
            cout << endl ; 
      }
}