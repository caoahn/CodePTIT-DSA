#include<bits/stdc++.h> 
using namespace std; 
int n, k ;
int a[1001] ; 
vector<vector<string> >  v ;  
void Try(int i,int sum,vector<string> res) { 
      for(int j=i ; j <= n ; j++) { 
          res.push_back( to_string(a[j]) ); 
          if(sum + a[j] <= k) { 
             if(sum + a[j] == k) { 
                 v.push_back( res)  ;   
             } 
             else Try(j+1,sum + a[j],res) ; 
          } 
          res.pop_back() ; 
      }
}
int main() { 
      int t ; 
      cin >> t ; 
      while(t--) { 
          cin >> n >> k ; 
          for(int i=1 ; i <= n ; i++) { 
             cin >>  a[i] ; 
          }
          sort(a+1,a+n+1) ; 
          vector<string> res ; 
          v.clear() ; 
          Try(1,0,res) ; 
        //   sort(v.begin(),v.end()) ;  
        if(v.size() == 0) { 
             cout <<"-1" << endl ; 
        } 
        else { 
             for(int i=0 ; i < v.size() ; i++) { 
            cout <<"[" ; 
             for(int j=0; j < v[i].size() ; j++) { 
                  cout << v[i][j] ; 
                  if( j != v[i].size()-1) { 
                     cout <<' ' ; 
                  }
             }  
             cout << "]" ; 
             cout <<" " ; 
          }      
        }
          cout << endl ; 
      }
}