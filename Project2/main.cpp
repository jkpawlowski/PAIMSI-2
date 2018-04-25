#include <iostream>
#include "funkcje.h"
#include "merge.h"
#include "quick.h"
#include "introsort.h"
#include "insertsort.h"
#include "heapsort.h"

using namespace std;

int main() {
	
	typedef unsigned int Typ; //typ dla naszej tablicy elementow
	Typ size = 1;


	Typ o=1;
	Typ **t=new Typ*[1];
	*t= new Typ[size];
	
	

	menu();

	while (o != 0) {
		cout << "Podaj opcje: ";
		cin >> o;
		cout << endl;
		switch (o) {
			make_tab<Typ>(t, size);

		case 1:
			make_tab<Typ>(t, size);
			break;
		case 2:
			print<Typ>(*t, size);
			break;
		case 3:
			merge_sort<Typ>(*t, 0, size - 1);
			break;
		case 4:
			quick_sort<Typ>(*t,size);
			break;
		case 5:
			hybrid_sort<Typ>(*t,size);
			break;
		case 6:
			heap_sort<Typ>(*t, 0, size); //kopcowanie jak ktos chce
			break;
		case 7: 
			if (Posortowane<Typ>(*t, size)) cout <<" posortowane "<< endl;
			else cout << "nie posortowane" << endl;
			break;
		case 9:
			menu();
			break;
		default:
			break;
		}
	}return 0;
}
	
	

	


	
