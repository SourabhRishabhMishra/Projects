#include <iostream>

using namespace std;

int main() {
    int x = 0;
    int y = 0; // Unused variable (cppcheck should warn)

    if (x = 1) { // Assignment in condition (likely mistake)
        cout << "x is 1" << endl;
    }

    return 0;
}
