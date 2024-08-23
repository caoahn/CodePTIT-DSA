#include<bits/stdc++.h> 
using namespace std;  
int check(string s) {  
    if(s.size() % 2 == 0) return 1 ; 
	return 0 ; 
} 
int check2(string s) { 
    int l=0 ; 
    int r=s.size()-1; 
    while(l <= r) { 
       if(s[l] != s[r]) return 0 ; 
       ++l ;
       --r; 
	} 
	return 1; 
}
int main() { 
   int t;  
   cin >> t; 
   while(t--) { 
        int n ; 
        cin >> n ; 
        queue<string> q ; 
        q.push("6") ; 
        q.push("8") ;   
		vector<string> v ;  
		int cnt = 0 ; 
        while(1) {    
            string tmp = q.front() ;  
             q.pop() ;
             if(cnt == n || tmp.size() >= 18 ) break ;   
             if(check(tmp) && check2(tmp))  { 
                 v.push_back(tmp) ; 
                 ++cnt ; 
			 }  
			 q.push(tmp + "6") ; 
			 q.push(tmp + "8") ; 
		}
		for(auto it : v) { 
		  cout << it << " " ; 
		} 
		cout << endl ; 
   }
}
