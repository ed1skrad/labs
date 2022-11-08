#include "Solution51.h"

#define limit 100 // ряд чисел 

int main() {
    int i = 0, j = 0;

    int* eNumbers = 0;

    allocateArray(eNumbers, limit);
    Solution(eNumbers, limit);
    printArray(eNumbers, limit);

    return 0;
}
