#include<bits/stdc++.h> 
using namespace std ; 
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second > b.second) return 1;
    else if(a.second < b.second) return 0;
    if(a.first < b.first) return 1;
    return 0;
}
int main() { 
  int t ; 
  cin >> t; 
  while(t--) { 
     int n ; 
     cin >> n ; 
     int a[n] ; 
	 map<int,int> mp ; 
     for(int i=0; i <n ;i++) { 
        cin >> a[i] ;  
        mp[a[i]]++ ; 
	} 
	 vector<pair<int,int>> v1;  
   for(auto x : mp) { 
      v1.push_back(make_pair(x.first,x.second)) ; 
   }
	sort(v1.begin(),v1.end(),cmp) ; 
	for(auto i : v1) { 
	  for(int j=1 ; j <= i.second ; j++) { 
	    cout << i.first <<" " ; 
	  }
	} 
	cout << endl ;  
  } 
  return 0 ; 	
}
