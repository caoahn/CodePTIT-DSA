#include<bits/stdc++.h> 
using namespace std ;  
int main() { 
          int n; 
          cin >> n  ;
          cin.ignore() ; 
          vector<pair<int,int>> edge ;  
          for(int i=1; i <= n ; i++) { 
             string s; 
             getline(cin,s) ; 
             string tmp ; 
             stringstream ss(s) ; 
             while(ss >> tmp) { 
                 if(stoi(tmp) > i ) { 
                      edge.push_back({i, stoi(tmp)}) ; 
                 }
          } 
    }
          for(auto it : edge) { 
              cout << it.first<<" " << it.second << endl ; 
          }
}
// 3
// 2 3
// 1 3
// 1 2