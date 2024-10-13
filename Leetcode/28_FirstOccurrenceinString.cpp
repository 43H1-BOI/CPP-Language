
#include<iostream>
using namespace std;

/*
28. Find the Index of the First Occurrence in a String - Easy

Description :
    Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:
    Input: haystack = "sadbutsad", needle = "sad"
    Output: 0
    Explanation: "sad" occurs at index 0 and 6.
    The first occurrence is at index 0, so we return 0.

Example 2:
    Input: haystack = "leetcode", needle = "leeto"
    Output: -1
    Explanation: "leeto" did not occur in "leetcode", so we return -1.


Constraints:
    1 <= haystack.length, needle.length <= 104
    haystack and needle consist of only lowercase English characters.
*/


int strStr(string s1 , string s2) {
    return s1.find(s2);

//         trying to build logic 
//         int flag = 0 , index;
//         for (int i = 0; i < s1.length( ); i++) {
//             if (s1[i] == s2[0]) {
//                 for (int k = 0; k < s2.length( ); k++) {
//                     if (s1[i] == s2[k]) {
//                         flag++;
//                     }
//                     else
//                         break;
//                 }
//                 if (flag == s2.length( )) {
//                     index = i;
//                     return i;
//                 }
//             }
//         }
//     }
//     else
//         return -1;
}


int main( ) {
    cout << "28. Find the Index of the First Occurrence in a String " << endl;

    cout << strStr("xyzabcdef" , "abc") << endl;

    return 0;
}