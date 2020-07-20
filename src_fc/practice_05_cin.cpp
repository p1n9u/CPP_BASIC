#include <iostream>
#include <limits>

using namespace std;

int main(void) {
    int i;
    
    cin >> i;
    cout << i << endl;

    if ( cin.fail() ) {
        cin.clear();
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cin >> i;
    cout << i << endl;

    cin >> i;
    cout << i << endl;
    
    return 0;
}