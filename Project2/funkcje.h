#pragma once
#include <iostream>
#include <time.h>


using namespace std;

template <typename Typ>
void make_tab(Typ **t, Typ& size) {
	cout << "rozmiar: ";
	cin >> size;

	delete []t[0];

	*t = new Typ[size];
	for (Typ i = 0; i < size; i++)
		t[0][i] = i;

	srand((Typ)time(NULL));

	Typ i, j, tmp;
	Typ l = size - 1;

	while (l) {
		i = rand() % size + 0;
		j = rand() % size + 0;
		tmp = t[0][i];
		t[0][i] = t[0][j];
		t[0][j] = tmp;
		l--;
	}
}
void menu() {
	cout << "1.Podaj rozmiar i wymieszaj" << endl
		<< "2.Wyswietl" << endl
		<< "3.Merge sort" << endl
		<< "4.quick sort" << endl
		<< "5.intro sort" << endl
		<< "9.Menu" << endl;

}
template <typename Typ>
void print(Typ*t, Typ size) {
	for (Typ i = 0; i < size; i++)
		std::cout << t[i] << std::endl;
}

