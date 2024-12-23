#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *build(node *root)
{
   cout << "Enter data : ";
    int data;
    cin >> data;
     root = new node(data);
   
    if (data == -1)
    {
        return NULL;
    }
    cout << "ENter data for inserting in Left of " << data << " : ";
    root->left = build(root->left);
    cout<<endl;
    cout << "ENter data for inserting in Right of " << data << " : " ;
    root->right = build(root->right);
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{

    node *root = NULL;
    root = build(root);
    cout << "Inorder Traversal " << endl;

    inorder(root);

    cout << "Preorder Traversal " << endl;

    preorder(root);
    cout << "postorder Traversal " << endl;
    postorder(root);

    return 0;
}