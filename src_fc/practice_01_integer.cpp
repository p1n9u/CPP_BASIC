#include <iostream>
#include <limits>

using namespace std; // if you use it std::cout -> cout
int main(void) {
    int i = 0; // int i(0); - c++ style init
    int *ptr = &i;
    cout << i << endl; // endl - \n
    cout << "i : " << i << endl;
    cout << "size of i : " << sizeof(i) << endl;
    cout << "max int : " << numeric_limits<int>::max() << endl;
    cout << "size of int ptr : " << sizeof(ptr) << endl;
    return 0;
}

/*
 * int8_t, int16_t, int32_t : not depend on platform, 1btye 2bytes 4bytes
 * unsigned int a = 11u;
 * long int a = 0L;
 * long long a = 0LL;
 * unsigned long long a = 0LLu;
 * 0b : binary, 0 : octal, 0x : hexadeciaml
*/
