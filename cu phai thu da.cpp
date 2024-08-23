#include<bits/stdc++.h> 
using namespace std ; 
int n,k ; 
int a[1001] ; 
int ok = 1 ; 
int b[1001] ;  
vector<string> v ; 
void Try(int i,int pos,string res) { 
    if(pos > k) return ; 
    if(pos == k) {  
      res.pop_back() ; 
      v.push_back(res) ;  
      res = "" ; 
      return ; 
	} 
	for(int j=i+1; j<= n ; j++) { 
	  if(a[j] >= a[i])  { 
	      Try(j,pos + 1 ,res + to_string(a[j]) + " ") ; 
	  }
	}
} 
int main() { 
    cin >> n >> k ; 
    for(int i=1 ; i <= n ;i++) { 
      cin >> a[i] ; 
	} 
	v.clear() ; 
	Try(0,0,"") ; 
     cout << v.size() << endl ; 
}
