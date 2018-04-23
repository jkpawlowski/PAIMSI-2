#include "introsort.h"
#include "quick.h"
#include "insertsort.h"
#include "heapsort.h"

void hybrid_sort(int *t, long size) {

	intro_sort(t,0, size-1, (int)log2(size));
	//insert_sort(t, size);
}

void intro_sort(int *t,long org, long end,int M)
{
	if (M <= 0) heap_sort(t, org, end);
	else {

		int piv = t[end];
		int i = org;//granica
		int j = i;//ostatni przeniesiony element
		if (org != end)
			while (i != end)
				if (t[i] < piv) swap(t, j++, i++);
				else i++;
				swap(t, j, end);
				if (j != org)intro_sort(t, org, j - 1,M-1);
				if (j != end)intro_sort(t, j + 1, end,M-1);

	}
}
