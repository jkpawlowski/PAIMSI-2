#pragma once
template <typename Typ>
void swap(Typ* t, Typ a, Typ b) { Typ tmp = t[a]; t[a] = t[b]; t[b] = tmp; }

template <typename Typ>
void qs(Typ *t, Typ org, Typ end)
{
	Typ piv = t[end];
	Typ i = org;//granica
	Typ j = i;//ostatni przeniesiony element
	if (org != end)
		while (i != end)
			if (t[i] < piv) swap<Typ>(t, j++, i++);
			else i++;
			swap<Typ>(t, j, end);
			if (j != org)qs<Typ>(t, org, j - 1);
			if (j != end)qs<Typ>(t, j + 1, end);

}
template <typename Typ>
void quick_sort(Typ *t, Typ size)
{

	qs<Typ>(t, 0, size - 1);

}
