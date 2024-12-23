#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next = NULL;
    void insertion(node *head){
        int val;
        cout<<"Enter the Value : "<<endl;
        cin>>val;
        node *newnode = new node;
        node* temp;
        temp = head;
        newnode->data = val;
        while (temp-> next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void display(node *head){
        while (head != NULL)
        {
            cout<<" "<<head->data;
            head = head->next;
        }
        
    }
    void deletion(int position, node * head){
        if (position == 1)
        {
            node* temp = head;
            head = head->next;
            temp-> next = NULL;
            delete temp;
        }
        else
        {
            
            node* curr = head;
            node *prev = NULL;
            int cnt = 1;
            while (cnt <= position)
            {
                prev = curr;
                curr = curr-> next;
                cnt++; 
            }
            
        prev-> next = curr -> next;
        curr->next = NULL;
        delete curr;
        }
        
        
    }
        
    
};

int main()
{
    node obj;
    node *head = new node;
    int num;
    cout << "Enter the Number of Node " << endl;
    cin >> num;
    while (num > 0)
    {
        obj.insertion(head);
        num--;
    }
    
    obj.deletion(4, head);
obj.display(head);
    return 0;
}