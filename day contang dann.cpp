#include<bits/stdc++.h> 
using namespace std ; 
int n,a[100] ; 
vector<string> v ;
int cnt ;  
string res ="" ; 
void Try(int i,string res,int cnt) { 
   for(int j=i+1 ; j<=n ; j++) {  
      if(a[i] < a[j]) { 
        if(cnt >= 1)
         v.push_back( res +  to_string(a[j]) +  " ") ; 
         Try(j,res+to_string(a[j])+" ",cnt + 1) ; 
     }
   }
}  
int main() { 
    cin >> n ; 
    a[0]= 0 ; 
    for(int i=1 ;i<= n ; i++) { 
       cin >> a[i] ; 
	} 
	Try(0, "",0) ;  
	for(auto x : v) { 
	  cout << x << endl ; 
	} 
	return 0 ; 
}
