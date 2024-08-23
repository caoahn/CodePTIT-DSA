#include<bits/stdc++.h> 
using namespace std; 
int p[1000001] ; 
int n,p1,s ; 
string res = "" ; 
vector<string> v ;
vector<int> v1 ; 
void sang() { 
     for(int i=0 ; i <= 1000000 ; i++) { 
         p[i] = 1; 
     } 
     p[0] = p[1] = 0 ; 
     for(int i=2 ; i <= 1000 ; i++) { 
         if(p[i]) { 
             for(int j=i*i ; j <= 1000000 ; j+= i) { 
                  p[j] = 0 ;
             }
         }
     }
} 
void sen() { 
     for(int i=2; i <= 1000000 ; i++) { 
          if(p[i]) { 
             v1.push_back(i) ; 
          }
      }
} 
void Try(int i,int sum,string res,int cnt) { 
      if(sum == s && cnt == n ) {  
          res.pop_back() ; 
          v.push_back(res) ; 
          return ; 
      }
     for(int j=i; j < v1.size() ; j++) { 
          if(v1[j] > p1) { 
             if(sum + v1[j] <= s) { 
                 Try(j+1,sum + v1[j],res + to_string(v1[j]) + ' ',cnt + 1)  ; 
             }
          }
      }
}
int main() { 
      int t ; 
      cin >> t ; 
      sang() ;  
     sen()  ;  
      while(t--) { 
         cin >> n >> p1 >> s ; 
         v.clear() ;  
         Try(0,0,"",0) ; 
        cout << v.size() << endl  ; 
        for(auto it : v) { 
            cout << it << endl; 
        } 
      }
}