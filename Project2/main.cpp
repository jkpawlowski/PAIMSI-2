#include <iostream>
#include "funkcje.h"
#include "merge.h"
#include "quick.h"

using namespace std;

int main() {
	int o=1;
	int size =1;
	int **t=new int*[1];
	*t= new int[1];
	

	menu();
	while (o != 0) {
		cout << "Podaj opcje: ";
		cin >> o;
		cout << endl;
		switch (o) {


		case 1:
			make_tab(t, size);
			break;
		case 2:
			print(*t, size);
			break;
		case 3:
			merge_sort(*t, 0, size - 1);
			break;
		case 4:
			quick_sort(*t,size);
			break;

		case 9:
			menu();
			break;
		default:
			break;
		}
	}return 0;
}
	
	

	


	
