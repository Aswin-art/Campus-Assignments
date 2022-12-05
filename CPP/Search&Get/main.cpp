// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int main() {
    int length, search_value, get_value = 0;
    cout << "Masukkan panjang array: ";
    cin >> length;
    int array[length];
    
    cout << "\nMasukkan nilai array: ";
    for(int i = 0; i < length; ++i){
        cin >> array[i];
    }
    
    cout << "\nNilai array yang dimasukkan: ";
    for(int i = 0; i < length; ++i){
        cout << array[i] << " ";
    }
    
    cout << "\nMasukkan nilai yang ingin dicari: ";
    cin >> search_value;
    for(int i = 0; i < length; ++i){
        if(array[i] == search_value){
            get_value = i;
            break;
        }
    }
    
    if(get_value != 0){
        cout << "\nAngka yang anda cari: " << search_value << endl;
        cout << "Angka tersebut berada pada index ke: " << get_value << endl;
    }else{
        cout << "\nAngka yang anda masukkan tidak ada" << endl;
    }
    return 0;
}