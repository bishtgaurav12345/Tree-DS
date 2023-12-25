#include <iostream>
using namespace std;


struct node {
  int data;
  node *left, *right;
  node(int d){
    data= d;
    left=right=NULL;
  };
};


void printTree(node *root){
  if(root ==NULL){
    return;
  }
  cout<<root->data<<endl;
  printTree(root->left);
  printTree(root->right);
}


int main() 
{
  node *root = new node(1);
  root->left= new node(2);
  root->right= new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  root->right->left = new node(6);
  root->right->right = new node(7);
  
  printTree(root);
}