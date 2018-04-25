#pragma once
#include <iostream>
#include <time.h>

float PROCENT_POSORTOWANYCH = 0;
bool W_KOLEJNOSCI = 1; // 1- od 0 do max, 0- od max do 0

using namespace std;

template <typename Typ>
void make_tab(Typ **t, Typ& size) { //allokacja tablicy, pomieszanie zawartosci
	cout << "rozmiar: ";
	cin >> size;

	delete []t[0];

	*t = new Typ[size];
	if(W_KOLEJNOSCI)
	for (Typ i = 0; i < size; i++)
		t[0][i] = i;
	else
	for (Typ i = 0; i < size; i++)
		t[0][i] = size-1-i;

	srand((Typ)time(NULL));

	Typ i, j, tmp;
	long double l = size;
	float pr = 100 - PROCENT_POSORTOWANYCH;
	l =(l*pr)/100;
	l = l / 2;
	l = (Typ)l;
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
		<< "5.hybrid sort" << endl
		<< "7.sprawdz" << endl
		<< "9.Menu" << endl;

}
template <typename Typ>
void print(Typ*t, Typ size) {
	for (Typ i = 0; i < size; i++)
		std::cout << t[i] << std::endl;
}

template <typename Typ>
bool Posortowane(Typ*t, Typ size) {
	for (Typ i = 0; i < size; i++)
		if (t[i] != i)
			return false;
	return true;
}

