#include<iostream>

using namespace std;

int main() {
	int n1, n2, iva=0, total=0;

	cout<<"Dígite el precio: "; cin>>n1;

	iva = 16;
	total = n1 + ((iva * n1) / 100);

	cout <<"El precio mas IVA es de: " << total<<endl;


	return 0;
}
