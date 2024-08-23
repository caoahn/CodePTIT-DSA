#include<bits/stdc++.h> 
using namespace std ;
#include<bits/stdc++.h> 
using namespace std ;  
int check1(long long n) { 
      while(n!= 0) { 
          int x = n % 10 ; 
          if(x != 2 && x != 3 && x != 5 && x != 7 )  { 
               return 0 ; 
          } 
          n /= 10 ; 
      } 
      return 1 ; 
}
int check2(long long n,int n1) {  
    map<int,int> mp ;  
    int cnt = 0 ; 
      while(n!= 0) { 
          int x = n % 10 ; 
           mp[x]++ ; 
          n /= 10 ; 
      } 
      if(mp.size() == n1) { 
          return 1 ; 
      } 
      else return  0 ; 
}  
int check3(long long n) { 
   int x = n % 10  ; 
   if(x % 2 == 0) return  0 ; 
   else return 1 ; 
}
int main() { 
      int n ; 
      cin >> n ; 
      stack<long long> st ; 
      int a[4]= {2,3,5,7} ; 
      st.push(2) ; 
      st.push(3) ; 
      st.push(5) ; 
      st.push(7) ;  
      int cnt = 0 ;  
      vector<long long> v ; 
      while(1) { 
            long long x = st.top() ; 
            st.pop() ;  
            string x1 = to_string(x) ; 
            if(x1.size() == n) break ; 
            if(check1(x) && check2(x,n) && check3(x)) { 
                  v.push_back(x) ; 
            } 
            st.push(2) ; 
           st.push(3) ; 
         st.push(5) ; 
         st.push(7) ; 
    } 
      for(auto it : v) { 
         cout << it << endl ; 
      }
}