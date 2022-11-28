#include <iostream>

namespace tambah{

	double operasiTambah(double a , double b){
		return a + b;
	}

	void inputTambah(){
		double a,b;
		std::cout << "Masukkan angka 1: ";
		std::cin >> a;
		std::cout << "Masukkan angka 2: ";
		std::cin >> b;
		std::cout << "Hasil dari " << a << " + " << b << " adalah = " << operasiTambah(a,b) << std::endl;
	}
}