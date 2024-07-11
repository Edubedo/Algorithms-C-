#include <iostream>
using namespace std;

void calculateIVA() {
    int n1, iva = 0, total = 0;
    cout << "Dígite el precio: ";
    cin >> n1;
    iva = 16;
    total = n1 + ((iva * n1) / 100);
    cout << "El precio más IVA es de: " << total << endl;
}
