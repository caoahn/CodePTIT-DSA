#include<bits/stdc++.h> 
using namespace std ; 
int n ; 
int a[1001] ;   
vector<vector<string>> v ; 
void Try(int i, int pos ,  vector<string> res ) { 
   for(int j=i+1 ; j<= n ; j++) { 
       res.push_back(to_string(a[j])) ; 
       if(a[j] > a[i]) { 
      if(pos >= 1)  v.push_back(res) ; 
	   } 
	Try(j,pos + 1 , res) ;  
	   res.pop_back() ; 
   }
}
int main() { 
   cin >> n ; 
   for(int i=1 ; i<= n ; i++) { 
      cin >> a[i] ; 
   } 
   v.clear() ; 
   vector<string> res ; 
   Try(0,0, res) ; 
   sort(v.begin(),v.end()) ; 
   for(int i =0 ; i < v.size() ; i++) { 
      for(int j=0; j < v[i].size() ; j++) { 
         cout << v[i][j] << " " ; 
	  } 
	  cout << endl ; 
   }
}
