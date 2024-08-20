#include<iostream>
using namespace std;

void Ini_Arr(int* arr , int size){ // To Initialize an Array 
    // cout << "\nEnter Elements in Array ::" << endl;
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

void Show_Arr(int* arr , int size){ // To Show Elements of Array 
    // cout << "\nElements in Array Are :: " << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

/*
void Array::Show_Idx(int* arr , int size){ // To Show Index of Element Array
    for (int i = 0; i < size; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

double Sum_Arr(int* arr , int size){ // To Find Sum of Array
    int sum = arr[0];
    for (int i = 1; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

float Avg_Arr(int* arr , int size){ // To Find Average of Array
    int sum = Sum_Arr(arr,size);
    float avg = sum / size;
    return avg;
}
*/

int Max_Arr(int* arr , int size){ // To Find Maximum Element of Array 
    int max = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int Min_Arr(int* arr , int size){ // To Find Miinimum Element of Array 
    int mini = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}

int Search_Arr(int* arr , int size , int x){ // To Search an Element from Array 
    for (int i = 0; i < size; i++){
        if (x == arr[i]){
            return i;
        }
    }
    return -1;
}

void Delete_Ele(int* arr , int& size , int index){ // To Delete element at given Index 
    for (int i = index; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    size--;
}

void Insert_Ele(int* arr , int& size , int index , int element){ // To Insert Element at Given Index
    size++; // To increase size of array for insertion of new element

    for (int i = size - 1; i > index - 1; i--){
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

int main( ){
    int choice1 = 0;
    int index;
    int element;

    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int* Abhi = new int[size];

    Ini_Arr(Abhi , size);

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
                Show_Arr(Abhi , size);

                break;
            }

            case 2:{
                cout << "2. Find Minimum Element of Array : " << endl;
                cout << "Minimum Element of Array = ";
                cout << Min_Arr(Abhi , size) << endl;
                break;
            }

            case 3:{
                cout << "3. Find Maximum Element of Array : " << endl;
                cout << "Maximum Element of Array = ";
                cout << Max_Arr(Abhi , size) << endl;
                break;
            }

            case 4:{
                cout << "4. Insert Element into Array : " << endl;
                cout << "Array Before Inserion : " << endl;
                Show_Arr(Abhi , size);
                cout << "Enter Index to Insert Element in Array : ";
                cin >> index;
                cout << "Enter Element to Insert at " << index << " in Array : ";
                cin >> element;
                Insert_Ele(Abhi , size , index , element);

                cout << "Array After Insertion : " << endl;
                Show_Arr(Abhi , size);
                break;
            }

            case 5:{
                cout << "5. Delete Element from Array : " << endl;
                cout << "Array Before Deletion : " << endl;
                Show_Arr(Abhi , size);
                cout << "Enter Index of Element to Delete : ";
                cin >> index;
                Delete_Ele(Abhi , size , index);

                cout << "Array After Deletion : " << endl;
                Show_Arr(Abhi , size);
                break;
            }

            case 6:{
                cout << "6. Search Element from Array : " << endl;
                cout << "Enter Element to Find in Array : ";
                cin >> element;
                if (Search_Arr(Abhi , size , element) == -1){
                    cout << "Element Not Present in Array ." << endl;
                }
                else{
                    cout << "Element Present in Array at Index = " << Search_Arr(Abhi , size , element) << "." << endl;
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

    delete[ ] Abhi;
    Abhi = NULL;

    return 0;
}