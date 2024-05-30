// Program Algoritma Sequential Search
#include <iostream>

using namespace std;

int main(){
    int n_324 = 10; // Jumlah elemen dalam array, yang berarti 10
    int Data_324 [n_324] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}; // Array data yang akan dicari
    int Target_324 = 4; // Target yang akan dicari dalam array
    int Count_324 = 0; // Variabel untuk menghitung banyaknya kemunculan target dalam array

    // Melakukan pencarian sequential untuk menghitung banyaknya angka 4 dalam array
    for (int i_324 = 0; i_324 < n_324; i_324++) {
        if (Data_324 [i_324] == Target_324) {
            Count_324++; // Jika angka target ditemukan, tambahkan 1 ke variabel Count_324
        }
    }

    // Menampilkan hasil pencarian
    cout << "\n======= SELAMAT DATANG DI PROGRAM SEQUENTIAL SEARCH =======" << endl; // Judul Program
    cout << "\nData : {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl; // Menampilkan data yang akan dicari
    cout << "Angka " << Target_324 << " ditemukan sebanyak " << Count_324 << " kali." << endl; // Menampilkan hasil pencarian

    return 0; // Mengembalikan nilai 0 menandakan bahwa program berakhir dengan sukses
}