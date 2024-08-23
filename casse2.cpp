#include<bits/stdc++.h> 
using namespace std; 
int main() { 
   int t ; 
   cin >> t; 
   while(t--) { 
      int n ; 
      cin >> n ; 
      int a[n] ; 
      priority_queue<int,vector<int>,greater<int> > pq ; 
      for(int i=0 ; i < n ;i++) { 
        cin >> a[i] ; 
	  }   
	  for(auto x : a) pq.push(x) ; 
	  int cnt = 0 ; 
	  while(pq.size() > 1) { 
	    int top1 = pq.top() ; 
	    pq.pop() ; 
	    int top2 = pq.top() ; 
	    pq.pop() ; 
	    cnt += top1 + top2 ; 
	    pq.push(top1+top2) ; 
	  } 
	  cout << cnt << endl ; 
   }
}
