#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

/*
6. Write a program to convert infix expressions to prefix expressions.
*/

int precedence(char op) {
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> s;
    string postfix;

    for (int i = 0; i < infix.length( ); i++) {
        char c = infix[i];

        switch (c) {
            case '(':
            {
                s.push('(');
                break;
            }

            case ')':
            {
                while (s.top( ) != '(') {
                    postfix += s.top( );
                    s.pop( );
                }
                s.pop( );
                break;
            }

            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
            {
                while (!s.empty( ) && precedence(c) < precedence(s.top( ))) {
                    postfix += s.top( );
                    s.pop( );
                }
                s.push(c);
                break;
            }
            default:
            postfix += c;
        }
    }

    while (!s.empty( )) {
        postfix += s.top( );
        s.pop( );
    }

    return postfix;
}

string infixToPrefix(string infix) {
    reverse(infix.begin( ) , infix.end( ));
    for (int i = 0; i < infix.length( ); i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
        }
        else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }

    string postfix = infixToPostfix(infix);
    reverse(postfix.begin( ) , postfix.end( ));
    return postfix;
}

int main( ) {
    string infix;
    cout << "Enter Infix Expression: ";
    getline(cin , infix);

    string prefix = infixToPrefix(infix);
    cout << "Prefix Expression: " << prefix << endl;
    return 0;
}