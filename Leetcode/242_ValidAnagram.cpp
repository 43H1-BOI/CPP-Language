// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
242. Valid Anagram - Easy

Description :
    -> Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Example 1:
    Input: s = "anagram", t = "nagaram"
    Output: true

Example 2:
    Input: s = "rat", t = "car"
    Output: false

Constraints:
    1 <= s.length, t.length <= 5 * 104
    s and t consist of lowercase English letters.
*/

bool isAnagram(string s , string t) {
    sort(s.begin( ) , s.end( ));
    sort(t.begin( ) , t.end( ));
    return s == t;
}

int main( ) {
    cout << "242. Valid Anagram" << endl;

    cout << (isAnagram("hello moto" , "motoo hell") ? "Is Valid" : "Not Valid") << endl;

    return 0;
}