#include<iostream>
#include<vector>

using namespace std;


int removeDuplicates(vector<int>& v){
    if (v.size( ) == 1){
        return 1;
    }
    else{
        int i = 0 , j = 1;
        while (j < v.size( )){
            if (v[i] == v[j]){
                v.erase(v.begin( ) + j);
            }
            else{
                i++;
                j++;
            }
        }
        return j;
    }
}

//Remove Duplicates from Sorted Array
int main( ){
    vector<int> v = { 0,0,1,1,1,2,2,3,3,4 }; // creating vector of int type and size = 10
    int i , j;

    if (v.size( ) != 1){
        i = 0;
        j = 1;
        while (j < v.size( )){
            if (v[i] == v[j]){
                v.erase(v.begin( ) + j);
            }
            else{
                j++;
                i++;
            }
        }
    }

    // To print Result
    for (int i = 0; i < v.size( ); i++){
        cout << v[i] << "  ";
    }

    cout << endl << "Size = " << v.size( ) << endl;

    return 0;
}

/*
    i = 0 , j = 1;
    {
        while(1 < 10)
    }
*/