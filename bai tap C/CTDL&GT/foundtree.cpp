#include <bits/stdc++.h>
#define Data long long
using namespace std;
typedef struct Node{
    Data key;
    struct Node * left,* right;
}Node;
Node *T = NULL;

Node* creatNode(Data x){
	Node *P;
	P = new Node;
	P->key = x;
	P->left = NULL;
	P->right = NULL;
	return(P);
}
Node * FindNode(Data x)
{
    Node *p, *Q;
    p=T;
    while(p!=NULL)
    {
        if(x<p->key)
        {
            Q = p;
            p= p->left;
        }
        if(x>p->key)
        {
            Q = p;
            p=p->left;
        }
    }
    return Q;
}
int InsertNode(Node *P){
	Node *Q;
	if (T == NULL) {
		T=P;
		return(0);
	}
	Q = FindNode(P->key);
	if (P->key < Q->key) Q->left = P;
	else
		Q->right = P;
	return 0;
}
int PrintTree(Node *P){
	if (P == NULL) return 0;
	cout << P->key;
	PrintTree(P->left);
	PrintTree(P->right);
	return 0;
}
int main()
{

}
