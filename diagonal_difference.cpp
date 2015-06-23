#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum_major_diagonal = 0;
    int sum_minor_diagonal = 0;

    // Allocate array
    int ** array = new int*[N];
    for( int row = 0; row < N; row++ ) {
        array[row] = new int[N];
        for( int col = 0; col < N; col++ ) {
            cin >> array[row][col];
            if(row == col) {
                sum_major_diagonal += array[row][col];
            }
            if(N-1-row-col == 0) {
                sum_minor_diagonal += array[row][col];
            }
        }
    }
    
    int abs_diff = sum_major_diagonal - sum_minor_diagonal;
    if( abs_diff < 0) abs_diff *= -1;
    cout << abs_diff << endl;

    // Deallocate:
    for( int row = 0; row < N; row++ ) {
        delete [] array[row];
    }
    delete [] array;
    return 0;
}

