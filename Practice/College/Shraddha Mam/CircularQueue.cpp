#include <iostream>
using namespace std;
#define size 5
class queue{
    int arr[size];
    int r;
    int f;
public:
    void insert_r(int);
    void delete_f( );
    void insert_f(int);
    void delete_r( );
    void display( );
};

void queue::insert_r(int num){
    if (f == (r + 1) % size){
        cout << "dequeue is full" << endl;
    }
    else{
        if (r == -1){
            r = 0 , f = 0;
            arr[r] = num;
        }
        else{
            r = (r + 1) % size;
            arr[r] = num;
        }
    }
}
void queue::delete_f( ){
    int q;
    if (f == -1){
        cout << " dequeue is empty" << endl;
    }
    else{
        if (f == r){
            q = arr[f];
            f = r = -1;
        }
        else{
            q = arr[f];
            f = (f + 1) % size;
        }
    }
}
void queue::insert_f(int num){
    if (r == (size + (f - 1) % size)){
        cout << "queue is full" << endl;
    }
    else{
        if (r == -1){
            r = f = 0;
            arr[f] = num;
        }
        else{
            f = (size + (f - 1) % size);
            arr[f] = num;
        }
    }
}
void queue::delete_r( ){
    int q;
    if (r == -1){
        cout << "queue is empty" << endl;
    }
    else{
        if (f == r){
            q = arr[r];
            r = f = -1;
        }
        else{
            q = arr[r];
            r = (size + (r - 1) % size);

        }
    }
}

void queue::display( ){
    if (f == -1){
        cout << "queue is eempty" << endl;
    }
    if (f <= r){
        for (int i = f; i <= r; i++){
            cout << arr[i];
        }
    }
    else{
        for (int i = f; i < size; i++){
            cout << arr[i];
        }
        for (int j = 0; j <= r; j++){
            cout << arr[j];
        }
    }

}
int main( ){
    queue d;
    d.insert_r(1);
    d.insert_r(2);
    d.insert_r(3);
    d.insert_r(4);
    d.insert_r(5);
    d.display( );
    d.delete_f( );
    d.display( );
    d.insert_r(6);
    d.display( );
    d.delete_r( );
    d.display( );
    d.insert_f(7);
    d.display( );

}