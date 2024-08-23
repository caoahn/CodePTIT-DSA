#include<bits/stdc++.h> 
using namespace std;  
struct Node { 
   int c ;
   Node *l ;
   Node *r ; 
}; 
typedef Node* tree ; 
tree makeNode(int x) { 
      tree res = new Node ; 
	  res-> c = x ;  
	  res->l = NULL ; 
	  res->r = NULL ; 
	  return res ;  
}  
void them(tree &t, int x) { 
      if(t  == NULL) { 
           t = makeNode(x) ; 
	 } 
	 else { 
	      if(t->l == NULL)  { 
	         them(t->l,x) ; 
		  } 
		 else  if(t->r== NULL) { 
		    them(t->r,x) ; 
		  } 
		  else { 
		    them(t->l,x) ; 
		  }	  
		  
	 }
}  
void duyetNLR(tree t) { 
   if(t != NULL) { 
      duyetNLR(t->l) ; 
        cout << t->c << ' ' ; 
      duyetNLR(t->r) ;  
   }
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) {  
       tree head = NULL ; 
       int n ; 
       cin >> n ; 
        while(n--) { 
            int z ; 
            cin >> z ; 
            them(head,z) ; 
		}
	   duyetNLR(head) ; 
	   cout << endl ; 
   }
}
