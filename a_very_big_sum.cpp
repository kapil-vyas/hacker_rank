#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
  long long int sum = 0;
  long int size = 0;
  long * array;
  cin >> size;
  array = new long[size];
  
  // read input
  for(int i = 0; i < size; i++) {
    cin >> array[i];
    sum += array[i];
  }
  cout << sum << endl;
  delete [] array;
  return 0;
}
