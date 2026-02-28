#include <iostream>
using namespace std;

void printEvenReverse(int arr[], int i) {
    if (i < 0)
        return;

    if (i % 2 == 0)
        cout << arr[i] << " ";

    printEvenReverse(arr, i - 1);
}

int main() {
    int N;
    cin >> N;

    int arr[1000];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    printEvenReverse(arr, N - 1);

    return 0;
}