#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op){
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}

string infixToPostfix(string infix){
    stack<char> s;
    string postfix;
    for (int i = 0; i < infix.length( ); i++){
        char c = infix[i];

        switch (c){
            case '(':
            {
                s.push('(');
                break;
            }

            case ')':
            {
                while (s.top( ) != '('){
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
                while (!s.empty( ) && precedence(c) <= precedence(s.top( ))){
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

    while (!s.empty( )){
        postfix += s.top( );
        s.pop( );
    }

    return postfix;
}

int main( ){
    string infix;
    cout << "Enter Infix Expression:";
    getline(cin , infix);
    cout << "Postfix Expression: " << infixToPostfix(infix) << endl;
    return 0;
}
