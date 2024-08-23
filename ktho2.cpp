#include<bits/stdc++.h> 
using namespace std  ; 
int n ; 
int a[1001] ;   
vector<vector<int>> v ; 
void Try(int i,int pos,vector<int> res) { 
       for(int j=i+1 ; j<= n ; j++) { 
           res.push_back(a[j]) ; 
           if(a[j] > a[i])  { 
              if(pos >= 1) { 
                  v.push_back(res) ; 
              } 
              Try(j,pos+1,res) ; 
           } 
           res.pop_back() ; 
       }
}
int main() { 
       cin >> n ; 
       for(int i=1 ; i<= n ; i++) { 
         cin >> a[i] ; 
       }  
       v.clear() ; 
       vector<int> res ;  
       Try(0,0,res) ; 
        sort(v.begin(),v.end()) ; 
        for(auto x : v)  { 
              for(auto y :x) { 
                 cout << y <<' ' ; 
              } 
              cout << endl; 
        } 
        return 0 ; 
}