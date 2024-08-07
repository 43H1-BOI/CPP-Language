#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;
// having many Problems
// will update this later
int main( ){
    // Vector Declaration :-
    // Basics :
    // vector<data-type> name;
    vector<int> rollNo;
    rollNo = { 1,2,3,4,5,6,7 };

    // vector<data-type> name(size);
    vector<char> grade(3);
    grade = { 'A','B','C' };


    // Other Types of Vector Declaration :-

    // 1 . Initialization Using List
    // vector<dataType> name({ value1, value2, value3 ....}); 
    vector<string> name("Abhishek" , "Yadav");
    vector<int> rank = { 1,2,3 }; // another way



    cout << name[0];

    //3. Initialization From Another Vector
    // vector<dataType> name(other_vec);
    vector<int> v; // with only data type

    return 0;
}





    // // 2. Initialization With a Single Value
    // // vector<dataType> name(size, value); 
    // vector<char> section(4 , 'A'); // this will be 1st element
    // section = { 'B','C','D' };
    // // 5 is size and 2 is one value among them