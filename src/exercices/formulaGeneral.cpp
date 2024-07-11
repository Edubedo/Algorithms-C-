#include<iostream>
#include<math.h>
using namespace std;

void formulaGeneral() {
	float a,b,c,x1,x2;

	cout<<"Ingresa el valor de A: "; cin>>a;
	cout<<"Ingresa el valor de B: "; cin>>b;
	cout<<"Ingresa el valor de C: "; cin>>c;

	x1 = ((-b + sqrt(pow(b, 2) - (4 * a * c))) /  (2 * a));
	x2 = ((-b - sqrt(pow(b, 2) - (4 * a * c))) /  (2 * a));

	cout.precision(3);
	cout<<"El valor de x1 es: "<<x1<<endl;
	cout<<"El valor de x2 es: "<<x2<<endl;

}
