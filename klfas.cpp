#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *insert(node* root, int d){
    if (root == NULL)
    {
        root = new node(d);
       return root;
    }
    if (d < root->data)
    {
        root->left = insert(root->left,d);
    }
    else
    {
        root->right = insert(root->right,d);
    }
    return root;
}
void input(node* &root){
    int d;
    cin>>d;
    while (d != -1)
    {
        root = insert(root, d);
        cin>>d;
    }   
}
node *preorder(node *root){
    if (root == NULL)
    {
       return root;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right); 
}
node *search(node *root, int x){
    if (root == NULL)
    {
        cout<<"No Data "<<endl;
        return NULL;
    }
    if (root->data == x)
    {
        cout<<" Found ";
        return root;
    }
    if (x<root->data)
    {
        root->left = search(root->left, x);
    }else
    {
      root->left = search(root->left, x);
    }   
    return root;   
}
node *maximum(node *root){
    node *temp = root->right;
    while (temp->right !=NULL)
    {
        temp = temp->right;
    }
    return temp;
}

node *dell(node *root, int val)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data == val)
    {
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root;
            temp = temp->left;
              delete root;
              return temp;        
        }
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root;
           temp = temp->right;
              delete root;
              return temp;        
        }
        if (root->left != NULL && root->right != NULL){
            int max = maximum(root->left)->data;
            root->data = max;
            root->left = dell(root->left,max);
            return root;
        }
     }
     else if(root->data >val){
            root->left = dell(root->left, val);
            return root;
        }
        else
        {
           root->right = dell(root->right, val);
           return root;
        }
    
    
}
int main()
{
 int x, val;
 node *root = NULL;
 cout<<"Enter data :";
 input(root);
 cout<<"Your Preorder Traversl is : ";
preorder(root);
cout<<endl;
cout<<"Enter value to find : "<<endl;
cin>>x;
search(root, x);
cout<<endl;
cout<<"Your maximum value is : ";
cout<<maximum(root)->data;
cout<<endl;
cout<<"Enter value tooo Dellete : "<<endl;
cin>>val;
dell(root, val);
cout<<"-------After Dellition ------"<<endl;
cout<<"Your Preorder Traversl is : ";
preorder(root);
cout<<endl;
 return 0;
}