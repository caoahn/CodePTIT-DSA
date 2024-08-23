#include<bits/stdc++.h> 
using namespace std ; 
long long n, k ;
long long n1 ; 
map<int,string> mp ;    
set<string> se;  
int a[100] ;
vector<string> v1 ;   
string res ="" ; 
void Try(int i) { 
     for(int j=a[i-1]+1 ; j <= n1-k+i ; j++) { 
          a[i] = j ; 
          if(i == k) { 
               for(int z=1 ; z <= k ; z ++) { 
                    res += mp[a[z]] ; 
                    res +=' ' ; 
               } 
               res.pop_back() ; 
               v1.push_back(res) ; 
               res="" ;  
          }
          else Try(i+1) ; 
     }
}
int main() { 
     cin >> n >> k ; 
     for(int i=0; i < n ; i++) { 
         string s ; 
         cin >> s; 
         se.insert(s) ;   
     }  
     n1 = se.size() ; 
   vector<string> v   ; 
   for(auto it : se) { 
     v.push_back(it) ; 
   } 
   mp[0] ='0' ; 
   int cnt = 1;  
   for(int i=0; i < v.size() ; i++) { 
     mp[cnt] = v[i] ; 
     ++cnt ; 
   }  
    v1.clear() ; 
    Try(1) ; 
    sort(v1.begin(),v1.end()) ; 
    for(auto it : v1) { 
         cout << it << endl ; 
    }
}