#include<bits/stdc++.h> 
using namespace std ; 
 map<int,char> mp ;  
 string s ; 
 int t , a[1000],n , u[1000]={0};  
void Try(int i) { 
  for(int j=1 ; j <= n ; j++) { 
     if(u[j] == 0) { 
         a[i] = j ; 
         u[j] = 1;  
          if(i == n) { 
	    for(int i=1 ; i <= n ; i++) { 
	        cout <<mp[a[i]] ; 
		} 
		cout <<" " ; 
	 } 
	 else { 
	    Try(i+1) ; 
	 } 
	 u[j] = 0 ;  
	 } 
  }
} 
int main() {   
  cin >>t ; 
  while(t--) { 
    cin >> s ; 
	mp[0]={'0'} ;   
	int cnt = 1;   
	n=s.size() ; 
	mp[0] = {'0'};
    for(int i=0 ; i < s.size() ; i++) { 
       mp[cnt] = s[i] ; 
	   ++cnt ;  
	} 
   Try(1) ; 
	cout << endl ; 
  }
}
