#include<bits/stdc++.h> 
using namespace std;  
vector<vector<string>> v ; 
int n,k; 
int a[1001] ; 
void Try(int i,int sum, vector<string> res) { 
    for(int j=i; j<= n ; j++) { 
       res.push_back(to_string(a[j])) ; 
       if(sum + a[j] <= k) { 
          if(sum + a[j] == k) { 
               v.push_back(res) ; 
		  } 
		  else Try(j,sum + a[j],res) ; 
	   } 
	   res.pop_back() ; 
	}
}
int main() { 
  int t ;
  cin >> t; 
  while(t--) { 
     cin >> n >> k ; 
     for(int i=1 ;i<=n ; i++) cin >> a[i]  ;   
     sort(a+1,a+n+1) ; 
     v.clear() ; 
     vector<string> res ; 
     Try(1,0,res) ;  
     if(v.size() == 0) { 
       cout << "-1" << endl ; 
	 } 
	 else { 
	     for(int i=0; i < v.size() ; i++) { 
       cout << "[" ; 
       for(int j=0 ; j< v[i].size() ; j++) { 
          cout << v[i][j] ; 
          if(j != v[i].size()-1) cout <<" " ; 
	   } 
	   cout << "]" ; 
	 } 
	 cout << endl ; 
	 }
  }
}
