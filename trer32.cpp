#include<bits/stdc++.h> 
using namespace std ; 
struct node { 
     int val ; 
     node *l ;
     node *r ; 
     node(int val) { 
         this->val = val ; 
         this->l = NULL ; 
         this->r = NULL ; 
	 }
}; 
void inorder(node* head) { 
    if(head) { 
        inorder(head->l) ; 
        cout <<head->val << " " ;  
        inorder(head->r) ; 
	}
} 

int main() { 
    int t ;
	cin >> t ;
	while(t--) { 
	   int n ; 
	   int x = 2; 
	   cin >> n ; 
	   int a[n+5] ; 
	   for(int i=1 ;i<= n ; i++) cin >> a[i] ; 
	   node* head = new node(a[1]) ; 
	   queue<node*> q ; 
	   q.push(head) ; 
	   while(q.size()) { 
	       node* m = q.front() ; 
	       q.pop() ; 
	       if(x <= n) { 
	           m->l = new node(a[x++]) ; 
	           q.push(m->l) ; 
		   } 
		   if(x <= n) { 
		       m->r = new node(a[x++]) ; 
		       q.push(m->r) ; 
		   }
	   } 
	   inorder(head) ; 
	   cout << endl ; 
	}   
}
