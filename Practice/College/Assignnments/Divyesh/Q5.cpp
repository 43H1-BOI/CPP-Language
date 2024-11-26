#include <iostream>
#include <stack>
#include <string>
using namespace std;

/*
5. Write a program to convert infix expressions to postfix expressions.
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
                while (!s.empty( ) && precedence(c) <= precedence(s.top( ))) {
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

int main( ) {
    string infix;
    cout << "Enter Infix Expression:";
    getline(cin , infix);
    cout << "Postfix Expression: " << infixToPostfix(infix) << endl;
    return 0;
}
