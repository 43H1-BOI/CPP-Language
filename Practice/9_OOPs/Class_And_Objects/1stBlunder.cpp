#include<iostream>
using namespace std;

/*
In this Program I am creating an array of Items in Dukaan.
I done this by dynamically allocation of array of type Dukaan(Class)

Is there anything that i can do with the program to remove Items_No_Corrector( ) function
*/

class Dukaan {
private:
    string Name;
    int ItemID;
    int Price;
    static int Item_No;
public:

    void Ini_Items( );
    void Show_Items( );
    void Items_No_Corrector( ){ // Used to Convert Item No to 1 again
    // Want this because i want to recount each item after the Initialize Function Ends.
        Dukaan::Item_No = 1;
    }
};

// Set Item No to 1 for whole program then it gets increment inside Ini_Items() and Show_Items() Functions
int Dukaan::Item_No = 1;

void Dukaan::Ini_Items( ){ // For Initializing Items
    cout << Item_No << ". Enter Name of Item " << " : ";
    getline(cin >> ws , Name);
    cout << "Enter Item ID for " << Name << " : ";
    cin >> ItemID;
    cout << "Enter Price of " << Name << " : ";
    cin >> Price;
    cout << endl;
    Item_No++;
}

void Dukaan::Show_Items( ){ // For Displaying Items
    cout << Item_No << ". Item ID : " << ItemID << " | ";
    cout << "Price of " << Name << " : " << Price << endl;
    Item_No++;
}

int main( ){
    int items;
    cout << "Enter No Of Items in Your Shop :";
    cin >> items;
    // Dukaan RamJi[items]; // RamJi Bhai ki Shop Having _ No. of Items

    // Dynamically Allocting Memory for Array of Dukaan Class's Object
    Dukaan* RamJi = new Dukaan[items];

    RamJi->Items_No_Corrector( );
    for (int i = 0; i < items; i++){
        RamJi[i].Ini_Items( );
    }

    RamJi->Items_No_Corrector( );
    for (int i = 0; i < items; i++){
        RamJi[i].Show_Items( );
    }

    // Deallocating Memory from Heap 
    delete[ ]RamJi;
    RamJi = NULL;
    return 0;
}