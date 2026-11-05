#include <iostream>
using namespace std;
int main() {
	//zadanie 1
	/*
	int tab[10];
	int n = 0;
	cout << "Podaj 10 liczb: ";
	for (int i = 9;i >=0; i--) {
		cin >> n;
		tab [i] = n;
		cout << "[ " << tab[i] " ]" << endl;
	}

	//zadanie2
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
	//zadanie 3
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
	int tab[10];
	int n = 0;
	cout << "Podaj liczbe elementow: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tab[i];
		cout << "[" << tab[i] << "]" << endl;
	}
	for (int i = n; i >=n && i < 10; i++) {
		tab[i] = 0;
		cout << tab[i] << " " << endl;
	}

	//zadanie 5
	int tab[10];
	int n = 0;
	cout << "Podaj liczbe elementow: ";
	cin >> n;
	int i = 0;
	for (int i = 0; i <n; i++) {
		cin >> tab[i];
		cout << tab[i] << "    ";
	}
	for (int i = n; i>=n && i < 10; i++) {
		tab[i] = 0;
		cout << tab[i] << "    ";
	}
	cout << tab[10] << endl;
	// zadanie 5
	int sec = time(NULL);
	srand(sec);
	int tab[10];
	int lucky = rand() % 10;

	cout << "Szczesliwy numerek: " << lucky << endl;
	for (int i = 0; i < 10; i++) {
		tab[i] = rand() % 10;
		cout << tab[i] << "	";
	}
	int licznik = 0;
		for (int i = 0; i < 10; i++) {
			if (tab[i] == lucky) {
				licznik++;
			}
			else if (tab[i] != lucky) {
				continue;
			}
		}
		
	cout << "Szczesliwy numerek pojawil sie: " << licznik<< " razy" << endl;
	
	//zadanie 6
	int n = 0;
	cout << "Podaj rozmiar macierzy: ";
	cin >> n;
	int** tabA = new int* [n];
	int** tabB = new int* [n];
	int** tabC = new int* [n];
	for (int i = 0; i < n; i++) {
		tabA[i] = new int[n];
		tabB[i] = new int[n];
		tabC[i] = new int[n];
	}
	cout << "Wpisywanie danych macierzy A: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "[" << i << "][" << j << "] = ";
			cin >> tabA[i][j];
		}
	}
	cout << "Wpisywanie danych macierzy B: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "[" << i << "][" << j << "] = ";
			cin >> tabB[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "[" << i << "][" << j << "] = ";
			tabC[i][j] = tabA[i][j] + tabB[i][j];
			cout << tabC[i][j] << " ";
		}
	}

	// zadanie 7
int n = 0;
	cout << "Podaj rozmiar macierzy: ";
	cin >> n;
	int** tabA = new int* [n];
	int** tabB = new int* [n];
	int** tabC = new int* [n];
	for (int i = 0; i < n; i++) {
		tabA[i] = new int[n];
		tabB[i] = new int[n];
		tabC[i] = new int[n];
	}
cout << "Wpisywanie danych macierzy A: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "[" << i << "][" << j << "] = ";
			cin >> tabA[i][j];
		}
	}
	

cout << "Wpisywanie danych macierzy B: " << endl;
for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
		cout << "[" << i << "][" << j << "] = ";
		cin >> tabB[i][j];
	}
}
for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
		cout << "[" << i << "][" << j << "] = ";
		tabC[i][j] = tabA[i][j] * tabB[i][j];
		cout << tabC[i][j] << " ";
	}
}

//zadanie 8
int n = 0;
cout << "Podaj rozmiar macierzy: ";
cin >> n;
int** tabA = new int* [n];
int** tabB = new int* [n];
int** tabC = new int* [n];
for (int i = 0; i < n; i++) {
	tabA[i] = new int[n];
	tabB[i] = new int[n];
	tabC[i] = new int[n];
}
cout << "Wpisywanie danych macierzy A: " << endl;
for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
		cout << "[" << i << "][" << j << "] = ";
		cin >> tabA[i][j];
	}
}
cout << "Wpisywanie danych macierzy B: " << endl;
for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
		cout << "[" << i << "][" << j << "] = ";
		cin >> tabB[i][j];
	}
}
int przekatna = 0;
for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
		if (i == j) {
			przekatna = przekatna + tabA[i][j] + tabB[i][j];
		}
	}
}
cout << "Suma elementow na przekatnej macierzy = " << przekatna << endl;


// zadanie 9 
int tab[10];
int n = 0;
for (int i = 0; i < 10; i++) {
	cin >> tab[i];
}
int tmp = 0;
for (int i = 0; i < 10; i++) {
	for (int j = 1; j < 10; j++) {
		if (tab[j] < tab[j - 1]) {
			tmp = tab[j];
			tab[j] = tab[j - 1];
			tab[j - 1] = tmp;
		}
	}
}
for (int i = 0; i < 10; i++) {
	cout << tab[i] << " " << endl;
}


//zadanie 10
int tab[8][8];
int i = 0;
int j = 0;
for (int i = 0; i < 8; i++) {
	for (int j = 0; j < 8; j++) {
		cout <<"[ " << i << " ][ " << j << " ] = ";
		tab[i][j] = i + j;
		cout << tab[i][j];
	}
	cout << "\n" << endl;
}
int kolumna = 0;
for (int i = 0; i < 8; i++) {
	for (int j = 0; j < 8; j++) {
		kolumna = kolumna + tab[i][j];
	}
	cout << "Suma kolumny " << i << " = " << kolumna << endl;
}
int wiersz = 0;
for (int j = 0; j < 8; j++) {
	for (int i = 0; i < 8; i++) {
		wiersz = wiersz + tab[i][j];
	}
	cout << "Suma wiersza " << j << " = " << wiersz << endl;
}
int suma = 0;
for (int i = 0; i < 8; i++) {
	for (int j = 0; j < 8; j++) {
		suma = suma + tab[i][j];
	}
}

cout << "Suma wszystkich elementow macierzy = " << suma << endl;
//nie byłam pewna czy macierz miała być wczytywana z klawiatury czy nie, więc zrobiłam z rosnącymi wartościami

//zadanie 11

int t[8][6], minimum[2] = { 0, 0 }, maximum[2] = { 0, 0 };

for (int i = 0; i < 8; i++) {
	for (int j = 0; j < 6; j++) {
		t[i][j] = (rand() % 10) + 1;
	}
}

int min = t[0][0], max = 0;

for (int i = 0; i < 8; i++) {
	for (int j = 0; j < 6; j++) {
		if (t[i][j] > max) {
			max = t[i][j];
			maximum[0] = i;
			maximum[1] = j;
		}
		if (t[i][j] < min) {
			min = t[i][j];
			minimum[0] = i;
			minimum[1] = j;
		}
	}
}

cout << "Najwieksza wartosc w macierzy wynosi: " << max << " i znajduje sie na wspolrzednych o wartosciach x: " << maximum[0] << " i y: " << maximum[1]
<< "\nNajmniejsza wartosc w macierzy wynosi: " << min << " i znajduje sie na wspolrzednych o wartosciach x: " << minimum[0] << " i y: " << minimum[1];


//zadanie 12
	int tab[6][6];
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << "[" << i << "][" << j << "] = ";
			tab[i][j] = i + j;
			cout << tab[i][j] << "\t";
		}
		cout << "\n" << endl;
	}
	int przekatna = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 5; j >= 0; j--) {
			if (i == j) {
				przekatna = przekatna + tab[i][j];
			}
		}
	}
	cout << przekatna << endl;


// zadanie 13
	int tab[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "[" << i << "][" << j << "] = ";
			cin >> tab[i][j];
		}
		cout << "\n" << endl;
	}
	bool symetria = true;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (tab[i][j] != tab[j][i]) {
				symetria = false;
				break;
			}
		}
		if (symetria = false) {
			break;
		}
	}
	if (symetria = true) {
		cout << "Macierz jest symetryczna" << endl;
	}
	else {
		cout << "Macierz nie jest symetryczna" << endl;
	}

//zadanie 14
	int tab[5][5];
	int n = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "[" << i << "][" << j << "] = ";
			cin >> tab[i][j];
		}
		cout << "\n" << endl;
	}
	int k = 0;
	cout << "Podaj liczbe: " << endl;
	cin >> k;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			tab[i][j] = tab[i][j] * k;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "[" << i << "][" << j << "] = " << tab[i][j] << endl;
		}
	}
//zadanie 15
	int tab[8][4];
	int n = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++) {
			tab[i][j] = i + j;
			cout << tab[i][j] << "  ";
		}
		cout << "\n" << endl;
	}
	cout << "Podaj liczbe: " << endl;
	cin >> n;
	int licznik = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++) {
			if (tab[i][j] == n) {
				
				licznik++;
			}
			else {
				continue;
			}
		}
	}
	cout << "Liczba " << n << " znalazla sie w tablicy " << licznik << " razy" << endl;

	// zadanie 16

int tab[5][5];
int n = 0;
for (int i = 0; i < 5; i++) {
	for (int j = 0; j < 5; j++) {
		cout << "[" << i << "][" << j << "] = " << endl;
		cin >> tab[i][j];
	}
	cout << "\n" << endl;
}
bool jednostkowa = true;
for (int i = 0; i < 5; i++) {
	for (int j = 0; j < 5; j++) {
		if (i == j && tab[i][j] != 1) {
			jednostkowa = false;
			break;
		}
		if (i != j && tab[i][j] != 0) {
			jednostkowa = false;
			break;
		}
	}
}
if (jednostkowa) {
	cout << "Macierz jest jednostkowa";
}
else {
	cout << "Macierz nie jest jednostkowa";
}
	
//zadanie 17
int n, m, nr_wiersza = 1, nr_kolumny = 1;

cout << "Podaj ilosc wierszy: ";
cin >> n;
cout << "Podaj ilosc kolumn: ";
cin >> m;
int* sum_wiersz = new int[n]();
int* sum_kolumna = new int[m]();
int** t = new int* [n];
for (int i = 0; i < n; i++) t[i] = new int[m];

for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		cout << "Podaj liczbe na pozycji: " << i + 1 << " " << j + 1 << ": ";
		cin >> t[i][j];
	}
}

for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		sum_wiersz[i] += t[i][j];
		sum_kolumna[j] += t[i][j];
	}
}

int sum_najw_wier = sum_wiersz[0], sum_najw_kol = sum_kolumna[0];

for (int i = 0; i < n; i++) {
	if (sum_wiersz[i] > sum_najw_wier) {
		sum_najw_wier = sum_wiersz[i];
		nr_wiersza = i + 1;
	}
}

for (int i = 0; i < m; i++) {
	if (sum_kolumna[i] > sum_najw_kol) {
		sum_najw_kol = sum_kolumna[i]; nr_kolumny = i + 1;
	}
}

cout << "Najwieksza suma wierszy wynosi: " << sum_najw_wier << " i jest to " << nr_wiersza << " wiersz"
<< "\nNajwieksza suma kolumn wynosi: " << sum_najw_kol << " i jest to " << nr_kolumny << " kolumna";

for (int i = 0; i < n; i++) delete[] t[i];
delete[] t;

delete[] sum_wiersz;
delete[] sum_kolumna;
*/
}

