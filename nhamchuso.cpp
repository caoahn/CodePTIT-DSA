#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
     string s1,s2  ; 
     cin >> s1 >> s2 ;  
     string s3 = s1 ; 
     string s4 = s2 ; 
     for(int i=0; i < s3.size() ; i++) { 
          if(s3[i] =='6') { 
              s3[i] = '5' ; 
          }
     } 
     for(int i=0 ; i < s4.size() ; i++) { 
           if(s4[i] == '6') { 
              s4[i] = '5' ; 
           }
     }  
     cout  << stoll(s3) + stoll(s4) <<' ' ; 
     for(int i=0; i < s1.size() ; i++) { 
           if(s1[i] == '5') { 
              s1[i] = '6' ; 
           }
     } 
     for(int i=0; i < s2.size() ; i++) { 
          if(s2[i] == '5') { 
              s2[i] ='6' ; 
          }
     }   
     cout << stoll(s1) + stoll(s2) << endl; 
} 