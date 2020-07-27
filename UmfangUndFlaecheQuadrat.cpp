#include <iostream>
using namespace std;

double laenge;

int main()
{
	cout << "Bitte geben Sie die Seitenlaenge ein (in cm): ? ";
	cin >> laenge;
	cout << "Der Umfang des Quadrats betraegt (in cm): " << laenge * 4 << endl;
	cout << "Die Flaeche des Quadrats betraegt (in cm*cm): " << laenge * laenge << endl;
	system("PAUSE");
	return 0;
}