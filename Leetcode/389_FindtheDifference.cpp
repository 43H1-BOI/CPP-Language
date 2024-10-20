#include<iostream>
using namespace std;

/*
389. Find the Difference - Easy

Description :
    -> You are given two strings s and t.
    -> String t is generated by random shuffling string s and then add one more letter at a random position.
    -> Return the letter that was added to t.


Example 1:
    Input: s = "abcd", t = "abcde"
    Output: "e"
    Explanation: 'e' is the letter that was added.

Example 2:
    Input: s = "", t = "y"
    Output: "y"


Constraints:
    0 <= s.length <= 1000
    t.length == s.length + 1
    s and t consist of lowercase English letters.
*/

char findTheDifference(string s , string t) {
    int s1 = 0 , t1 = 0;
    for (int i = 0; i < t.length( ); i++) {
        t1 += (int) t[i];
    }

    for (int i = 0; i < s.length( ); i++) {
        s1 += (int) s[i];
    }

    return (char) (t1 - s1);
}


int main( ) {
    cout << "389. Find the Difference " << endl;

    cout << findTheDifference("xyz" , "uyxz") << endl;

    return 0;
}