#include <iostream>
#include <istream>
//Für unsere Schaltjahrberechnung besteht folgende Bedingung.
// (Jahr) % 4 muss 0 ergeben.
// (Jahr) % 100 = !Schaltjahr

int main() {

	using namespace std;

	int Jahr;

	bool schaltjahr = false;

	cout << "Fuer welches Jahr moechtest du ueberpruefen?\n";
	cin >> Jahr;

	if (0 == Jahr % 4) {
		schaltjahr = true;
		if (0 == Jahr % 100) {
			schaltjahr = false;
			if (0 == Jahr % 400)
				schaltjahr = true;
		}
	}
	if (schaltjahr)
	{
		cout << "Dein Jahr ist ein Schaltjahr! :)\n";
	}
}