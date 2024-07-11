#include<iostream>

using namespace std;

void operacionBasica() {
	float a,b,c,d,result;

		cout<<"Ingresa el valor de a:"; cin>>a;
		cout<<"Ingresa el valor de b:"; cin>>b;
		cout<<"Ingresa el valor de c:"; cin>>c;
		cout<<"Ingresa el valor de d:"; cin>>d;

		result = ((a + b) / (c + d));

		cout.precision(3);
		cout<<"Resultado de la operación; "<<result<<endl;
}
