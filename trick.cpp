#include<bits/stdc++.h> 
using namespace std ;  
vector<string> v ; 
void in() { 
   queue<string> q ; 
   q.push("6") ; 
   q.push("8") ; 
   while(1) { 
      string tmp = q.front() ; 
      q.pop() ; 
      if(tmp.size() == 19) break ; 
      v.push_back(tmp) ;  
      q.push(tmp + "6") ; 
      q.push(tmp + "8") ; 
   }
}
int main() { 
    int t ;
    cin >> t; 
    in() ; 
    while(t--) { 
        int n ; 
        cin >> n ; 
        int dem = 0 ; 
        for(string x : v) { 
            cout << x  ;  
            string y = x ; 
            reverse(y.begin(),y.end()) ; 
            cout << y << " " ;  
            ++dem ; 
            if(dem == n) break ; 
		} 
		cout << endl ; 
	}
}
