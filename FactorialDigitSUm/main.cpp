#include <iostream>

using namespace std;

int factorial( int n ){
    int fact;

    if ( n == 1 ){
        fact = 0;
    }

    for ( int i = 0; i <= n; i++ ){
        fact = n * ( n - 1 );
    }

    cout << fact;

    return fact;
}

int main() {

    factorial(10);



}

