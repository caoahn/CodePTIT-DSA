#include<bits/stdc++.h> 
using namespace std ; 
struct Node { 
    int data ; 
    Node *next ; 
}; 
typedef struct Node* node ; 
// cap phat dong 
node makeNode(int x) { 
   node tmp = new Node() ; 
   tmp->data = x  ; 
   tmp->next = NULL ; 
   return tmp ; 
} 
// kiem tra rong 
bool check(node a) { 
  return a== NULL ; 
} 
//Kiem tra size cua node 
int Size(node a) { 
   int cnt = 0 ; 
   while(a!= NULL) { 
     ++cnt ; 
     a= a->next ; 
   } 
   return cnt ; 
} 
//Them 1 phan tu vao dau dslk 
void insertFirst(node &a,int x) { 
   node tmp = makeNode(x) ; 
   if(a == NULL) { 
      a= tmp ; 
   } 
   else { 
      tmp->next = a ; 
      a = tmp ; 
   }
} 
// them 1 phan tu vao cuoi danh sach 
void insertLast(node &a,int x) { 
    node tmp = makeNode(x)  ; 
    if(a == NULL) { 
       a = tmp ; 
	} 
	else { 
	   node p = a ; 
	   while(p->next != NULL) { 
	        p=p->next ; 
	   } 
	   p->next = tmp ; 
	}
} 
// Them 1 phan tu vao giua dslk 
void insertMiddle(node &a,int x,int pos) { 
    int n = Size(a) ; 
	if(pos <= 0 || pos > n + 1) { 
	   cout <<"ko hop le" << endl ; 
	}  
	if(pos == 1) { 
	    insertFirst(a,x) ; 
	    return ; 
	} 
	else if(pos == n+1) { 
	   insertLast(a,x) ; 
	} 
	node p = a ; 
	for(int i=1 ; i < pos-1 ; i++) { 
	  p = p->next ; 
	}
	node tmp = makeNode(x)  ; 
	tmp->next = p->next ; 
	p->next = tmp ; 
} 
// xoa 1 phan tu dau o dslk  
void deleteFirst(node &a) { 
   if(a == NULL) return ; 
   a = a->next ; 
}  
// xoa 1 phan tu cuoi dslk  
void deleteLast(node &a) { 
    if(a== NULL) return ; 
    node truoc = NULL ; 
    node sau = a ; 
    while(sau->next != NULL) { 
        truoc = sau ; 
        sau = sau->next ; 
	} 
	if(truoc == NULL) { 
	    a == NULL ; 
	} 
	else { 
	  truoc->next = NULL; 
	}
}
//xoa o giua 
void deleteMiddle(node &a,int pos) { 
    if(pos <= 0 || pos > Size(a)) { 
         return ; 
	} 
	node truoc = NULL ; 
	node sau = a;  
	for(int i=1 ; i < pos ; i++) { 
	  truoc = sau  ; 
	  sau = sau->next ; 
	} 
	if(truoc == NULL) { 
	   a = a->next ; 
	} 
	else { 
	  truoc->next = sau->next; 
	}
} 
//in dslk 
void in(node a) { 
   while(a!= NULL) { 
     cout << a->data <<" " ; 
    a = a->next ; 
   } 
   cout << endl ; 
} 
//sap xep dslk 
void sapxep(node &a) { 
    for(node p=a ; p->next!= NULL ; p=p->next) { 
        node min = p ; 
        for(node q = p->next ; q != NULL ; q=q->next) { 
            if(q->data < min->data)  { 
               min = q ; 
			} 
		} 
		int tmp = min->data ; 
		   min->data = p->data ; 
		   p->data=tmp ; 
	}
} 
int main() { 
   node head = NULL ; 
   while(1) { 
       cout <<"-----------Menu------------" << endl ;  
       cout <<"1.Chen phan tu vao dau danh sach" << endl ; 
       cout <<"2.Chen phan tu vao cuoi danh sach" << endl ; 
       cout <<"3.Chen phan tu vao giua danh sach" << endl ; 
       cout <<"4.Xoa phan tu dau ds" << endl ; 
       cout <<"5.xoa phan tu o cuoi danh sach" << endl ;  
       cout <<"6.xoa phan tu o giua danh sach" << endl ;  
       cout <<"7.Duyet lai danh sach" << endl ; 	  
       cout <<"8.Sap xep danh sach" << endl ; 
       cout <<"0.Exit" << endl ; 
       cout <<"------------------------------------------" << endl ; 
       cout <<"Nhap lua chon cua ban: "  ; 
       int lc ; 
       cin >> lc ; 
       if(lc == 1) { 
           int x ; 
           cout <<"Nhap gia tri can them vao: "  ; 
           cin >> x ; 
           insertFirst(head,x) ; 
	   } 
	   else if(lc == 2) { 
	        int x ; 
           cout <<"Nhap gia tri can them vao: "  ; 
           cin >> x ; 
           insertLast(head,x) ; 
	   } 
	   else if(lc == 3) { 
	       int x ; 
           cout <<"Nhap gia tri can them vao: "  ; 
           cin >> x ;   
           int pos ; 
           cout <<"Nhap vi tri can chen vao: " ; 
           cin >> pos ; 
           insertMiddle(head,x,pos) ; 
	   } 
	   else if(lc == 4) { 
	      deleteFirst(head) ; 
	   } 
	   else if(lc == 5) { 
	     deleteLast(head) ; 
	   } 
	   else if(lc == 6) { 
	     int pos ; 
	     cout<<"nhap vi tri can xoa: " ; 
	     cin >> pos ; 
	     deleteMiddle(head,pos) ; 
	   } 
	   else if(lc == 7) { 
	     in(head) ; 
	   } 
	   else if(lc == 8) { 
	     sapxep(head) ; 
	   } 
	   else if(lc == 0) { 
	     break ; 
	   } 
   } 
   return 0 ; 
}
