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
    void Max_Arr( );
    void Min_Arr( );
    void Sum_Arr( );
    void Avg_Arr( );
    void Search_Arr(int);

};

void Array::Ini_Arr( ){
    cout << "\nEnter Elements in Array ::" << endl;
    for (int i = 0; i < Size; i++){
        cin >> Arr[i];
    }
    cout << "Elements Entered Successfully !!" << endl;
}

void Array::Show_Arr( ){
    cout << "\nElements in Array Are :: " << endl;
    for (int i = 0; i < Size; i++){
        cout << Arr[i] << "  ";
    }
    cout << "\nElements Shown Successful !!" << endl;
}

void Array::Max_Arr( ){
    cout << "\nMaximum Element in Array = ";
    int max = Arr[0];
    for (int i = 1; i < Size; i++){
        if (Arr[i] > max){
            max = Arr[i];
        }
    }
    cout << max << endl;
}

void Array::Min_Arr( ){
    cout << "\nMinimum Element in Array = ";
    int mini = Arr[0];
    for (int i = 1; i < Size; i++){
        if (Arr[i] < mini){
            mini = Arr[i];
        }
    }
    cout << mini << endl;
}

void Array::Sum_Arr( ){
    cout << "\nSum of Elements in Array = ";
    int sum = Arr[0];
    for (int i = 1; i < Size; i++){
        sum += Arr[i];
    }
    cout << sum << endl;
}

void Array::Avg_Arr( ){
    cout << "\nAverage of Elements in Array = ";
    int sum = Arr[0];
    for (int i = 1; i < Size; i++){
        sum += Arr[i];
    }
    float avg = sum / Size;
    cout << avg << endl;
}

void Array::Search_Arr(int x){
    for (int i = 0; i < Size; i++){
        if (x == Arr[i]){
            cout << "\nElement is Present in Array " << endl;
            return;
        }
    }
    cout << "Element not Found !" << endl;
}

int main( ){
    int K;
    cout << "Hello World!" << endl;
    cout << "Enter Size of Array : ";
    cin >> K;
    Array Abhi(K);
    Abhi.Ini_Arr( );
    Abhi.Show_Arr( );
    Abhi.Max_Arr( );
    Abhi.Min_Arr( );
    Abhi.Sum_Arr( );
    Abhi.Avg_Arr( );
    int x;
    cout << "\nEnter Element to Find in Array : ";
    cin >> x;
    Abhi.Search_Arr(x);
    return 0;
}