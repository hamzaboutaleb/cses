#include <iostream>
#define ll long long

using namespace std;

int main() {
    string s;
    ll count = 0;
    ll answer = 0;
    char current;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c != current) {
            count = 0;
            current = c;
        }
        if (c == current) {
            count++;
        }
        answer = max(answer, count);
    }
    cout << answer;
}