#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
        cout << "Calculating: " << i << "! = " << result << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
    }
    return result;
}

int main() {
    cout << "Factorial Generator" << endl;
    cout << "===================" << endl;

    int num;
    while (true) {
        cout << "Enter a positive integer: ";
        if (cin >> num && num >= 0) break;
        else {
            cout << "Invalid input. Please enter a non-negative integer." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    cout << "\nProcessing...\n" << endl;
    this_thread::sleep_for(chrono::milliseconds(700));

    unsigned long long result = factorial(num);
    cout << "\nThe factorial of " << num << " is: " << result << endl;

    return 0;
}