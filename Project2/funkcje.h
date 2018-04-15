#pragma once
#include <iostream>
#include <time.h>

using namespace std;

void make_tab(int **t, int& size) {
	cout << "rozmiar: ";
	cin >> size;

	delete []t[0];

	*t = new int[size];
	for (int i = 0; i < size; i++)
		t[0][i] = i;

	srand(time(NULL));

	int i, j, tmp;
	int l = size - 1;

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
		<< "9.Menu" << endl;

}

void print(int*t, int &size) {
	for (int i = 0; i < size; i++)
		std::cout << t[i] << std::endl;
}

