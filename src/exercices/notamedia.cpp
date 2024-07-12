  #include<iostream>

using namespace std;

void notaMedia() {
float a,b,c,d,e,f,result;


		cout<<"Ingresa el valor a: "; cin>>a;
		cout<<"Ingresa el valor b: "; cin>>b;
		cout<<"Ingresa el valor c: "; cin>>c;
		cout<<"Ingresa el valor d: "; cin>>d;
		cout<<"Ingresa el valor e: "; cin>>e;
		cout<<"Ingresa el valor f: "; cin>>f;

		result = (( (a)+(b/c) ) / ((d) +(e/f)));

		cout.precision(3);
		cout<<"Resultado: "<<result<<endl;
}
