#include <iostream>
using namespace std;

/*
9. Write a menu driven program to implement Priority queue.
*/

struct item
{
    int data;
    int p_no , order;
};

class pque
{
    item* pq;
    int f , r , size , j = 1;

public:
    pque(int);
    void add_item( );
    int delete_item( );
    void sort( );
    void display( );
    ~pque( ) {
        delete[ ] pq;
    }
};

pque::pque(int size) {
    this->size = size;
    pq = new item[size];
    f = r = -1;
    for (int i = 0; i < size; i++) {
        pq[i].data = pq[i].p_no = -1;
        pq[i].order = 0;
    }
}

void pque::add_item( ) {

    int m = 1;
    while (m != 0) {
        if (m == 1) {
            int d , p;
            if (r == size - 1) {
                cout << "Queue is Full!!" << endl;
                return;
            }
            cout << "Enter data you want to enter: ";
            cin >> d;
            cout << "Enter the Priority of the data: ";
            cin >> p;
            r++;
            pq[r].data = d;
            pq[r].p_no = p;
            pq[r].order = j++;
            if (f == -1) {
                f = 0;
            }
            sort( );
        }
        else {
            cout << "Enter either 0 or 1." << endl;
        }
        cout << "Press 1 if you want to continue adding the values in Queue, else enter 0 to exit the operation." << endl;
        cin >> m;
    }
}

int pque::delete_item( ) {
    if (f == -1) {
        cout << "Queue is Empty!!!" << endl;
        return -1;
    }
    else {
        int temp = pq[f].data;
        pq[f].data = -1;
        pq[f].p_no = -1;
        if (f == r) {
            f = r = -1;
        }
        else {
            f++;
        }
        return temp;
    }
}

void pque::sort( ) {
    item temp;
    for (int i = f; i <= r; i++) {
        for (int j = i + 1; j <= r; j++) {
            if (pq[i].p_no > pq[j].p_no) {
                temp = pq[i];
                pq[i] = pq[j];
                pq[j] = temp;
            }
            // else{
            //     if(pq[i].p_no == pq[j].p_no){
            //         if(pq[i].order > pq[j].order){
            //             temp = pq[i];
            //             pq[i] = pq[j];
            //             pq[j] = temp;
            //         }
            //     }
            // }
        }
    }
}

void pque::display( ) {
    if (f == -1) {
        cout << "Queue is Empty!!!" << endl;
        return;
    }

    cout << " Data " << "     | " << " Priority " << "     | " << " Order " << endl;

    for (int i = 0; i < size; i++) {
        cout << " " << pq[i].data << "         |   " << pq[i].p_no << "            |   " << pq[i].order << endl;
    }
    cout << endl;
}

int main( ) {
    int n;
    cout << "Enter the size of your Priority Queue: ";
    cin >> n;

    pque ob1(n);

    int input;
    int z;
    z = 1;
    while (z != 0) {
        if (z == 1) {
            cout << "Press 1 to Add an element to Priority Queue" << endl;
            cout << "Press 2 to Delete an element from Priority Queue" << endl;
            cout << "Press 3 to Display the Priority Queue" << endl;
            cout << "Press 4 to Exit the Program" << endl;
            cin >> input;

            switch (input) {
                case 1:
                {
                    ob1.add_item( );
                    break;
                }
                case 2:
                {
                    int deletedValue = ob1.delete_item( );
                    if (deletedValue != -1)
                        cout << deletedValue << " is Deleted!!!" << endl;
                    break;
                }
                case 3:
                {
                    ob1.display( );
                    break;
                }
                case 4:
                {
                    cout << "Program exited successfully!!!" << endl;
                    z = 0;
                    break;
                }
                default:
                {
                    cout << "Enter a valid operation!!!" << endl;
                }
            }
        }
        else {
            cout << "Enter either 0 or 1." << endl;
        }

        if (z != 0) {
            cout << "If you want to continue performing operations on Queue, press 1, else 0: ";
            cin >> z;
        }
    }

    return 0;
}