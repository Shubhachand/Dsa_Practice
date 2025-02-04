#include <iostream>
#include<queue>
using namespace std;


class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(int data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
};
int findPosition(int arr[], int n , int element){
  for(int i=0;i<n;i++){
    if(arr[i]==element){
      return i ;
    }
  }
  return -1;
}
Node* buildTreeFromPreOrderPostOrder(int inorder[],int preOrder[],int size,int &preIndex,int inorderStart,int inorderend){
  //base case
  if(preIndex >= size || inorderStart > inorderend){

    return NULL;
  } 

  // stepA
  int element = preOrder[preIndex++];
  Node* root = new Node(element);

  int pos =    findPosition(inorder , size , element);
  // step B 
      root->left = buildTreeFromPreOrderPostOrder(inorder,preOrder,size,preIndex,inorderStart,pos-1);
      root->right = buildTreeFromPreOrderPostOrder(inorder,preOrder,size,preIndex,pos+1,inorderend);
      return root;
}

void levelOrderTraversal(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
}
int main() {
  int inorder[] = {40,20,50,10,60,30,70};
  int preOrder[] = {10,20,40,50,30,60,70};
  int size = 7;
  int preIndex = 0;
  int inorderStart= 0;
  int inorderend = size-1;
  Node* root = buildTreeFromPreOrderPostOrder(inorder,preOrder,size,preIndex,inorderStart,inorderend);
  cout<<"printing level order traversal"<<endl;  
    levelOrderTraversal(root);

  return 0;
}