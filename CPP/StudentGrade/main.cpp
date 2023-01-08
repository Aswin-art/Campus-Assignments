#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    // Menentukan jumlah data
    int data = 0;
    cout << "Masukkan jumlah data: ";
    cin >> data;
    
    // Membuat variabel untuk menampung data
    string nim[data];
    string nama[data];
    int uts[data];
    int uas[data];
    int tugas[data];
    int grade_result[data];
    
    // Memasukkan data
    for(int i = 0; i < data; ++i){
        cout << "Data ke-" << i + 1 << endl;
        cout << "\t" << "Masukkan NIM: ";
        cin >> nim[i];
        cout << "\t" << "Masukkan Nama: ";
        cin.ignore();
        getline(cin, nama[i]);
        cout << "\t" << "Masukkan nilai UTS: ";
        cin >> uts[i];
        cout << "\t" << "Masukkan nilai UAS: ";
        cin >> uas[i];
        cout << "\t" << "Masukkan nilai Tugas: ";
        cin >> tugas[i];
    }
    
    cout << endl;
    
    // Menampilkan data yang dimasukkan
    cout << "Jumlah data: " << data << endl;
    for(int i = 0; i < data; ++i){
        cout << "Data ke-" << i + 1 << endl;
        cout << "\t" << "NIM: " << nim[i] << endl;
        cout << "\t" << "Nama: " << nama[i] << endl;
        cout << "\t" << "UTS: " << uts[i] << endl;
        cout << "\t" << "UAS: " << uas[i] << endl;
        cout << "\t" << "TUGAS: " << tugas[i] << endl;
    }
    
    // Melakukan perhitungan data nilai
    for(int i = 0; i < data; ++i){
        int total_grade = uts[i] + uas[i] + tugas[i];
        grade_result[i] = total_grade / 3;
    }
    
    cout << endl;
    
    
    // Menampilkan hasil akhir
    cout << "No.\tNIM\t\tNAMA\t\t\tRATA\tHURUF\tKETERANGAN" << endl;
    for(int i = 0; i < data; ++i){
        char huruf;
        string keterangan;
        if(grade_result[i] >= 50 && grade_result[i] < 60){
            huruf = 'D';
            keterangan = "TIDAK LULUS";
        }else if(grade_result[i] >= 60 && grade_result[i] < 70){
            huruf = 'C';
            keterangan = "LULUS";
        }else if(grade_result[i] >= 70 && grade_result[i] < 80){
            huruf = 'B';
            keterangan = "LULUS";
        }else if(grade_result[i] >= 80 && grade_result[i] <= 100){
            huruf = 'A';
            keterangan = "LULUS";
        }else{
            huruf = 'E';
            keterangan = "TIDAK LULUS";
        }
        
        cout << i + 1 << "\t" << nim[i] << "\t" << nama[i] << "\t" << grade_result[i] << "\t" << huruf << "\t" << keterangan << endl;
    }

    return 0;
}