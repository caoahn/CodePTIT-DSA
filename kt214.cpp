#include<bits/stdc++.h> 
using namespace std;   
map<int,char> mp ; 
int a[100] ;  
int u[100] = {0}; 
int n ; 
vector<string> v ; 
string res =""; 
bool check2(int x) { 
     if(x == 1 || x == 5) return true ; 
     return false ; 
} 
bool check() {  
     for(int i=1 ; i<= n ; i++) { 
          if(check2(a[i])) {  
            if( i == 1 || i == n) { 
                 continue; ; 
            }
              if(!check2(a[i-1]) && !check2(a[i+1])) { 
                 return false ; 
              }
          }
     } 
     return true ; 
}  
void Try(int i) { 
     for(int j=1 ; j<= n ; j++) { 
          if(!u[j]) { 
              a[i] = j ; 
              u[j] = 1 ; 
              if(i == n) { 
                 if(check()) { 
                      for(int z=1 ; z <= n ; z++) { 
                          res += mp[a[z]] ; 
                      } 
                      v.push_back(res) ; 
                      res ="" ; 
                 }
              } 
              else Try(i+1) ; 
              u[j] = 0 ; 
          }
     }
}
int main() { 
      char s ; 
      cin >> s;  
      string s1 =""; 
      for(char i ='A' ; i<= s ; i++) { 
          s1 += i ; 
      } 
      n = s1.size() ; 
      mp[0] = '0' ; 
      int cnt = 1; 
      for(int i=0 ; i< s1.size() ; i++) { 
          mp[cnt] = s1[i] ; 
          ++cnt ; 
      } 
      v.clear() ; 
      Try(1) ; 
      sort(v.begin(),v.end()) ; 
      for(auto it : v) { 
        cout << it << endl ; 
      }
}