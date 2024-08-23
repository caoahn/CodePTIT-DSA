#include<bits/stdc++.h> 
using namespace std; 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     int n,x ; 
     cin >> n >> x ; 
     int a[n] ; 
	 int pos = -1 ;  
     for(int i=0;i<n;i++) { 
        cin >> a[i] ; 
		if(a[i] == x) { 
		   pos = i+1 ; 
		} 
	 } 
	 cout << pos << endl ; 
  }
}
