/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // Merubah matriks 1d ke 2d
    back:
    int type_array = 0;
    
    cout << "===============Masukkan Tipe array===============" << endl;
    cout << "1. Array 2D" << endl;
    cout << "2. Array 3D" << endl;
    cout << "Tipe array: ";
    cin >> type_array;
    
    if(type_array == 1){
        // Menginisialisasi array 2 dimensi
        int row, col;
        cout << "Masukkan baris dari array: ";
        cin >> row;
        
        cout << "Masukkan kolom dari array: ";
        cin >> col;
        
        int array2d[row][col];
        
        cout << "Masukkan nilai dari array" << endl;
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                int value;
                cout << "Baris ke " << i << " Kolom ke " << j << ": ";
                cin >> value;
                array2d[i][j] = value;
            }
        }
        
        cout << "Nilai array yang anda masukkan: " << endl;
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                cout << array2d[i][j] << " ";
            }
            
            cout << endl;
        }
        
        cout << endl;
        
        // Merubah ke array 1 dimensi
        int array1d[row * col];
        int index = 0;
        
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                array1d[index] = array2d[i][j];
                index++;
            }
        }
        
        cout << "Nilai array 1d dari data diatas adalah: " << endl;
        
        for(int i = 0; i < row * col; ++i){
            cout << array1d[i] << " ";
        }
        
        cout << "\n\n===============Program selesai===============" << endl;
        
    } else if(type_array == 2){
        // Menginisialisasi array 3 dimensi
        int row, col, depth;
        cout << "Masukkan baris dari array: ";
        cin >> row;
        
        cout << "Masukkan kolom dari array: ";
        cin >> col;
        
        cout << "Masukkan kedalaman array: ";
        cin >> depth;
        
        int array3d[row][col][depth];
        
        cout << "Masukkan nilai dari array" << endl;
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                for(int k = 0; k < depth; ++k){
                    int value;
                    cout << "Baris ke " << i << " Kolom ke " << j << " Kedalaman ke " << k << ": ";
                    cin >> value;
                    array3d[i][j][k] = value;
                }
            }
        }
        
        cout << "Nilai array yang anda masukkan: " << endl;
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                for(int k = 0; k < depth; ++k){
                    cout << array3d[i][j][k] << " ";
                }
                
                cout << endl;
            }
        }
        
        cout << endl;
        
        // Merubah ke array 1 dimensi
        int array1d[row * col * depth];
        int index = 0;
        
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                for(int k = 0; k < depth; ++k){
                    array1d[index] = array3d[i][j][k];
                    index++;
                }
            }
        }
        
        cout << "Nilai array 1d dari data diatas adalah: " << endl;
        
        for(int i = 0; i < row * col * depth; ++i){
            cout << array1d[i] << " ";
        }
        
        cout << "\n\n===============Program selesai===============" << endl;
    } else{
        cout << "Tipe array tidak ditemukan" << endl;
        goto back;
    }

    return 0;
}
