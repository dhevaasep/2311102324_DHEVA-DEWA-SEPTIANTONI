#include <iostream> // Library untuk operasi input dan output
#include <vector>   // Library untuk penggunaan kontainer vector
#include <string>   // Library untuk penggunaan tipe data string

using namespace std; // Menggunakan namespace std untuk mempermudah penulisan kode

int main()
{
    int JumlahSimpul_324; // Deklarasi variabel untuk menyimpan jumlah simpul

    // Menampilkan judul program
    cout << "\n>>>>>>> Program graph menghitung jarak dari sebuah kota <<<<<<<" << endl;
    // Meminta pengguna memasukkan jumlah simpul
    cout << "\nSilakan masukan jumlah simpul : ";
    cin >> JumlahSimpul_324; // Membaca input jumlah simpul dari pengguna

    // Mendeklarasikan vektor untuk menyimpan nama-nama simpul
    vector<string> NamaSimpul_324(JumlahSimpul_324);
    // Mendeklarasikan matriks untuk menyimpan bobot (jarak) antar simpul
    vector<vector<int>> bobot_324(JumlahSimpul_324, vector<int>(JumlahSimpul_324));

    // Meminta pengguna memasukkan nama-nama simpul
    cout << "Silakan masukan nama simpul" << endl;
    for (int i_324 = 0; i_324 < JumlahSimpul_324; ++i_324)
    {
        // Meminta input nama simpul dari pengguna
        cout << "Simpul " << i_324 + 1 << " : ";
        cin >> NamaSimpul_324[i_324]; // Membaca input nama simpul dan menyimpannya ke dalam vektor
    }

    // Meminta pengguna memasukkan bobot antar simpul
    cout << "Silakan masukkan bobot antar simpul" << endl;
    for (int i_324 = 0; i_324 < JumlahSimpul_324; ++i_324)
    {
        for (int j_324 = 0; j_324 < JumlahSimpul_324; ++j_324)
        {
            // Meminta input bobot (jarak) dari simpul i ke simpul j
            cout << NamaSimpul_324[i_324] << "--> " << NamaSimpul_324[j_324] << " = ";
            cin >> bobot_324[i_324][j_324]; // Membaca input bobot dan menyimpannya ke dalam matriks
        }
    }

    cout << endl; // Menambahkan baris baru untuk tampilan yang lebih rapi

    // Menampilkan tabel jarak antar simpul
    cout << "     "; // Menambahkan spasi untuk perataan tabel
    for (const string &Nama_324 : NamaSimpul_324)
    {
        cout << Nama_324 << "  "; // Menampilkan nama-nama simpul sebagai header kolom
    }
    cout << endl;

    for (int i_324 = 0; i_324 < JumlahSimpul_324; ++i_324)
    {
        cout << NamaSimpul_324[i_324] << "     "; // Menampilkan nama simpul sebagai header baris
        for (int j_324 = 0; j_324 < JumlahSimpul_324; ++j_324)
        {
            cout << bobot_324[i_324][j_324] << "  "; // Menampilkan bobot (jarak) antar simpul
        }
        cout << endl;
    }

    return 0; // Mengembalikan nilai 0 untuk menandakan program berakhir dengan sukses
}