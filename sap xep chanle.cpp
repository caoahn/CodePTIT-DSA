#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int n ; 
   cin >> n ; 
   int a[n] ; 
   for(int i= 0 ; i < n ; i++) { 
    cin >> a[i] ; 
   }  
   vector<int> v1,v2 ; 
   for(int i=0 ; i < n ; i++) { 
     if(i % 2 != 0) { 
       v1.push_back(a[i]) ; 
	 } 
	 else v2.push_back(a[i]) ; 
   }   
   sort(v2.begin(),v2.end())  ; 
   sort(v1.begin(),v1.end(),greater<int>() ) ; 
    for (int i = 0; i < min(v1.size(), v2.size()); i++)
    {
        cout << v2[i] << " " << v1[i] << " ";
    }
    if (n % 2)
        cout << v2[v2.size() - 1];
}
