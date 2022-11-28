#include <iostream>

namespace kurang{
	double operasiKurang(double a , double b){
		return a - b;
	}

	void inputKurang(){
		double a,b;
		std::cout << "Masukkan angka 1: ";
		std::cin >> a;
		std::cout << "Masukkan angka 2: ";
		std::cin >> b;
		std::cout << "Hasil dari " << a << " - " << b << " adalah = " << operasiKurang(a,b) << std::endl;
	}
}