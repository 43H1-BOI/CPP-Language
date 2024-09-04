#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    //to save address of next pointer
};

class ll//class for linked list
{
    node* start;
public:
    ll( ){
        start = NULL;
    }
    void create( );
    void display( );
    void insert(int pos , int val);
    void search(int);
    void delete_f( );
    void count_e( );

};
void ll::create( ){
    node* old_node;
    char c;
    do{
        node* new_node = new node( );
        cout << "enter data";
        cin >> new_node->data;
        new_node->next = NULL;
        if (start == NULL){
            start = new_node;
        }
        else{
            old_node->next = new_node;
        }
        old_node = new_node;
        cout << "do you want to continue then, press y." << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');

}

void ll::insert(int pos , int val)// to insert a node in linked list
{
    node* new_node , * temp;
    int i;//check position where to insert
    new_node = new node( );
    new_node->data = val;
    if (pos == 1 || start == NULL){
        new_node->next = start;
        start = new_node;
    }
    else{
        i = 1;
        temp = start;
        while (i < (pos - 1) && temp->next != NULL){// second last node insert
            temp = temp->next;
            i++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
}
void ll::search(int n){
    node* t;
    int f = 0;
    t = start;
    int i = 0;
    do{
        i++;
        if (t->data == n){
            f = 1;
            cout << "element found at" << i << endl;
            break;
        }
        else{
            t = t->next;
        }
    } while (t != NULL);
    if (f == 0){
        cout << "element not found" << endl;
    }
}
void ll::count_e( ){
    int i = 0;
    node* t;
    t = start;
    if (start == NULL){
        cout << "list has no element" << endl;
    }
    else{
        do{
            i++;
            t = t->next;
        } while (t != NULL);
        cout << "total elements=" << "" << i << endl;

    }
}
void ll::delete_f( ){
    node* t , * prev;
    int num;
    t = start;
    cout << "enter the number to be deleted" << endl;
    cin >> num;
    while (t != NULL){
        if (t->data != num){
            prev = t;
            t = t->next;

        }
        else{
            if (t == start){
                start = t->next;
            }
            else{
                prev->next = t->next;
            }
        }
    }
    cout << "data not found!!" << endl;
}

void ll::display( ){
    node* t;
    for (t = start; t != NULL; t = t->next){
        cout << t->data;
    }
}

int main( ){
    ll p;
    p.create( );
   // p.display();
   // cout<<endl;
    p.insert(1 , 90);
   // p.display();
  //  cout<<endl;
    p.insert(2 , 30);
    p.search(30);
    p.count_e( );
    p.display( );
    p.delete_f( );
    p.display( );
}