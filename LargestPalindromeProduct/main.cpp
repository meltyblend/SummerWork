/*A palindromic number reads the same both ways. the largest palindrome made from the product of two 2-digit
 * numbers is 9009 = 91 * 99
 *
 * Find the largest palindrome made from the product of two 3-digit numbers
 * */
#include <iostream>

using namespace std;

int opposite(int n); // Function prototype

int main() {
    int greatest{0}; // Variable to store the greatest palindrome product

    for ( int i = 100; i <= 999; i++ ){ // Loop to generate numbers from 100 to 999
        for ( int j = 100; j <= 999; j++ ){ // Nested loop to compare each number to each other
            if( i * j == opposite(i * j) && i * j > greatest ) // Check if the product is a palindrome and greater than the current greatest
                greatest = i * j; // Update the greatest palindrome product
        }
    }

    cout << greatest; // Print the greatest palindrome product

    return 0;
}

int opposite(int n){ // Function definition to reverse the number
    int m{0}; // Variable to store the reversed number

    while ( n > 0){ // Loop until all digits of 'n' have been reversed

        m = m * 10 + n % 10; // Reverse the last digit of 'n' and append it to 'm'
        n = n / 10; // Remove the last digit from 'n'
    }

    return m; // Return the reversed number
}
