#include <iostream>
using namespace std;

void toBinary(int n) {
    if (n == 0)
        return;

    toBinary(n / 2);
    cout << n % 2;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if (N == 0)
            cout << 0;
        else
            toBinary(N);

        cout << endl;
    }

    return 0;
}