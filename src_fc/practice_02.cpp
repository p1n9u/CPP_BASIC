#include <iostream>
#include <cmath>
#include <cfloat>
#include <cstring>

using namespace std;

int main(void) {
    float num0 = 1.0f;
    double num1 = 2.0;
    long double num2 = 3.0L;
    cout << "float : " << num0 << endl;
    cout << "size : " << sizeof(num0) << endl; 
    cout << "double : " << num1 << endl;
    cout << "size : " << sizeof(num1) << endl;  
    cout << "long double : " << num2 << endl; 
    cout << "size : " << sizeof(num2) << endl;

    /* error test */
    int i;
    float var0 = 1.0f, var1 = 0.0f, var2 = 0.0f;

    for ( i=0; i<10; i++ ) {
        var1 = var1 + 0.1;
    }
    if ( var0 == var1 ) {
        cout << "var0 == var1" << endl;
    } else if ( fabsf(var0-var1) <= FLT_EPSILON ) {
        cout << "var0 ~= var1" << endl;
    } else {
        cout << "var0 != var1 errbig" << endl;
    }

    for ( i=0; i<1000; i++ ) {
        var2 = var2 + 0.001;
    }
    if ( var0 == var2 ) {
        cout << "var0 == var2" << endl;
    } else if ( fabsf(var0-var2) <= FLT_EPSILON ) {
        cout << "var0 ~= var2" << endl;
    } else {
        cout << "var0 != var2 errbig" << endl;
    }

    /* FLT_EPSILON */
    unsigned int f0 = 0b00111111100000000000000000000000; // 1.0
    float f1;
    memcpy(&f1, &f0, sizeof(f0));
    cout.precision(64); // 소수점 자리 64까지 표현
    cout << "f1 : " << f1 << endl;

    unsigned int f2 = 0b00111111100000000000000000000001;
    float f3;
    memcpy(&f3, &f2, sizeof(f0));
    cout << "f3 : " << f3 << endl;

    cout << "f3 - f1 : " << f3 - f1 << endl;
    cout << "FLT_EPSILON : " << FLT_EPSILON << endl;

    /* FLT etc */
    float f4 = FLT_MAX, f7, f8;
    unsigned int f5 = 0b01111111111111111111111111111111; // not FLT_MAX
    unsigned int f6 = 0b01111111011111111111111111111111; // 8bit last bit -1 is FLT_MAX
    memcpy(&f7, &f5, sizeof(f5));
    memcpy(&f8, &f6, sizeof(f5));
    cout << "FLT_MAX f4 : " << f4 << endl;
    cout << "f7 : " << f7 << endl;
    cout << "f8 : " << f8 << endl;

    unsigned int f9 = 0b01111111100000000000000000000000; // INF : 8bit all 1, others 0
    float f10;
    memcpy(&f10, &f9, sizeof(f9));
    cout << "INF f10 : " << f10 << endl;

    // FLT_MIN vs FLT_TRUE_MIN
    
    return 0;
}

/*
 * -118.625 = -1110110.101(2) = -1.110110101(2) * 2^6 
 * binary
 * * 1 (sign bit) - 1bit
 * * 10000101 (^6) - 8bits - ? : 127 mean 0, so 127+6 = 133 = 10000101(2) 
 * * 11011010100000000000000  - 23bits
*/
