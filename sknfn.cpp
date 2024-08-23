#include<bits/stdc++.h> 
using namespace std;  
bool cmp(pair<int,int> p1,pair<int,int> p2) { 
    return p1.second < p2.second ; 
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
      int n ; 
    cin >> n ; 
    vector<pair<int,int>> v(n); 
    for(int i=0; i < n ; i++) cin >> v[i].first ; 
    for(int i=0; i < n ; i++) cin >> v[i].second ;  
    sort(v.begin(),v.end(),cmp) ; 
    int cnt = 1 ; 
    int res = v[0].second ; 
    for(int i=1 ; i< n ;i++) { 
      if(v[i].first >= res) { 
         ++cnt ; 
         res = v[i].second ; 
	  }
	} 
	cout << cnt << endl ; 
   }
}
