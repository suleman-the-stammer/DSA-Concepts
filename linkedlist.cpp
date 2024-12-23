#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev = NULL;
    node *next = NULL;

    void insetion(node *&head)
    {
        int val;
        cout << "Enter Data " << endl;
        cin >> val;
        node *newnode = new node;

        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        newnode->data = val;
    }

    void display(node *head)
    {
        while (head != NULL)
        {
            cout << "  " << head->data;
            head = head->next;
        }
    }
    void deletion(node *head, int position)
    {
        if (position == 1)
        {
            node *temp = head;
            head->next->prev = NULL;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        node *curr = NULL;
        node *prev = NULL;
        int cnt = 1;
        while (cnt <= position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->next = NULL;

        curr->prev = NULL;

        delete curr;
    }
};
int main()
{
    int value;
    int rush = 0;
    node obj;
    node *head = new node;
    cout << "Enter Number Of Nodes You WaNT tO aDD " << endl;
    cin >> rush;
    while (rush > 0)
    {
        obj.insetion(head);
        rush--;
    }
    obj.display(head);
    obj.deletion(head, 3);
    return 0;
}