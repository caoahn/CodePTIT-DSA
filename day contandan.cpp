#include<bits/stdc++.h> 
using namespace std ; 
int n,a[100] ; 
vector<string> v ;
int cnt= 0 ;  ;  
string res ="" ; 
void Try(int i,string res) { 
    for(int j=i+1 ; j <= n ; j++ ) { 
      if(a[i] < a[j]) { 
         if(cnt >=1) {
		 res += to_string(a[j]) + " " ; 
	}
         v.push_back(res) ;  
         Try(j,res) ; 
         ++cnt;
	  }
	}
}  
int main() { 
    cin >> n ; 
    a[0]= 0 ; 
    for(int i=1 ;i<= n ; i++) { 
       cin >> a[i] ; 
	} 
	Try(0,"") ;  
	sort(v.begin(),v.end()) ; 
	for(auto x : v) { 
	  cout << x << endl ; 
	} 
	return 0 ; 
}