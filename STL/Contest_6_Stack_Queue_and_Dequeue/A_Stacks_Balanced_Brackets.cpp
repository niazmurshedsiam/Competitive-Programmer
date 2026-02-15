#include <iostream>
#include <string>
#include <stack>
using namespace std;

string isBalanced(string expression) {
    stack<char> s;

    for (char c : expression) {

        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        }

        else {

            if (s.empty()) {
                return "NO";
            }

            char top = s.top();
            if ((c == ')' && top == '(') ||
                (c == ']' && top == '[') ||
                (c == '}' && top == '{')) {
                s.pop();
            } else {
                return "NO";
            }
        }
    }


    return s.empty() ? "YES" : "NO";
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string expression;
        cin >> expression;
        cout << isBalanced(expression) << endl;
    }

    return 0;
}
