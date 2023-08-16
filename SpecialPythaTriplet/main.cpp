/*A  pythagorean triplet is a set of three natural numbers a < b < c, for which,
 * a^2 + b^2 = c^2 .
 *
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 *
 * there exists exactly one pythagorean triplet for which a + b + c = 1000
 *
 * find the product abc.
 *
 * */

#include <iostream>

using namespace std;


int main(){

    int abc{1000};
    int a{0}, b{0}, c{0};
    int total{0};

    for ( a = 1; a <= abc/3; a++ ){          //generating a variables
        for ( b = a + 1; b<=abc/2; b++ ){   // generating b variabels where b > a
            c = abc - a - b;

            if( a*a + b*b == c*c ) {
                cout << "a: " << a << " b: " << b << " c: " << c << endl;
                total = a*b*c;
                cout << "total: " << total;
            }
        }
    }
    return 0;
}
