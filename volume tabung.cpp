#include <iostream> 
using namespace std;

int main() {
	
	cout << "==========================================" << endl;
	cout << " PROGRAM MENGHITUNG VOLUME TABUNG" << endl;
	cout << "==========================================" << endl;
	cout << endl;
	
	const float phi = 3.14;
	float r,t,volume;
	
	cout << "Masukan jari-jari lingkaran (r) : ";
	cin >> r;
	cout << "Masukkan tinggi (t) : ";
	cin >> t;
	
	volume = phi*r*r*t;
	
	
	
	cout<< "Volume tabung adalah : " << volume <<endl;
	


return 0;
}


