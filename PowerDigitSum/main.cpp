#include <iostream>

using namespace std;

const uint32_t NUM_CELLS = 251;
uint8_t cells[NUM_CELLS];

int main() {
    uint32_t i;
    uint8_t remainder;
    uint8_t bring_down;
    uint32_t accumulator;
    uint32_t sum = 0;
    bool zero = false;

    cells[NUM_CELLS - 1] = 1;

    while(!zero){
        remainder = 0;
        zero = true;

        for( i = NUM_CELLS - 1; i >= 0; --i ){
            bring_down = cells[i];
            zero = (bring_down ? false : zero);
            accumulator = (remainder << 4) + bring_down;
            cells[i] = accumulator / 10;
            remainder = accumulator % 10;
        }
        sum += remainder;
    }

    cout << sum;
}
