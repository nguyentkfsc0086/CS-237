//
// Created by Nguyen Tran on 2/10/25.
//
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double inputNumber, tolerance, estimate;
    double quotient, difference, result;
    int n = 1;
    char again;
    bool run = true;
    while (run) {
        cout << "Enter your input number: " << endl;
        cin >> inputNumber;
        cout << "Enter the tolerance value: " << endl;
        cin >> tolerance;
        cout << "Enter the estimate value: " << endl;
        cin >> estimate;
        cout << setw(5) << "n"
                << setw(15) << "Estimate"
                << setw(15) << "Quotient"
                << setw(15) << "Difference"
                << endl;
        cout << "-------------------------------------------------------------" << endl;

        // Iteration loop
        do {
            quotient = inputNumber / estimate;
            difference = fabs(estimate - quotient);

            // Table row
            cout << setw(5) << n
                 << setw(15) << estimate
                 << setw(15) << quotient
                 << setw(15) << difference
                 << endl;

            result = estimate;
            estimate = (estimate + quotient) / 2;
            n += 1;

        } while (difference > tolerance);
        cout << "The result is: " << result << endl;
        cout << "continue? [y/n] ";
        cin >> again;
        if (again != 'y' && again != 'Y') {
            run = false;

        }
    }



    return 0;
}
