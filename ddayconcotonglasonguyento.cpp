
#include<bits/stdc++.h> 
using namespace std ;
int n,t ; 
int a[1005] ; 
vector<vector<int>> v ; 
bool p(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return n >= 2;
} 
void Try(int i,int sum,vector<int> tmp) { 
      for(int j=i+1 ; j<= n ; j++) { 
          tmp.push_back(a[j]) ; 
          if(p(sum+a[j])) { 
              v.push_back(tmp) ; 
          }   
             Try(j,sum+a[j],tmp) ; 
            tmp.pop_back() ; 
      }
}
int main() { 
      cin >> t;  
      while(t--) { 
         cin >> n ; 
         vector<int> tmp; 
        for(int i=1 ; i <= n; i++) { 
             cin >> a[i] ; 
        } 
        Try(0,0,tmp) ; 
        for(int i=0; i < v.size() ; i++) { 
              sort(v[i].begin(),v[i].end(),greater<int>()) ; 
        }
        sort(v.begin(),v.end()) ; 
        for(auto x : v) { 
             for(auto y : x) { 
                 cout << y <<' ' ; 
             }
            cout << endl ; 
        } 
        v.clear() ; 
      } 
      return 0 ; 
}