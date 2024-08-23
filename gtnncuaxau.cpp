#include<bits/stdc++.h> 
using namespace std ; 
int main()  { 
      int t ; 
      cin >> t ; 
      while(t--) { 
          int k ; 
          cin >> k ; 
          string s ; 
          cin >> s ; 
          map<char,int> mp ; 
          vector<int> v ; 
          priority_queue<int> pq ; 
          for(int i=0; i < s.size() ; i++) { 
              mp[s[i]]++ ; 
          } 
          for(auto it : mp) { 
               pq.push(it.second) ; 
          } 
          int x = k ; 
          long long cnt = 0 ; 
          while(k > 0) { 
               int fi = pq.top() ; 
               pq.pop() ; 
               --fi ; 
               --k ; 
               pq.push(max(0,fi)) ;  
          } 
        while(!pq.empty()) { 
              int top = pq.top() ; 
              pq.pop() ; 
              cnt += pow(top,2) ; 
        } 
        cout << cnt << ' ' ; 
        cout << endl ; 
      }
}