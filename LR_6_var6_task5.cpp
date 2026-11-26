#include <iostream>

using namespace std;

int main() {
    long long n;
    cout << "Enter a natural number N: ";
    cin >> n;

    if (n <= 0) {
        cout << "The number must be natural (N > 0)." << endl;
        return 1;
    }

    long long temp = n; // Copy of the original number to preserve N
    int count = 0;      // Counter for digits not equal to 1 and 9

    cout << "Digits of " << n << " (from last to first): ";

    while (temp > 0) {
        int digit = temp % 10; // Extract the last digit
        cout << digit << " ";

        if (digit != 1 && digit != 9) {
            count++;
        }

        temp /= 10; // Remove the last digit
    }

    cout << endl;
    cout << "Count of digits not equal to 1 and 9: " << count << endl;

    return 0;
}
