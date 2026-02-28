#include <iostream>
using namespace std;

void pyramid(int n, int i = 1) {
    if (i > n)
        return;

    for (int s = 0; s < n - i; s++)
        cout << " ";

    for (int star = 0; star < 2 * i - 1; star++)
        cout << "*";

    cout << endl;

    pyramid(n, i + 1);
}

int main() {
    int N;
    cin >> N;

    pyramid(N);

    return 0;
}