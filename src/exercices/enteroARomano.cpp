#include<iostream>
#include<math.h>

using namespace std;

void enteroARomano() {
	int numero, unidades, decenas, centenas, millares;


	// numero = 3231

	cout<<"Digita un numero: "; cin>>numero;

	unidades = numero % 10; numero /= 10; // unidades = 1, numero = 323
	decenas = numero % 10; numero /= 10; // decenas = 3, numero = 32
	centenas = numero % 10; numero /= 10; // centenas = 2, numero = 3
	millares = numero % 10; numero /= 10; // millares = 3, numero = 0

	switch(millares) {
			case 1: cout<<"M";break;
			case 2: cout<<"MM";break;
			case 3: cout<<"MMM";break;
		}

		switch(centenas) {
			case 1: cout<<"C";break;
			case 2: cout<<"CC";break;
			case 3: cout<<"CCC";break;
			case 4: cout<<"DC";break;
			case 5: cout<<"D";break;
			case 6: cout<<"DC";break;
			case 7: cout<<"DCC";break;
			case 8: cout<<"DCCC";break;
			case 9: cout<<"CM";break;
		}

		switch(decenas) {
			case 1: cout<<"X";break;
			case 2: cout<<"XX";break;
			case 3: cout<<"XXX";break;
			case 4: cout<<"XL";break;
			case 5: cout<<"L";break;
			case 6: cout<<"LX";break;
			case 7: cout<<"LXX";break;
			case 8: cout<<"LXXX";break;
			case 9: cout<<"XC";break;
		}
			switch(unidades) {
				case 1: cout<<"I";break;
				case 2: cout<<"II";break;
				case 3: cout<<"III";break;
				case 4: cout<<"IV";break;
				case 5: cout<<"V";break;
				case 6: cout<<"VI";break;
				case 7: cout<<"VII";break;
				case 8: cout<<"VIII";break;
				case 9: cout<<"IX";break;
		}



	}
