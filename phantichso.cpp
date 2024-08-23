#include<bits/stdc++.h> 
using namespace std ;  
int n ; 
int sum ;  
vector<vector<int>> v ; 
void Try(int i,int sum,vector<int> res) { 
       if(sum > n) { 
        return ; 
       } 
       if(sum == n) {   
         v.push_back(res) ; 
       } 
       for(int j=i ; j<=n;j++) { 
         res.push_back(j) ; 
          if(sum + j <= n) { 
            Try(j,sum+j,res) ; 
          } 
          res.pop_back() ; 
       }
}
int main() { 
       int t ; 
       cin >> t; 
       while(t--) { 
           cin >> n ;  
           v.clear() ; 
        vector<int> res ; 
        Try(1,0,res) ;  
        for(int i=0; i < v.size() ; i++) { 
              sort(v[i].begin() ,v[i].end(),greater<int>()) ; 
        } 
        sort(v.begin(),v.end())  ;  
        cout << v.size() << endl ; 
       for(int i=v.size()-1; i >= 0 ; i--) { 
          cout <<"(" ; 
          for(int j=0; j < v[i].size() ; j++) { 
              cout << v[i][j]  ; 
              if(j != v[i].size()-1) cout <<' ' ; 
          } 
          cout << ")" ; 
          cout <<' ' ; 
       }
        cout << endl ; 
       }
}