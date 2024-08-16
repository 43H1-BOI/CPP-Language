#include<iostream>
using namespace std;

class Array {
private:
    int Size;
    int* Arr;
public:
    Array(int x){
        Size = x;
        Arr = new int[Size];
    }

    ~Array( ){
        delete[ ]Arr;
        Arr = NULL;
    }

    void Ini_Arr( );
    void Show_Arr( );
    int Max_Arr( );
    int Min_Arr( );
    double Sum_Arr( );
    float Avg_Arr( );
    bool Search_Arr(int);

};

void Array::Ini_Arr( ){
    // cout << "\nEnter Elements in Array ::" << endl;
    for (int i = 0; i < Size; i++){
        cin >> Arr[i];
    }
    // cout << "Elements Entered Successfully !!" << endl;
}

void Array::Show_Arr( ){
    cout << "\nElements in Array Are :: " << endl;
    for (int i = 0; i < Size; i++){
        cout << Arr[i] << "  ";
    }
    // cout << "\nElements Shown Successful !!" << endl;
}

int Array::Max_Arr( ){
    int max = Arr[0];
    for (int i = 1; i < Size; i++){
        if (Arr[i] > max){
            max = Arr[i];
        }
    }
    return max;
}

int Array::Min_Arr( ){
    int mini = Arr[0];
    for (int i = 1; i < Size; i++){
        if (Arr[i] < mini){
            mini = Arr[i];
        }
    }
    return mini;
}

double Array::Sum_Arr( ){
    int sum = Arr[0];
    for (int i = 1; i < Size; i++){
        sum += Arr[i];
    }
    return sum;
}

float Array::Avg_Arr( ){
    int sum = Arr[0];
    for (int i = 1; i < Size; i++){
        sum += Arr[i];
    }
    float avg = sum / Size;
    return avg;
}

bool Array::Search_Arr(int x){
    for (int i = 0; i < Size; i++){
        if (x == Arr[i]){
            return true;
        }
    }
    return false;
}

int main( ){
    int K;
    cout << "Hello World!" << endl;
    cout << "Enter Size of Array : ";
    cin >> K;
    Array Abhi(K);
    Abhi.Ini_Arr( );
    Abhi.Show_Arr( );
    cout << Abhi.Max_Arr( ) << endl;
    cout << Abhi.Min_Arr( ) << endl;
    cout << Abhi.Sum_Arr( ) << endl;
    cout << Abhi.Avg_Arr( ) << endl;
    int x;
    cout << "\nEnter Element to Find in Array : ";
    cin >> x;
    if (Abhi.Search_Arr(x)){
        cout << "Element Present in Array ." << endl;
    }
    else{
        cout << "Element Not Present in Array ." << endl;
    }
    return 0;
}