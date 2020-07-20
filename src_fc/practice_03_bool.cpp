#include <iostream>

using namespace std;

int main(void) {
    bool b0 = 0 == 0;
    bool b1 = 0 < 1;
    bool b2 = 0 > 2;

    cout.setf(ios_base::boolalpha);
    cout << b0 << endl;
    cout << b1 << endl;
    cout << b2 << endl;

    return 0;
}