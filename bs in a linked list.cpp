#include <iostream>

using namespace std;


struct node {
int data ;
node *left,*right;
};
node*root =NULL;
node* getnewnode (int data)
{
    node *temp =new node();
    temp->left=temp->right=NULL;
    temp->data =data;
    return temp ;
}
node *insert(node *root ,int x)
{  if (root==NULL)
  {node *root =getnewnode(x);
  return root;}
  else if (x<root->data)
  {
      root->left=insert(root->left,x);
  }

else if (x>root->data )
{
    root->right=insert(root->right,x);
}
return root ;
}
void print (node *root)
{ if (root!=NULL)
    {cout<<root->data<<endl;
    print(root->left);
    print (root->right);
}
}

void search(node*root,int x  )
{
if(root==NULL)
    {
return ;
    }
if(x<root->data)
search(root->left,x);
if(x>root->data)
search(root->right,x);
if(x==root->data)
cout<<"mil gaya ji appka element "<<x<<endl;
}

int main ()
{
    node *root =NULL ;
 root =  insert(root,10);
    insert(root,6);
    insert(root,12);
    insert(root,15);
    insert(root,11);
    print(root);
    search(root,10);


}
