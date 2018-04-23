#include <iostream>
#include "heapsort.h"
#include<algorithm>

using namespace std;

void heap_sort(int*t, long org, long end) {
	
	make_heap(t, t+end);
	sort_heap(t, t + end);
	
}