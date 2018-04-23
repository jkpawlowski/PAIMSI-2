#pragma once
template <typename Typ>
void insert_sort(Typ*t, Typ size) {

	Typ x, i, j;
	for (i = 0; i<size; i++)
	{
		x = t[i];
		for (j = i; (j>0) && (x<t[j]); j--)
			t[j] = t[j - 1];
		t[j] = x;
	}
}