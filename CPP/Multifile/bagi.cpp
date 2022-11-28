#include <iostream>

namespace bagi{
	double operasiBagi(double a , double b){
		if(b == 0){
			throw "Error angka kedua harus lebih dari 0";
		}
		return a / b;
	}

	void inputBagi(){
		double a,b;
		std::cout << "Masukkan angka 1: ";
		std::cin >> a;
		std::cout << "Masukkan angka 2: ";
		std::cin >> b;
		try{
			b == 0;
			std::cout << "Hasil dari " << a << " / " << b << " adalah = " << operasiBagi(a,b) << std::endl;
		}
		catch(const char* e)
		{
			std::cout << e << std::endl;
		}

		
		
	}
}