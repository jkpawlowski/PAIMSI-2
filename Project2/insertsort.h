#pragma once
template <typename Typ>
void insert_sort(Typ*t, Typ size) {//druga z metod sortowania dla hybrydowego

	Typ x, i, j;// pomocniczo
	for (i = 1; i<=size; i++)
	{
		x = t[i];
		for (j = i-1; (j>=0) && (x<t[j]); j--)
			t[j+1] = t[j];
		t[j+1] = x;
	}
}