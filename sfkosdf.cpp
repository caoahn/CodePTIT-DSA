#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node *makeNode(int x){
	node *newNode = new node;
	newNode->data = x;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
void build(node *root , int x){
	if(root == NULL){
		root = makeNode(x);
	}
	else{
		if(root->data > x){
			build(root->left , x);
		}
		else build(root->right , x);
	}
}
void inorder(node *root){
	cout << root->data << " ";
	if(root->left != NULL){
		inorder(root->left);
	}
	if(root->right != NULL){
		inorder(root->right);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		node *root = NULL;
		while(n--){
			int x;
			cin >> x;
			build(root , x);
		}
		inorder(root);
		cout << endl;
	}
}
