#include "MinHeap.h"
#include <math.h>
using namespace std;

vector<int> lastLevel(MinHeap & heap)
{
        // Your code here
    std::vector<int> v;
    int size = heap.elements.size();
    if (size < 2) return v;
    if (size == 2) {
      v.push_back(heap.elements[1]);
      return v;
    }

    int logm;
    logm = log2(size);
    // int x = log2(7);
    // cout << x << endl;
    int idx = pow(2, logm);
    if (idx == size) idx = pow(2, logm-1);
    // cout << idx << endl;
    for (int i = idx; i < size; ++i){
      v.push_back(heap.elements[i]);
    }
    return v;
}
