#include <iostream>
#include "pertambahan.cpp"
#include "pengurangan.cpp"
#include "kali.cpp"
#include "bagi.cpp"

using namespace std;

int addPilihan(){
	system("cls");
	int input;
	cout << "Project MultiFile Kalkulator" << endl;
	cout << "============================" << endl;
	cout << "1. Operasi Pertambahan" << endl;
	cout << "2. Operasi Pengurangan" << endl;
	cout << "3. Operasi Perkalian" << endl;
	cout << "4. Operasi Pembagian" << endl;
	cout << "5. Finish/Keluar" << endl;
	cout << "============================" << endl;
	cout << "Masukkan pilihan: ";
	cin >> input;
	return input;
}

int main()
{
	int pilihan = addPilihan();
	double awal,akhir;
	char lanjut;
	enum option {TAMBAH = 1 , KURANG , KALI , BAGI , FINISH};

	while(pilihan != FINISH){
		if(pilihan == TAMBAH){
			cout << "Operasi Pertambahan" << endl;
			tambah::inputTambah();
			tambah::operasiTambah(awal,akhir);
		}else if(pilihan == KURANG){
			cout << "Operasi Pengurangan" << endl;
			kurang::inputKurang();
			kurang::operasiKurang(awal,akhir);
		}else if(pilihan == KALI){
			cout << "Operasi Perkalian" << endl;
			kali::inputKali();
			kali::operasiKali(awal,akhir);
		}else if(pilihan == BAGI){
			cout << "Operasi Pembagian" << endl;
			cout << "note: angka kedua > 0" << endl;
			bagi::inputBagi();
			bagi::operasiBagi(awal,akhir);
		}else {
			cout << "Masukkan pilihan dengan benar!!" << endl;
		}

		ulang:
		cout << "Lanjutkan(y/n) : ";
		cin >> lanjut;
		if(lanjut == 'y' || lanjut == 'Y'){
			pilihan = addPilihan();
		}else if(lanjut == 'n' || lanjut == 'N'){
			break;
		}else {
			goto ulang;
		}
	}

	cout << "Akhir dari program" << endl;
	
	return 0;
}