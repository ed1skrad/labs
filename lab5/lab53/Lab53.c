#include "Solution53.h"

int main()
{
    int N = declaringArrayLines();

    int M = declaringArrayCollumns();

    int** A = matrix(N, M);

    enterArray(A, N, M);

    printArray(A, N, M);

    Solution(A, N, M);
    
    freematrix(A, N, M);

}
