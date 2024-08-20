#include<iostream>
using namespace std;

class Array {
private:
    int Size;
    int* Arr;
public:
    Array(int x){ // Parameterized Constructor
        Size = x;
        Arr = new int[Size];
    }

    ~Array( ){ // Destructor
        delete[ ]Arr;
        Arr = NULL;
    }

    void Ini_Arr( );
    void Show_Arr( );
    int Max_Arr( );
    int Min_Arr( );
    double Sum_Arr( );
    float Avg_Arr( );
    int Search_Arr(int element);
    void Delete_Ele(int index);
    void Insert_Ele(int index , int element);

};

void Array::Ini_Arr( ){ // To Initialize an Array 
    // cout << "\nEnter Elements in Array ::" << endl;
    for (int i = 0; i < Size; i++){
        cin >> Arr[i];
    }
    // cout << "Elements Entered Successfully !!" << endl;
}

void Array::Show_Arr( ){ // To Show Elements oof Array 
    // cout << "\nElements in Array Are :: " << endl;
    for (int i = 0; i < Size; i++){
        cout << Arr[i] << "  ";
    }
    // cout << "\nElements Shown Successful !!" << endl;
    cout << endl;
}

int Array::Max_Arr( ){ // To Find Maximum Element of Array 
    int max = Arr[0];
    for (int i = 1; i < Size; i++){
        if (Arr[i] > max){
            max = Arr[i];
        }
    }
    return max;
}

int Array::Min_Arr( ){ // To Find Miinimum Element of Array 
    int mini = Arr[0];
    for (int i = 1; i < Size; i++){
        if (Arr[i] < mini){
            mini = Arr[i];
        }
    }
    return mini;
}

double Array::Sum_Arr( ){ // To Find Sum of Array 
    int sum = Arr[0];
    for (int i = 1; i < Size; i++){
        sum += Arr[i];
    }
    return sum;
}

float Array::Avg_Arr( ){ // To Find Average of Array 
    int sum = Sum_Arr( );
    float avg = sum / Size;
    return avg;
}

int Array::Search_Arr(int x){ // To Search an Element from Array 
    for (int i = 0; i < Size; i++){
        if (x == Arr[i]){
            return i;
        }
    }
    return -1;
}

void Array::Delete_Ele(int index){ // To Delete element at given Index 
    for (int i = index; i < Size - 1; i++){
        Arr[i] = Arr[i + 1];
    }
    Size--;
}

void Array::Insert_Ele(int index , int element){ // To Insert Element at Given Index
    Size++; // To increase size of array for insertion of new element

    for (int i = Size - 1; i > index - 1; i--){
        Arr[i + 1] = Arr[i];
    }
    Arr[index] = element;
}

int main( ){
    int size;
    cout << "Hello World!" << endl;
    cout << "Enter Size of Array : ";
    cin >> size;
    Array Abhi(size);
    Abhi.Ini_Arr( );
    cout << "Element in Array : " << endl;
    Abhi.Show_Arr( );

    cout << "Maximum Element of Array = ";
    cout << Abhi.Max_Arr( ) << endl;

    cout << "Minimum Element of Array = ";
    cout << Abhi.Min_Arr( ) << endl;

    cout << "Sum of All Element of Array = ";
    cout << Abhi.Sum_Arr( ) << endl;

    cout << "Average of Elements of Array = ";
    cout << Abhi.Avg_Arr( ) << endl;

    cout << endl;
    int element;
    cout << "\nEnter Element to Find in Array : ";
    cin >> element;
    if (Abhi.Search_Arr(element) == -1){
        cout << "Element Not Present in Array ." << endl;
    }
    else{
        cout << "Element Present in Array at Index = " << Abhi.Search_Arr(element) << "." << endl;
    }
    cout << endl;


    int index;
    cout << "Enter Index of Element to Delete it from Array : ";
    cin >> index;
    Abhi.Delete_Ele(index);
    cout << "After Deleting Element from " << index << " Index , Array will be : " << endl;
    Abhi.Show_Arr( );
    cout << endl;

    cout << "Enter Index of Element to Insert it in Array : ";
    cin >> index;
    cout << "Enter Element to Insert it in Array : ";
    cin >> element;
    Abhi.Insert_Ele(index , element);
    cout << "After Inserting Element at " << index << " Index , Array will be : " << endl;
    Abhi.Show_Arr( );




    return 0;
}