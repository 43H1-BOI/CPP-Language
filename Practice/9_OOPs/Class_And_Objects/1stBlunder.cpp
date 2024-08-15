#include<iostream>
using namespace std;

/*
In this Program I want to create a array of Items in Dukaan but i am just making an array of int type
In next Version I'll make array of Dukaan which will contains name,itemId,Price
This is being published to let me remind me myself in future that i also made this mistake
*/

class Dukaan {
private:
    string Name;
    int ItemID;
    int Price;
    int No_Of_Items;
    int* Items;

public:
    Dukaan( ){ // Default Constructor
        /*
        This is only created because it is compulsory to create a default constructor if we are creating a parameterized constructor
        */
    }

    Dukaan(int x){ // Parameterized Constructor
        No_Of_Items = x;
        Items = new int[No_Of_Items];
        // Dynamic Memory Allocation using new Keyword
    }

    ~Dukaan( ){ // Destructor For Deletion of Dynamically Allocated Memory
        delete[ ]Items; // Deleting Dynamically Created Array
        Items = NULL; // Setting Null to a Dangling Pointer
        cout << "Destructor Called !" << endl;
    }

    void Ini_Items( );
    void Show_Items( );
};

void Dukaan::Ini_Items( ){ // For Initializing Items
    for (int i = 0; i < No_Of_Items; i++){
        cout << i + 1 << ". Enter Item ID : ";
        cin >> ItemID;
        cout << "Enter Name of Item " << ItemID << " : ";
        getline(cin >> ws , Name);
        cout << "Enter Price of " << Name << " : ";
        cin >> Price;
        cout << endl;
    }
}

void Dukaan::Show_Items( ){
    for (int i = 0; i < No_Of_Items; i++){
        cout << i + 1 << ". Item ID : " << ItemID << "  ";
        cout << "Price of " << Name << " : " << Price << endl;
    }

}

int main( ){
    int items;
    cout << "Enter No Of Items in Your Shop :";
    cin >> items;
    Dukaan RamJi(items); // RamJi Bhai ki Shop Having _ No. of Items

    RamJi.Ini_Items( );
    RamJi.Show_Items( );

    return 0;
}