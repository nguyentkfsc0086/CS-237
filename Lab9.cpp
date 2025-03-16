#include <cstdlib>
#include <iostream>
using namespace std;
void evaluate(int& a, int& b, int& c) {
    int d;
    d = a;
    a = b;
    b = d;
    if(d>a) {
        c = d;
    } else {
        c = a;
    }
    b++;
}
int main() {
    const int outer = 3, inner = 4;
    int value = -1;
    for (int i = 0; i< outer; i++) {
        for (int j = 0; j < inner; j++) {
            cout << value ++ << " ";
        }
    }
    cout << endl;
    return 0;
}