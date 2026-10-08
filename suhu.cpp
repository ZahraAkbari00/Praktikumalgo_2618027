#include <iostream> 
using namespace std;

int main() {
	float celcius, fahrenheit, reamur, kelvin;

    cout << "PROGRAM KONVERSI SUHU\n\n";
    cout << "Masukan Suhu(Celcius) = ";
    cin >> celcius;
    cout << endl;

    fahrenheit = (celcius * 9 / 5) + 32;
    reamur = celcius * 4 / 5;
    kelvin = celcius + 273.15;
    
    cout << "Jadi," << endl;
	cout << celcius << " derajat celcius           = " << fahrenheit << " derajat fahrenheit" << endl;
    cout << fahrenheit << " derajat fahrenheit      = " << reamur << "derajat reamur" << endl;
    cout << reamur << " derajat reamur          = " << kelvin << " derajat kelvin " << endl;
    cout << "-------------------------------------------\n";

return 0;
}


