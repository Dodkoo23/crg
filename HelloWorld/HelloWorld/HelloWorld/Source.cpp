#include<iostream>
using namespace std;
/* POZNAMKYYYY*/
int main() {
	/*cout << "Meno: Dominik" << endl;
	cout << "Mesto: CA" <<endl;
	cout << "ahoj svet!" << endl;
	int vek;
	cin >> vek;
	if (vek >= 18) {
		cout << "Vstup povoleny" << endl;
	}
	cout << " Toto sa stane vzdy";
	return 0;*/
	/*int cislo;
	cout << "zadaj cislo" << endl;
	cin >> cislo;

	if (cislo > 0) {
		cout << "toto ciilo je kladne" << endl;
	}
	else {
		cout << "toto cislo je zaporne" << endl;
	}
	cout << "toto sa vykona vzdy" << endl;
}*/
/*int cislo = 5;

if (cislo == 1) {
	cout << "cislo je 1";
}
else if (cislo == 2) {
	cout << "cislo je 2";
}
else if (cislo == 3) {
	cout << "cislo je 3";
}
else if (cislo == 4) {
	cout << "cislo je 4";
}
else {
	cout << "zadaj si ine cislo" << endl;
}
cout << endl << "--------" << endl; */

	string slovo;
	cout << "zadaj slovo ";
	cin >> slovo;
	int hlasitost;
	cout << "zadaj hlasitost ";
	cin >> hlasitost;

	const string google = "OkGoogle";
	const string siri = "HeySiri";

	if (slovo == google || slovo == siri) {
		cout << "Zvysujem hlasitos na" << hlasitost;
	}
	else {
		cout << "Chybny prikaz" << endl;
	}
}
	
	