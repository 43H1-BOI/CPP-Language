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
    int Search_Arr(int element);
    void Delete_Ele(int index);
    void Insert_Ele(int index , int element);
    // double Sum_Arr( );
    // float Avg_Arr( );
    // void Show_Idx( );
};

void Array::Ini_Arr( ){ // To Initialize an Array 
    // cout << "\nEnter Elements in Array ::" << endl;
    for (int i = 0; i < Size; i++){
        cin >> Arr[i];
    }
}

void Array::Show_Arr( ){ // To Show Elements of Array 
    // cout << "\nElements in Array Are :: " << endl;
    for (int i = 0; i < Size; i++){
        cout << Arr[i] << "  ";
    }
    cout << endl;
}

/*
void Array::Show_Idx( ){ // To Show Index of Element Array
    for (int i = 0; i < Size; i++){
        cout << Arr[i] << "  ";
    }
    cout << endl;
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
*/

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
    int choice1 = 0;
    int index;
    int element;

    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    Array Abhi(size);

    Abhi.Ini_Arr( );

    cout << "Menu Driven Program for Operations on Array : " << endl;
    do{
        cout << endl;
        cout << "1. Show Elements of Array" << endl;
        cout << "2. Find Minimum Element of Array" << endl;
        cout << "3. Find Maximum Element of Array" << endl;
        cout << "4. Insert Element into Array" << endl;
        cout << "5. Delete Element from Array" << endl;
        cout << "6. Search Element from Array" << endl;
        cout << "7. Exit Program" << endl << endl;

        cout << "Enter Your Choice : ";
        cin >> choice1;
        cout << endl;

        switch (choice1){
            case 1:{
                cout << "1. Show Elements of Array : " << endl;
                cout << "Elements of Array are : " << endl;
                Abhi.Show_Arr( );

                break;
            }

            case 2:{
                cout << "2. Find Minimum Element of Array : " << endl;
                cout << "Minimum Element of Array = ";
                cout << Abhi.Min_Arr( ) << endl;
                break;
            }

            case 3:{
                cout << "3. Find Maximum Element of Array : " << endl;
                cout << "Maximum Element of Array = ";
                cout << Abhi.Max_Arr( ) << endl;
                break;
            }

            case 4:{
                cout << "4. Insert Element into Array : " << endl;
                cout << "Array Before Inserion : " << endl;
                Abhi.Show_Arr( );
                cout << "Enter Index to Insert Element in Array : ";
                cin >> index;
                cout << "Enter Element to Insert at " << index << " in Array : ";
                cin >> element;
                Abhi.Insert_Ele(index , element);

                cout << "Array After Insertion : " << endl;
                Abhi.Show_Arr( );
                break;
            }

            case 5:{
                cout << "5. Delete Element from Array : " << endl;
                cout << "Array Before Deletion : " << endl;
                Abhi.Show_Arr( );
                cout << "Enter Index of Element to Delete : ";
                cin >> index;
                Abhi.Delete_Ele(index);

                cout << "Array After Deletion : " << endl;
                Abhi.Show_Arr( );
                break;
            }

            case 6:{
                cout << "6. Search Element from Array : " << endl;
                cout << "Enter Element to Find in Array : ";
                cin >> element;
                if (Abhi.Search_Arr(element) == -1){
                    cout << "Element Not Present in Array ." << endl;
                }
                else{
                    cout << "Element Present in Array at Index = " << Abhi.Search_Arr(element) << "." << endl;
                }
                break;
            }

            case 7:{
                cout << "Exiting Program !" << endl;
                break;
            }

            default: {
                cout << "Invalid Choice !" << endl;
            }
        }
    } while (choice1 != 7);

    return 0;
}