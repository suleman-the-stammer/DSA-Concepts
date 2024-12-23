#include <iostream>

#include<string>
using namespace std;
class library
{
private:
	struct Node
	{
		int id = 0;
		string name;
		string author;
		string publisher;
		Node* next = NULL;
		Node* prev = NULL;

	};
public:
	Node* head = NULL;
	Node* tail = NULL;
	void menu();
	void insert();
	void search();
	void update();
	void del();
	void show();
	void first_book();
	void last_book();
	void total_books();

};

void library::menu()
{
p:
	system("cls");
	int choice;
	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
	cout << "\n\n\t\t\t===================================";
	cout << "\n\n 1. INSERT NEW BOOK";
	cout << "\n\n 2. SEARCH BOOK";
	cout << "\n\n 3.UPDTAE BOOK";
	cout << "\n\n 4.DELETE BOOK";
	cout << "\n\n 5.SHOW ALL BOOKS";
	cout << "\n\n 6. SEE TOTAL BOOKS IN LIBRARY";
	cout << "\n\n 7. SEE OUR OLDEST BOOK OF LIBRARY";
	cout << "\n\n 8. SEE OUR LATEST BOOK OF LIBRARY";
	cout << "\n\n 9. EXIT";
	cout << "\n\n ENTER YOUR CHOICE : ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		insert();
		break;
	case 2:
		search();
		break;
	case 3:
		update();
		break;
	case 4:
		del();
		break;
	case 5:
		show();
		break;
	case 6:
		total_books();
		system("CLS");

	case 7:
		last_book();
		break;
	case 8:
		first_book();
		break;
	case 9:
		system("cls");
		cout << "\n\n=========!!!!!!!!!!    ALLAH HAFIZ      !!!!!!!!!!!==========\n\n\n";
		cout << "=========!!!!!!!!!!    SEE YOU SOON     !!!!!!!!!!!==========\n\n\n\n\n\n";
		exit(0);
		break;
	default:
		cout << "\n\n Invalid Choice... Please Try Again.....";
	}
	goto p;


}


void library::total_books()
{

	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
	cout << "\n\n\t\t\t===================================\n\n";
	if (head == NULL)
	{
		system("CLS");
		cout << "\n\n\t\t\t=====!!!!!!!     OOPS: WE HAVE NO BOOK    !!!!!!!=====";
		cout << "\n\n\t\t\t=====!!!!!!!!!   PRESS ANY KEY FOR MENU   !!!!!!!!=====\n\n";
		int s;	cin >> s;
		menu();

	}
	system("CLS");
	cout << "\t\t\t=====!!!!!!!!!   OUR TOTAL BOOK ARE  !!!!!!!!=====\n\n";

	Node* temp = head;
	int i = 0;
	while (temp != NULL)
	{
		temp = temp->prev;
		i++;
	}

	cout << "\t\t\t\t\t\t=====" << i << " ===== ";

	cout << "\n\n\t\t\t=====!!!!!!!   PRESS ANY KEY FOR MENU    !!!!!!!!=====";
	int f;
	cin >> f;


}

void library::first_book()
{


	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
	cout << "\n\n\t\t\t===================================\n\n";
	if (head == NULL)
	{
		cout << "\n\n\t\t\t=====!!!!!!!     OOPS: WE HAVE NO BOOK    !!!!!!!=====";
		cout << "\n\n\t\t\t=====!!!!!!!!!   PRESS ANY KEY FOR MENU   !!!!!!!!=====\n\n";
		int s;	cin >> s;
		menu();

	}
	system("CLS");
	cout << "\n\n\t\t\t=====!!!!!!!!!   OUR LATEST BOOK IS   !!!!!!!!=====\n\n";



	cout << "\n\n Book ID: " << head->id;
	cout << "\n\n Book Name: " << head->name;
	cout << "\n\n Book Author Name: " << head->author;
	cout << "\n\n Book Publisher Name: " << head->publisher;


	cout << "\n\n\t\t\t=====!!!!!!!   PRESS ANY KEY FOR MENU    !!!!!!!!=====";
	int f;
	cin >> f;


}


void library::last_book()
{


	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
	cout << "\n\n\t\t\t===================================\n\n";
	if (head == NULL)
	{
		cout << "\n\n\t\t\t=====!!!!!!!     OOPS: WE HAVE NO BOOK    !!!!!!!=====";
		cout << "\n\n\t\t\t=====!!!!!!!!!   PRESS ANY KEY FOR MENU   !!!!!!!!=====\n\n";
		int s;	cin >> s;
		menu();

	}
	system("CLS");
	cout << "\n\n\t\t\t=====!!!!!!!!!   OUR OLDEST BOOK IS   !!!!!!!!=====\n\n";



	cout << "\n\n Book ID: " << tail->id;
	cout << "\n\n Book Name: " << tail->name;
	cout << "\n\n Book Author Name: " << tail->author;
	cout << "\n\n Book Publisher Name: " << tail->publisher;


	cout << "\n\n\t\t\t=====!!!!!!!   PRESS ANY KEY FOR MENU    !!!!!!!!=====";
	int f;
	cin >> f;

}

void library::insert()
{
	system("cls");
	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
	cout << "\n\n\t\t\t===================================";
	Node* new_node = new Node;
	cout << "\n\n BOOK CODE: ";
	cin >> new_node->id;
	cout << "\n\n NAME OF BOOK: ";
	cin >> new_node->name;
	cout << "\n\n AUTHOR NAME : ";
	cin >> new_node->author;
	cout << "\n\n PUBLISHER NAME: ";
	cin >> new_node->publisher;
	new_node->next = NULL;
	if (head == NULL) {

		tail = head = new_node;
		new_node->prev = NULL;

	}
	else {
		head->next = new_node;
		new_node->prev = head;
		head = new_node;

	}
	system("CLS");
	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
	cout << "\n\n\t\t\t===================================\n\n\n\n\n\n";





	cout << "\n\n\t\t\t ======!!!!!     BOOK INSERTED SUCCESSFULLY    !!!!!!======\n\n\n";
	cout << "\n\n\t\t\t ======!!!!! PRESS 0 TO INSERT DATA FOR OTHER BOOK :  !!!!!!======\n\n\n";
	cout << "\n\n\t\t\t ======!!!!! PRESS OTHER INTEGER FOR MENU :  !!!!!!======\n\n\n";

	int a;
	cin >> a;
	if (a == 0)
	{
		insert();
	}
	else
	{
		menu();

	}
}
void library::search()
{

	system("cls");
	int b_id;
	int found = 0;
	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
	cout << "\n\n\t\t\t===================================";
	if (head == NULL)
	{
		cout << "\n\n NO INSERTED DATA OF BOOKS....";

	}
	else
	{
		cout << "\n\n BOOK ID: ";
		cin >> b_id;
		Node* ptr = head;
		while (ptr != NULL)
		{
			if (b_id == ptr->id)
			{
				system("cls");
				cout << "\n\n\t\t\t===================================";
				cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
				cout << "\n\n\t\t\t===================================";
				cout << "\n\n Book ID: " << ptr->id;
				cout << "\n\n Book Name: " << ptr->name;
				cout << "\n\n Book Author Name: " << ptr->author;
				cout << "\n\n Book Publisher Name: " << ptr->publisher;
				found++;
			}
			ptr = ptr->prev;
		}
		if (found == 0)
		{
			cout << "\n\n WRONG ID ....";
		}
	}




	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
	cout << "\n\n\t\t\t===================================\n\n\n\n\n\n";





	cout << "\n\n\t\t\t ======!!!!!     BOOK SEARCHED SUCCESSFULLY    !!!!!!======\n\n\n";
	cout << "\n\n\t\t\t ======!!!!! PRESS 0 TO SEARCH DATA FOR OTHER BOOK :  !!!!!!======\n\n\n";
	cout << "\n\n\t\t\t ======!!!!! PRESS OTHER INTEGER FOR MENU :  !!!!!!======\n\n\n";

	int a;
	cin >> a;
	if (a == 0)
	{
		search();
	}
	else
	{
		menu();

	}



}
void library::update()
{
	system("cls");
	int b_id;
	int found = 0;
	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
	cout << "\n\n\t\t\t===================================";
	if (head == NULL)
	{
		cout << "\n\n NO BOOKS INSERTED YET....";

	}
	else
	{
		cout << "\n\n BOOK ID: ";
		cin >> b_id;
		Node* ptr = head;
		while (ptr != NULL)
		{
			if (b_id == ptr->id)
			{
				system("cls");
				cout << "\n\n\t\t\t===================================";
				cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
				cout << "\n\n\t\t\t===================================";
				cout << "\n\n BOOK ID: ";
				cin >> ptr->id;
				cout << "\n\n BOOK NAME: ";
				cin >> ptr->name;
				cout << "\n\n BOOK AUTHOR NAME: ";
				cin >> ptr->author;
				cout << "\n\n BOOK PUBLISHER NAME: ";
				cin >> ptr->publisher;
				found++;
				cout << "\n\n\t\t\t BOOK UPDATED SUCCESSFULLY.....";
			}
			ptr = ptr->prev;
		}
		if (found == 0)
		{
			cout << "\n\n INVALID BOOK ID....";
		}







		cout << "\n\n\t\t\t===================================";
		cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
		cout << "\n\n\t\t\t===================================\n\n\n\n\n\n";





		cout << "\n\n\t\t\t ======!!!!!     BOOK UPDATED SUCCESSFULLY    !!!!!!======\n\n\n";
		cout << "\n\n\t\t\t ======!!!!! PRESS 0 TO UPDATE DATA FOR OTHER BOOK :  !!!!!!======\n\n\n";
		cout << "\n\n\t\t\t ======!!!!! PRESS OTHER INTEGER FOR MENU :  !!!!!!======\n\n\n";

		int a;
		cin >> a;
		if (a == 0)
		{
			update();
		}
		else
		{
			menu();

		}
	}

}





void library::del()
{
	system("cls");
	int b_id;
	int found = 0;
	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
	cout << "\n\n\t\t\t===================================";
	if (head == NULL ||tail==NULL)
	{
		cout << "\n\n =======     NO DATA OF BOOKS    ========";
		cout << "\n\n\t\t\t ======!!!!! PRESS ANY INTEGER FOR MENU :  !!!!!!======\n\n\n";

	}
	else
	{
		cout << "\n\n\t\t\t=====   ENTER ID  ======\n";
		cin >> b_id;
		if (b_id == head->id)
		{
			Node* temp = head;
			head = head->prev;
			delete temp;
			found++;
		}
		else if (b_id == tail->id)
		{
			Node* tem = tail;
			tail = tail->next;
			delete tail;
			found++;
		}
		else
		{
			Node* curr = head;
			Node* pre = head;
			Node* pr = head;

			while (pr != NULL)
			{
				if (pr->id == b_id)
				{
					/*if (pr->prev->id == tail->id)
					{
						pre = pr->next;
						tail->next = pre;
						pre->prev = tail;
						delete pr;
						found++;
						break;
					}*/
					curr = pr;
					pr = pr->prev;
					pre = curr->next;
					found++;
					pr->next = pre;
					pre->prev = pr;
					delete curr;
					break;
				}
				pr = pr->prev;
			}
	
		}
		if (found == 0)
		{
			cout << "\t\t\t\t=======   INVALID ID    ==========";
			cout << "\n\n\t\t\t ======!!!!! PRESS -1 FOR RETRY :  !!!!!!======\n\n\n";
			cout << "\n\n\t\t\t ======!!!!! PRESS ANY INTEGER FOR MENU :  !!!!!!======\n\n\n";

		}
		else if (found == 1)
		{
			system("CLS");

			cout << "\n\n\t\t\t===================================";
			cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
			cout << "\n\n\t\t\t===================================\n\n\n\n\n\n";

			cout << "\n\t\t\t ======!!!!!     BOOK DELETED SUCCESSFULLY    !!!!!!======\n\n\n";
			cout << "\n\n\t\t\t ======!!!!! PRESS -1 TO DELETE DATA FOR OTHER BOOK :  !!!!!!======\n\n\n";
			cout << "\n\n\t\t\t ======!!!!! PRESS OTHER INTEGER FOR MENU :  !!!!!!======\n\n\n";

		}
		else
		{

			system("CLS");
			cout << "\n\n\t\t\t===================================";
			cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
			cout << "\n\n\t\t\t===================================\n\n\n\n\n\n";



			cout << "SOMETHING WENT WRONG";

		}
	}





	int d;
	cin >> d;
	if (d == -1)
	{
		del();
	}
	else if(d==9)
	{
		menu();

	}
	else
	{
		cout << "SOMETHING GOING WRONG!!!!!!!";
	}




}






void library::show()
{
	
	system("cls");
	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
	cout << "\n\n\t\t\t===================================";
	if (head==NULL)
	{
		cout << "\n\n\t\t\t=====          EMPTY          =====";
		cout << "\n\n\t\t\t=====   PRESS ANY KEY FOR MENU    =====\n\n";


		int d;
		cin >> d;
	}
	else
	{
		Node* ptr = tail;
		while (ptr != NULL)
		{

			cout << "\n\n Book ID: " << ptr->id;
			cout << "\n\n Book Name: " << ptr->name;
			cout << "\n\n Book Author Name: " << ptr->author;
			cout << "\n\n Book Publisher Name: " << ptr->publisher;
			cout << "\n\n\n =========================================";
			ptr = ptr->next;
		}
		
		cout << "\n\n\t\t\t ======!!!!!     BOOKS SHOWED SUCCESSFULLY    !!!!!!======\n\n\n";
		cout << "\n\n\t\t\t ======!!!!! PRESS 0 TO SEE SPEACIFIC BOOK :  !!!!!!======\n\n\n";
		cout << "\n\n\t\t\t ======!!!!! PRESS OTHER INTEGER FOR MENU :  !!!!!!======\n\n\n";

		int a;
		cin >> a;
		if (a == 0)
		{
			search();
		}
		else
		{
			menu();

		}

	}

}





bool lock()
{
	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM=====";
	cout << "\n\n\t\t\t===================================";
	cout << "\n\n\n\n\n";
	cout << "\n\n\t\t\t=====ENTER PIN FOR ENTERENCE=====\n";
	int pass = 1122;
	int val;
	cin >> val;
	if (val == pass)
	{
		return true;
	}
	else
	{

		system("CLS");
		cout << "\n\n\t\t\t\t  =====WRONG PIN=====";
		cout << "\n\n\t\t\t=====LAST CHANCE TO ENTER RIGHT PIN=====\n";
		cin >> val;
		if (val == pass)
		{
			return true;
		}
		else
		{
			system("CLS");
			cout << "\n\n\t\t\t=====!!!!!!!!!!!!!!!           SORRY        !!!!!!!!!!!!!!!=====";
			cout << "\n\n\t\t\t=====!!!!!!!!!!!    YOU CAN'T ENTER IN THE LIBRARY   !!!!!!!!!=====\n";
			return false;

		}

	}

}

int main()
{
	if (lock() == true)
	{
		library obj;
		obj.menu();
	}
	else
	{

		cout << "\n\n\t\t\t=====!!!!!!!!!!!!!!!      ALLAH HAFIZ        !!!!!!!!!!!!!!=====";

	}

	return 0;
}