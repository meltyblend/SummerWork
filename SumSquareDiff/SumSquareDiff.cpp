/*The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/



/*NOTES:
 * 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10
 *
 * THE SUMMATION OF 10
 *
 * the summation of 10 is found by using the summation formula
 *
 *       FORMULA: N(N+1)/2
 *       FORMULA 2: N(N+1)(2N+1)/6
 * */
#include <iostream>

using namespace std;

int main() {
    int sum1{0};
    int sum2{0};
    int total{0};

    // the for loop that iterates to the desired number of times for both of the problems
    for (int i = 1; i <= 100; i++){
        sum1 = i * (i + 1) / 2; // implementing the summation formula

        sum2 = i * (i + 1) * (2 * i + 1) / 6; // implementing the summation formula for squared numbers
    }

    sum1  =  sum1 * sum1;

    cout <<  "This is sum1 squared = " << sum1 << endl;
    cout << "This is sum2 total = " << sum2 << endl;

    total = sum1 - sum2;
    cout << "The sum square difference is = " << total << endl;

}
