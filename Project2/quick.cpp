#include "quick.h"

void quick_sort(int *t,int size)
{
	
	qs(t, 0, size - 1);

}

void qs(int *t, int org, int end)
{
	int piv = t[end];
	int i = org;//granica
	int j = i;//ostatni przeniesiony element
	if (org != end)
		while (i != end)
			if (t[i] < piv) swap(t, j++, i++);
			else i++;
			swap(t, j, end);
			if (j  != org)qs(t, org, j - 1);
			if (j  != end)qs(t, j + 1, end);
		
}
void swap(int* t, int a, int b) { int tmp = t[a]; t[a] = t[b]; t[b] = tmp; }