
#include <iostream>
using namespace std;
int main()
{
	int var1;
	int* ptrZ1 = &var1;
	cout << "Speicheradresse zu begin: " << &ptrZ1<<endl<<endl;
	
	cout << "Bitte Wert einlesen: ";
	cin >> var1;
	cout << "Wert unter der Speicheradresse " << &ptrZ1 << " lautet: " << *ptrZ1 << endl;
	cout << "Bitte Wert einlesen: ";
	cin >> var1;
	cout << "Wert unter der Speicheradresse " << &ptrZ1 << " lautet: " << *ptrZ1 << endl;
	cout << "Bitte Wert einlesen: ";
	cin >> var1;
	cout << "Wert unter der Speicheradresse " << &ptrZ1 << " lautet: " << *ptrZ1 << endl;

 

	return 0; 
	
}




void foo2()
{
	int z2 = 12;
	int* ptrZeiger2 = &z2;
	cout << "Speicherstelle: " << &ptrZeiger2 << endl;
	cout << "Wert: " << *ptrZeiger2 << endl;
	
}
