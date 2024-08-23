#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ;
  while(t--) { 
    int n,x ; 
    cin >> n >> x ; 
    int a[n] ; 
    for(int i=0;i<n;i++) cin >> a[i] ; 
    int ok = 1; 
    for(int i=0; i <n ; i++) { 
       if(a[i] == x) { 
         ok = 0 ; 
	   }
	} 
	if(ok == 0) cout <<"1" << endl ; 
	else cout <<"-1" << endl ; 
  }
}
