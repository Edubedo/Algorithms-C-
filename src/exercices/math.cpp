#include<iostream>
#include<math.h>

using namespace std;

void mathLibraryBasics() {
	float cateto1 = 0, cateto2 = 0, hipotenusa = 0;

		cout<<"Ingresa la medida en cm de un cateto: "; cin>>cateto1;
		cout<<"Ingresa la medida en cm de otro cateto: "; cin>>cateto2;

		hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

		cout<<"Hipotenusa: "<<hipotenusa<<endl;
}
