
#include <iostream>
using namespace std;
void referenzen();
void VOID_ZEIGER();

string Name;
string& Ref2 = Name;
int main()
{
	/*int var1;
	int* ptrZ1 = &var1;
	cout << "Speicheradresse zu beginn: " << &ptrZ1<<endl<<endl;
	
	cout << "Bitte Wert einlesen: ";
	cin >> var1;
	cout << "Wert unter der Speicheradresse " << &ptrZ1 << " lautet: " << *ptrZ1 << endl;
	cout << "Bitte Wert einlesen: ";
	cin >> var1;
	cout << "Wert unter der Speicheradresse " << &ptrZ1 << " lautet: " << *ptrZ1 << endl;
	cout << "Bitte Wert einlesen: ";
	cin >> var1;
	cout << "Wert unter der Speicheradresse " << &ptrZ1 << " lautet: " << *ptrZ1 << endl<<endl;
	*/
	//referenzen();
	//cout << Ref2; 
	VOID_ZEIGER();

	return 0; 

}

void VOID_ZEIGER()
{
	int Wert1;
	cout << "Geben Sie einen (INT) Wert ein: ";
	cin >> Wert1;
	void* vptrWert;
	vptrWert = ((int*)& Wert1);
	cout << "VZeiger Output: " << *((int*)vptrWert)<<endl; 

	float Wert2; 
	cout << "Geben Sie einen (FLOAT) Wert ein: ";
	cin >> Wert2; 
	vptrWert = ((float*)& Wert2);
	cout << "VZeiger Output: " << *((float*)vptrWert) << endl;
	
	double Wert3;
	cout << "Geben Sie einen (DOUBLE) Wert ein: ";
	cin >> Wert3;
	vptrWert = ((double*)& Wert3);
	cout << "VZeiger Output: " << *((double*)vptrWert) << endl;

	char Wert4;
	cout << "Geben Sie einen (CHAR) Wert ein: ";
	cin >> Wert4;
	vptrWert = ((char*)& Wert4);
	cout << "VZeiger Output: " << *((char*)vptrWert) << endl;

	string Wert5;
	cout << "Geben Sie einen (STRING) Wert ein: ";
	cin >> Wert5;
	vptrWert = ((string*)& Wert5);
	cout << "VZeiger Output: " << *((string*)vptrWert) << endl;
}



void referenzen()
{
	int var1 = 12;
	int& Ref1=var1;
	cout << Ref1<<endl;
	var1 = var1 + 8;
	cout << Ref1;

}

