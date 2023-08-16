/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17

Find the sum of all the primes below two million.*/

#include <iostream>

using namespace std;

bool isPrime(int n){

    //base case
    if ( n <= 1 ){
        return false;
    }

    // prime number generator
    // this prime number generator function has been updated to be i * i
    // what this does is that it checks the divisibility up to the square root of n
    // rather than checking up to n-1
    for ( int i = 2; i * i <= n; i++ ){
        if ( n % i == 0 ){
            return false;
        }
    }
    return true;
}

int main() {
    int n{2000000};
    long long total{0};

    for ( int i = 2; i <= n; i++ ){
        if ( isPrime(i) ){
            total += i; //adding all of the prime numbers together
        }
    }
    cout <<  total;
}
