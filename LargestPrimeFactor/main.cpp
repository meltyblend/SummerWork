/*The prime factors of 13195 are 5, 7, 13, and 29.
 *
 * What is the largest prime factor of the number 600851475143
 *
 * */
#include <iostream>

using namespace std;

int main() {
    long long num = 600851475143; // The number for which we want to find prime factors
    long long newNum{0}; // Variable to store the current prime factor

    for( long long i = 2; i <= num; i++ ){ // Loop to iterate from 2 to the given number 'num'
        if ( num % i == 0 ){ // Check if 'num' is divisible by 'i' (potential prime factor)
            newNum = i; // Set the current prime factor to 'newNum'
            int count{0}; // Initialize a counter for checking if 'newNum' is prime or not

            for ( long long j = newNum - 1; j > 1; j-- ){ // Loop to check if 'newNum' is divisible by any number other than 1 and itself
                if ( newNum % j == 0 ){ // If 'newNum' is divisible by 'j', increment the counter
                    count++;
                }
            }

            if ( count == 0 ){ // If the counter remains 0, it means 'newNum' is prime
                cout << newNum << " "; // Print the prime factor
            }
        }
    }

    return 0;
}

