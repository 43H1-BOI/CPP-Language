#include<iostream>
#include<vector>

using namespace std;


// int removeDuplicates(vector<int>& v){
//     if (v.size( ) == 1){
//         return 1;
//     } else{
//         int i = 0 , j = 1;
//         while (j < v.size( )){
//             if (v[i] == v[j]){
//                 v.erase(v.begin( ) + j);
//             }
//             else{
//                 i++;
//                 j++;
//             }
//         }
//         return j;
//     }
// }

//Remove Element from Array
int main( ){
    vector<int> v = { 0,1,2,2,3,0,4,2 }; // creating vector of int type and size = 5
    int i , j;

    if (v.size( ) != 1){

    }

    // To print Result
    for (int i = 0; i < v.size( ); i++){
        cout << v[i] << "  ";
    }

    cout << endl << "Size = " << v.size( ) << endl;

    return 0;
}