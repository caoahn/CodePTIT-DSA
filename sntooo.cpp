#include<bits/stdc++.h> 
using namespace std ; 
int t ; 
int n, a[1001],p,s; 
vector<vector<int>> v ; 
int check(int n) { 
      for(int i=2; i <= sqrt(n) ; i++) { 
          if(n % i == 0) return 0 ; 
      } 
      return n > 1; 
}
void Try(int i,int sum,vector<int> tmp,int pos ) { 
      for(int j=1 ; j <= 200 ; j++) { 
          if(check(j)) { 
              tmp.push_back(j) ; 
              if(j > p && sum + j <= s) { 
                  if(sum + j == s && pos == n)  { 
                      v.push_back(tmp) ; 
                  } 
                  else Try(j+1,sum+j,tmp,pos+1) ; 
              } 
              tmp.pop_back() ; 
          }
      }
}
int main() { 
      cin >> t; 
      while(t--) { 
           cin >> n  >> p >> s; 
           v.clear() ;  
           vector<int> tmp ; 
           Try(0,0,tmp,0) ; 
           cout << v.size() << endl ; 
      }
}