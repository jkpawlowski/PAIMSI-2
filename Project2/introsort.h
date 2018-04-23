#pragma once
#include <algorithm>    
#include <vector>       
#include <iostream>
template <typename Typ>
void hybrid_sort(Typ *t, Typ size) {

	intro_sort<Typ>(t, 0, size - 1, (Typ)log2(size));
	//insert_sort(t, size);
}
template <typename Typ>
void intro_sort(Typ *t, Typ org, Typ end, Typ M)
{
	if (M <= 0) heap_sort<Typ>(t, org, end);
	else {

		Typ piv = t[end];
		Typ i = org;//granica
		Typ j = i;//ostatni przeniesiony element
		if (org != end)
			while (i != end)
				if (t[i] < piv) swap(t, j++, i++);
				else i++;
				swap(t, j, end);
				if (j != org)intro_sort<Typ>(t, org, j - 1, M - 1);
				if (j != end)intro_sort<Typ>(t, j + 1, end, M - 1);

	}
}
