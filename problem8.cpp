#include <iostream>
using namespace std;

void inverted(int n, int i = 1) {
    if (i > n)
        return;

    for (int s = 0; s < i - 1; s++)
        cout << " ";

    for (int star = 0; star < 2 * (n - i + 1) - 1; star++)
        cout << "*";

    cout << endl;

    inverted(n, i + 1);
}

int main() {
    int N;
    cin >> N;

    inverted(N);

    return 0;
}