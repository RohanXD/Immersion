//generate all pairs
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 6, 15, 7};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "All unique pairs are:" << endl;
    for (int i = 0; i < s; i++) {
        for (int j = i + 1; j < s; j++) {
            cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }

    return 0;
}

