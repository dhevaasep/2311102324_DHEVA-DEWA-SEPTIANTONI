//Dheva Dewa Septiantoni
//2311102324
#include <iostream>
using namespace std;

// Mendefinisikan struct Mahasiswa
struct Mahasiswa1 {
    string nama;
    int umur;
};

int main() {
/*
Struct :
Struct adalah struktur data yang mirip dengan class, tetapi secara default semua anggotanya adalah 
public (dalam class, secara default anggotanya adalah private). Struct biasanya digunakan untuk menyimpan 
sekumpulan data yang terkait, tetapi tidak memiliki fungsi yang terkait.
*/
//Contoh Program menggunakan Struct:

    // Mendeklarasikan variabel bertipe struct Mahasiswa
    Mahasiswa1 mhs1;

    // Mengisi data ke dalam variabel
    mhs1.nama = "Dheva D Luffy";
    mhs1.umur = 19;
    // Menampilkan informasi mahasiswa
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Umur: " << mhs1.umur << endl;



/*
Class :
Class adalah struktur data yang mendefinisikan tipe data baru yang memiliki data (variabel anggota) 
dan fungsi (metode) yang terkait dengannya. Dalam class, data dan fungsi tersebut bersifat terkait 
dan dapat diakses melalui objek dari class tersebut. Class memungkinkan untuk menggabungkan data 
dan perilaku dalam satu kesatuan.
*/
//Contoh Program menggunakan Class:
class Mahasiswa2 {
public:
    string hobi;
    int nopung;
    string idola;
    string timfav;

    // Metode untuk menampilkan informasi mahasiswa
    void Identitas() {
        cout << "Hobi: " << hobi << endl;
        cout << "Nomor Punggung Favorit: " << nopung << endl;
        cout << "Idola: " << idola << endl;
        cout << "Tim Favorit: " << timfav << endl;
    }
};
    // Membuat objek dari class Mahasiswa
    Mahasiswa2 mhs2;

    // Mengisi data ke dalam objek
    mhs2.hobi = "Bermain Bola";
    mhs2.nopung = 11;
    mhs2.idola = "Cristiano Ronaldo";
    mhs2.timfav = "Real Madrid";
    // Memanggil metode untuk menampilkan informasi mahasiswa
    mhs2.Identitas();

    return 0;
}