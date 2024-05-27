#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll sum = (n * (n+1))/2;
    while (n != 1) {
        ll current;
        cin >> current;
        sum -= current;
        n--;
    }

    cout << sum;

}