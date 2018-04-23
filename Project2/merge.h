#pragma once

template <typename Typ>
void merge(Typ*t, Typ org, Typ ins, Typ end) {
	Typ l = end - org;

	Typ *tab = new Typ[l + 1];//tabela robocza potem na wyjscie
	Typ i = org;//"adres" lewy
	Typ j = ins;//"adres" prawy
	Typ k = 0;//licznik tabeli tymczasowej

	while ((i<ins) || (j <= end)) { //przepisuje posortowane
		if ((i < ins) && (j <= end)) {
			if (t[i] < t[j])
				tab[k++] = t[i++];
			else tab[k++] = t[j++];
		}
		else if (i < ins)tab[k++] = t[i++];
		else tab[k++] = t[j++];
	}

	for (k = 0; k <= l; k++)
		t[org + k] = tab[k];
	delete tab;
}
template <typename Typ>
void merge_sort(Typ*t, Typ org, Typ end) {

	if (org != end) {
		merge_sort<Typ>(t, org, (org + end) / 2);
		merge_sort<Typ>(t, 1 + (org + end) / 2, end);
		merge<Typ>(t, org, 1 + (org + end) / 2, end);
	}

}