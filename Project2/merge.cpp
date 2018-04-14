#include "merge.h"

void merge(int*t,int org, int ins, int end) {
	int l = end - org;

	int *tab = new int[l+1];//tabela robocza potem na wyjscie
	int i = org;//"adres" lewy
	int j = ins;//"adres" prawy
	int k = 0;//licznik tabeli tymczasowej

	while ((i<ins) || (j<=end)) { //przepisuje posortowane
		if ((i < ins) && (j <= end)) {
			if (t[i] < t[j])
				tab[k++] = t[i++];
			else tab[k++] = t[j++];
		}
		else if (i < ins)tab[k++] = t[i++];
			else tab[k++] = t[j++];
	}

	for (k=0; k <= l; k++)
		t[org+k] = tab[k];
	delete tab;
}
void merge_sort(int*t,int org, int end) {

	if (org != end) {
		merge_sort(t,org, (org + end) / 2);
		merge_sort(t,1 + (org + end) / 2, end);
		merge(t,org, 1+(org + end) / 2, end);
	}

}
