#include<bits/stdc++.h> 
using namespace std; 
struct dta { 
      int val ; 
      int dem ; 
  } ;
int bfs(int a,int b)  { 
       set<int> se;   


       se.insert(a) ; 
       queue<dta> q ; 
       q.push({a,0}) ; 

       while(q.size() > 0 ) {  

          dta tmp = q.front();  
          q.pop() ;  


          if(tmp.val == b) { 
              return tmp.dem ; 
          } 
          if(tmp.val*2 == b || tmp.val-1 == b) return tmp.dem + 1 ; 

          if(se.find(tmp.val*2) == se.end() && tmp.val < b) {  
              
               q.push({tmp.val*2,tmp.dem+1}) ;  

               se.insert(tmp.val*2) ; 
          }
          if( se.find(tmp.val-1) == se.end()  && tmp.val-1 > 0 ) { 
               q.push({tmp.val-1,tmp.dem+1}) ; 
               se.insert(tmp.val-1) ; 
          }
       } 
}
int main()  { 
      int t ; 
      cin >> t; 
      while(t--) { 
           int a,b ; 
           cin >> a >> b ; 
           cout << bfs(a,b) << endl ; 
      }
}