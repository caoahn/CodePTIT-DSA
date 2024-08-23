#include<bits/stdc++.h> 
using namespace std ;
struct Node { 
   int c; 
   Node *l ; 
   Node *r ; 
}; 
typedef struct Node* tree ; 
tree makeNode (int u) { 
    tree res = new Node ; 
    res->c = u ; 
    res->l = NULL ; 
    res->r = NULL ; 
    return res  ; 
} 
void build(tree &t,int pa,int ci,char c) { 
    if(t!= NULL) { 
        if( t->c == pa) { 
            if(c == 'L') { 
               t->l = makeNode(ci) ; 
			} 
			else t->r = makeNode(ci) ; 
		}
		build(t->l,pa,ci,c) ; 
		build(t->r,pa,ci,c) ; 
	}
}
void in(tree t) { 
  queue<tree> q ; 
  q.push(t) ; 
  tree top ; 
  while(!q.empty()) { 
      top = q.front() ; 
      q.pop() ; 
      cout << top->c <<" " ; 
      if(top->l != NULL) { 
         q.push(top->l) ; 
	  } 
	  if(top->r != NULL) { 
	     q.push(top->r) ; 
	  }
  }
} 
int main() { 
  int t ;
  cin >> t ; 
  while(t--) { 
      int n ;
      cin >> n ; 
      int pa,ci ; 
      char c ; 
      cin >> pa >> ci >> c; 
      tree head = NULL ; 
      head = makeNode(pa) ; 
      build(head,pa,ci,c) ; 
      --n ; 
      while(n--) { 
        cin >> pa >> ci >> c;   
        build(head,pa,ci,c) ; 
	  } 
	  in(head) ; 
	  cout << endl ; 
  }
}
