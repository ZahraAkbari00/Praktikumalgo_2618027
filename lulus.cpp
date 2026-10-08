#include <iostream> 
using namespace std;

int main() {
	int nilaipertama, nilaikedua;
	
	cout << "masukkan nilai pertama = ";
	cin >> nilaipertama;
	
	cout << "masukkan nilai kedua = ";
	cin >> nilaikedua;
	
	if ((nilaipertama > 60) & (nilaikedua > 60)){
	cout << "selamat anda lulus" << endl;
	}else {
		cout << "semangat dan jangan putus asa" << endl;
	}
	


return 0;
}


