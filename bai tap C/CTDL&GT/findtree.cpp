#include<bits/stdc++.h>
#define maxn 10000
#define oo 1000000007
#define ll long long
#define ld long double
#define FOR(i,a,b) for(int i=(a), ii=(b); i<=ii; i++)
#define FORD(i,b,a) for(int i=(b), ii=(a); i>=ii; i--)

using namespace std;

typedef struct Node {
	ll Data;
	struct Node *left, *right;
} Node;

Node *T = NULL;

Node* creatNode(ll x){
	Node *P;
	P = new Node;
	P->Data = x;
	P->left = NULL;
	P->right = NULL;
	return(P);
}

Node* FindNode(ll Data){
	Node *P, *Q;
	P = T;
	Q = P;
	while (P!=NULL) {
		if (Data < P->Data) {
			Q = P;
			P = P->left;
		}
		else{
			Q = P;
			P = P->right;
		}
	}
	return(Q);
}

int InsertNode(Node *P){
	Node *Q;
	if (T == NULL) {
		T=P;
		return(0);
	}
	Q = FindNode(P->Data);
	if (P->Data < Q->Data) Q->left = P;
	else
		Q->right = P;
	return 0;
}
int PrintTree(Node *P){
	if (P == NULL) return 0;
	cout << P->Data;
	PrintTree(P->left);
	PrintTree(P->right);
	return 0;
}

int main(){
	ll n, x;
	Node *P;
	cin >> n;
	FOR(i,0,n-1){
		cin >> x;
		P = creatNode(x);
		InsertNode(P);
	}
	PrintTree(T);
	return 0;
}
