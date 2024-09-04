#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

class dll{
    node* start;
    node* temp;
    node* old_node;
public:
    dll( ){
        start = NULL;
    }
    void create( );
    void insert(int pos , int val);
    void delete_f( );
    void display( );
    void display_rev( );
};

void dll::create( ){

    node* new_node = new node( );
    int d;
    cout << "enter the data" << endl;
    cin >> d;
    new_node->data = d;
    new_node->next = NULL;
    new_node->prev = NULL;
    if (start == NULL){
        start = new_node;
    }
    else{
        temp = start;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }

}

void dll::insert(int pos , int val){
    node* new_node = new node( );
    new_node->data = val;
    new_node->prev = NULL;
    if (pos == 1 || start == NULL){
        new_node->next = start;
        if (start != NULL){
            start->prev = new_node;
        }
        start = new_node;

    }
    else{
        int i = 0;
        temp = start;
        while (i < (pos - 1) && temp->next != NULL){
            temp = temp->next;
            i++;
        }
        new_node->next = temp->next;
        if (temp->next != NULL){
            temp->next->prev = new_node;
        }


        temp->next = new_node;
        new_node->prev = temp;
    }
}
void dll::display( ){
    if (temp == NULL){
        cout << "list is empty";
    }
    else{
        temp = start;
        cout << "dll is fwd" << endl;
        while (temp != NULL){
            cout << temp->data;
            temp = temp->next;

        }
    }
}

void dll::display_rev( ){
    temp = start;
    if (temp == NULL){
        cout << "list is empty" << endl;
    }
    else{
        while (temp->next != NULL)//we have to read data
        {
            temp = temp->next;

        }
        cout << "dll is reverse order" << endl;
        while (temp != NULL){
            cout << temp->data;
            temp = temp->prev;
        }
    }
}
void dll::delete_f( ){
    node* temp;
    temp = start;
    int d;// a element d to delete
    cout << "element you want to delete=" << endl;
    cin >> d;
    //entered first element and deleted
    if (temp->next == NULL && temp->data == d){
        start = NULL;
        delete temp;
        //cout<<"first element delete d"<<endl;
        return;
    }
    else{
        temp = start;
        while (temp != NULL){
            if (temp->data != d){
                temp = temp->next;
            }
            else{

                if (temp == start){
                    temp->next->prev = NULL;
                    start = temp->next;
                }
                else{
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }

            }

            delete temp;
            cout << "element is deleted d" << endl;
            break;
        }
    }


    if (temp == NULL){
        cout << "data not found" << endl;

    }

}

int main( ){
// dll d;
// d.create();
// d.create();
// cout<<endl;

// //d.display();
// //cout<<endl;
// d.insert(2,40);
// cout<<endl;
// d.display();
// //d.display_rev();
// d.delete_f();
// cout<<endl;
// d.display();
// d.display_rev();

    dll c;
    int choice;
    cout << "to see the list" << endl;
    cout << "For insertion of the list=1" << endl;
    cout << "TO create a node=2" << endl;
    cout << "To delete first node=3" << endl;
   // cout<<"Tp delete ith node=4"<<endl;
    cout << "To display in forward fwd=4" << endl;
    cout << "To display in reverse=5" << endl;
    cout << "End Program=6" << endl;
    cin >> choice;
    do{

        switch (choice){
            case 1:
            c.insert(2 , 40);
            break;

            case 2:
            c.create( );
            break;

            case 3:
            c.delete_f( );
            break;

            case 4:
            c.display( );
            break;

            case 5:
            c.display_rev( );
            break;

            default:
            cout << "incorrect choice. try again , fill the choice again.";
        }
    } while (choice != 6);

    return 0;
}