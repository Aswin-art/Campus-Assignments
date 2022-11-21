#include <iostream>
using namespace std;
int main() {
    string mahasiswa[10];
    int nilaiPraktek[10];
    int nilaiTeori[10];
    
    for(int i = 0; i < 10; ++i){
        cout << "Data mahasiswa " << i + 1 << endl;
        cout << "Masukkan nama mahasiswa: ";
        cin >> mahasiswa[i];
        cout << "Masukkan nilai teori mahasiswa " << mahasiswa[i] << ": ";
        cin >> nilaiTeori[i];
        cout << "Masukkan nilai praktek mahasiswa " << mahasiswa[i] << ": ";
        cin >> nilaiPraktek[i];
        
        cout << endl;
    }
    
    for(int i = 0; i < 10; ++i){
        cout << endl;
        cout << "=========================" << endl;
        cout << "Nama mahasiswa: " << mahasiswa[i] << endl;
        cout << "Nilai Praktek: " << nilaiPraktek[i] << endl;
        cout << "Nilai Teori: " << nilaiTeori[i] << endl;
        cout << "Nilai Akhir: " << (nilaiTeori[i] + nilaiPraktek[i]) / 2 << endl;
        cout << "=========================" << endl;
    }

    return 0;
}