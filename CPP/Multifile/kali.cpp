#include <iostream>

namespace kali{
	double operasiKali(double a , double b){
		return a * b;
	}

	void inputKali(){
		double a,b;
		std::cout << "Masukkan angka 1: ";
		std::cin >> a;
		std::cout << "Masukkan angka 2: ";
		std::cin >> b;
		std::cout << "Hasil dari " << a << " * " << b << " adalah = " << operasiKali(a,b) << std::endl;
	}
}