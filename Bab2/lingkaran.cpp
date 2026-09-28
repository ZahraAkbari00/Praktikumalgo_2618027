#include <iostream>

using namespace std;

int main()
{
	cout << "==========================================" << endl;
	cout << "KALKULATOR LUAS & KELILING LINGKARAN" << endl;
	cout << "==========================================" << endl;
	cout << endl;
	
	const float phi = 3.14;
	float r,luas,keliling;
	
	cout<<"Masukan jari-jari lingkaran (r) : ";
	cin>>r;
	
	luas = phi*r*r;
	keliling = 2*phi*r;
	
	
	cout<<"Hasil Perhitungan keliling : " << keliling <<endl;
	cout<<"Hasil Perhitungan luas: " << luas <<endl;
	return 0;
}
