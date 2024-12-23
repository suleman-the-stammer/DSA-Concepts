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
node *insertbst(node *root, int d)
{
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }
    if (d < root->data)
    {
        root->left = insertbst(root->left, d);
    }
    else
    {
        root->right = insertbst(root->right, d);
    }
    return root;
}
void input(node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertbst(root, data);
        cin >> data;
    }
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
//     --- Search Using Recursion ---
node *search(node *&root, int x)
{
    if (root == NULL)
    {
        cout << "Cannot find it " << endl;
        return root;
    }
    if (root->data == x)
    {
        cout << "Mill giya " << endl;
        return root;
    }

    if (root->data > x)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}
// ---- Searching Without Recursion ---
// bool search(node* &root,int  x){

//     node *temp = root;
//     while (temp != NULL)
//     {
//         if (temp->data == x)
//         {
//             return temp;
//         }

//         if (temp->data > x)
//         {
//             temp = temp->left;
//         }
//         else
//         {
//             temp = temp->right;
//         }

//     }
//     return false;

// }
node *minimum(node *root)
{
    node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
node *maximum(node *root)
{
    node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}
 
node *dellete(node *root, int val)
{
    // base case
    if (root == NULL)
    {
       
        return root;
    }
    if (root->data == val)
    {
        if (root->left != NULL && root->right == NULL)
    {
        node *temp = root->left;
        delete root;
        return temp;
    }

    // right child
    if (root->left == NULL && root->right != NULL)
    {
        node *temp = root->right;
        delete root;
        return temp;
    }

    //               -----2 CHild
    if (root->left != NULL && root->right != NULL)
    {
        int mini = minimum(root->right)->data;
        root->data = mini;
        root->right = dellete(root->right, mini);
        return root;
    }
    }
    else if (root->data > val)
    {
        root->left = dellete(root->left, val);
        return root;
    }
    else
    {
        root->right = dellete(root->right, val);
        return root;
    }
    
    //                          -----one child case
    // left child
    
}
int main()
{
    int val;
    int x;
    node *root = NULL;
    cout << "Enter data to Create a BST " << endl;

    input(root);

    cout << "Your Preorder BST is " << endl;
    preorder(root);
    cout << endl;
    cout << "Enter value to find from BST : ";
    cin >> x;
    search(root, x);
    // cout << "The Minimum value of BST is : ";
    // cout << minimum(root)->data;

    // cout << "The Maximum value of BST is : ";
    // cout << maximum(root)->data;
    // cout << endl;
    cout << "Enter the value for Deletion in BST : ";
    cin >> val;
    dellete(root, val);
    cout << endl;
    cout << "After delletion the preorder BST is  " << endl;
    preorder(root);
    return 0;
}