#include <iostream>

#ifndef ARRSIZE
#define ARRSIZE 20
#endif

using namespace std;

// sort fun

void printArr(int arr[], unsigned size) {
    for (unsigned i = 0; i < size; i++) {
      cout << arr[i] << ' ';
    }

    cout << '\n';
}

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int arr[ARRSIZE];

  for (size_t i = 0; i < ARRSIZE; i++) {
    arr[i] = rand() % 100;
  }

  printArr(arr, ARRSIZE);
  bubbleSort(arr, 0, ARRSIZE);
  printArr(arr, ARRSIZE);

  return 0;
}
