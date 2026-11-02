#include <iostream>
using namespace std;
int main() {
	//zadanie 1


	/*zadanie2
	int l;
	cout << "Podaj ilość liczb Fibonacciego: ";
	cin >> l;
	int* tab;
	tab = new int[l];
	tab[0] = 0;
	tab[1] = 1;
	cout << tab[0] << " " << tab[1] << " ";
	for (int i = 2; i < l; i++) {
		tab[i] = tab[i - 1] + tab[i - 2];
		cout << tab[i] << " ";
	}
	delete tab;
	//zadanie 3*/
	int sec = time(NULL);
	srand(sec);
	int tab[10];
	int suma = 0;
	for (int i = 0; i < 10; i++) {
		tab[i] = rand() % 10;
		cout << tab[i] << " ";
		suma = suma + tab[i];
	}
	suma = suma / 10;
	cout << '\n' << suma << endl;
	int wynik = 0;
	for (int i = 0; i < 10; i++) {
		if (tab[i] < suma) {
			wynik++;
		}
	}
	cout << wynik << endl;

	int min = tab[0];
	int maksymilian = tab[0];
	for (int i = 1; i < 10; i++) {
		if (tab[i] < min) {
			min = tab[i];
		}
		if (tab[i] > maksymilian) {
			maksymilian = tab[i];
		}
	}
	cout << "Najmniejsza wartosc: " << min << endl;
	cout << maksymilian << endl;

	//zadanie  4
		
}
