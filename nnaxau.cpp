#include<bits/stdc++.h> 
using namespace std; 
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
       int k ; 
       cin >> k ; 
       string s ; 
       cin >> s; 
       priority_queue<int> q ; 
       map<char,int> mp ; 
       for(int i=0; i < s.size() ; i++) { 
           mp[s[i]]++ ; 
	   } 
	   for(auto it : mp) { 
	       q.push(it.second) ; 
	   } 
	   int x = k ; 
	   while(--x) {  
	        int fi =  q.top() ; 
	        q.pop() ; 
	        --fi ;  
	        q.push(fi) ; 
	   }
	   long long cnt = 0 ; 
	   while(!q.empty()) { 
	      int y = q.top() ; 
	      q.pop() ; 
	      cnt += pow(y,2) ; 
	   } 
	   cout << cnt << endl ; 
   }
}
