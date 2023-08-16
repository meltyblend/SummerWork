/*2520  is the smallest number that can be divided by each of the numbers from
1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from
1 to 20?
 *
 *
 * */

#include <iostream>

using namespace std;

int main() {
    int num{20}; // Starting number
    int j{1}; // Counter variable

    while(j < 20) { // Loop until 'j' reaches 20
        if (num % j != 0) { // Check if 'num' is not divisible by 'j'
            num += 20; // Increment 'num' by 20 (since the number must be divisible by all numbers from 1 to 20)
            j = 1; // Reset 'j' to 1 to start checking divisibility from the beginning
        }
        j += 1; // Increment 'j' by 1
    }

    cout << num; // Print the smallest number divisible by all numbers from 1 to 20

    return 0;
}
