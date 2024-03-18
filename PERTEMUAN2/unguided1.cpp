//DHEVA DEWA SEPTIANTOI
//2311102324
#include <iostream>
using namespace std;

int main() {
    int Arr324; // Ukuran Array yang dimasukkan oleh pengguna
    cout << "> Masukkan ukuran Array: ";
    cin >> Arr324;

    // Alokasi dinamis array
    int *dheva324 = new int[Arr324]; // Array untuk menyimpan angka genap
    int *ronaldo324 = new int[Arr324]; // Array untuk menyimpan angka ganjil
    int Genap324 = 0; // Jumlah angka genap
    int Ganjil324 = 0; // Jumlah angka ganjil

    // Meminta pengguna memasukkan angka
    cout << "> Masukkan " << Arr324 << " angka (dipisah pake spasi):\n";
    for (int i = 0; i < Arr324; ++i) {
        if (!(cin >> dheva324[i])) {
            cout << "Input tidak mencukupi atau tidak valid." << endl;
            return 1;
        }
        // Memisahkan angka genap dan ganjil
        if (dheva324[i] % 2 == 0) {
            Genap324++;
        } else {
            ronaldo324[Ganjil324] = dheva324[i];
            Ganjil324++;
        }
    }

    cout << "\n<<<<< HASIL >>>>>" << endl;

    // Menampilkan data array yang sudah diinput oleh user
    cout << "Data Array   : ";
    for (int i = 0; i < Arr324; ++i) // Melakukan perulangan untuk menampilkan data array
        cout << dheva324[i] << " ";
    cout << endl;

    // Menampilkan angka genap
    cout << "Nomor Genap  : ";
    for (int i = 0; i < Arr324; ++i) {
        if (dheva324[i] % 2 == 0)
            cout << dheva324[i] << ", ";
    }
    cout << endl;

    // Menampilkan angka ganjil
    cout << "Nomor Ganjil : ";
    for (int i = 0; i < Ganjil324; ++i) { 
        cout << ronaldo324[i] << ", ";
    }
    cout << endl;

    // Dealokasi memori setelah selesai digunakan
    delete[] dheva324;
    delete[] ronaldo324;

    return 0;
}
