#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int clheight(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=clheight(root->left);
     int rheight=clheight(root->right);
     return max(lheight,rheight)+1;
}
    int cldiameter(Node* root){
        if(root==NULL){
            return 0;
        }
    int lheight=clheight(root->left);
     int rheight=clheight(root->right);
     int currdiameter = lheight+rheight+1;
     
     int ldiameter = cldiameter(root->left);
     int rdiameter = cldiameter(root->right);
     return max(currdiameter,max(ldiameter,rdiameter));
}
int main(){
     Node* root=new Node(1);
     root->left=new Node(2);
     root->right=new Node(3);
     root->left->left=new Node(4);
     root->left->right=new Node(5);
     root->right->left=new Node(6);
     root->right->right=new Node(7);
     cout<<clheight(root)<<"\n";
     cout<<cldiameter(root)<<"\n";
     return 0;
}