// Program menghitung banyaknya huruf vocal dalam sebuah kalimat menggunakan Sequential Search
#include <iostream>
#include <cctype> // Untuk fungsi tolower

using namespace std;

// Fungsi untuk memeriksa apakah sebuah karakter adalah vocal
bool isVowel_324(char Karakter_324) {
    // Konversi karakter menjadi huruf kecil agar pemeriksaan tidak case-sensitive
    Karakter_324 = tolower(Karakter_324);
    // Periksa apakah karakter adalah salah satu dari 'a', 'e', 'i', 'o', 'u'
    return (Karakter_324 == 'a' || Karakter_324 == 'e' || Karakter_324 == 'i' || Karakter_324 == 'o' || Karakter_324 == 'u');
}

// Fungsi untuk menghitung banyaknya huruf vocal dalam sebuah kalimat
int countVowels_324(const string &Kalimat_324) {
    int Count_324 = 0; // Variabel untuk menghitung jumlah vocal
    // Loop melalui setiap karakter dalam string Kalimat_324
    for (char Karakter_324 : Kalimat_324) {
        // Periksa apakah karakter adalah vocal menggunakan fungsi isVowel_324
        if (isVowel_324(Karakter_324)) {
            Count_324++; // Tambahkan ke Count_324 jika karakter adalah vocal
        }
    }
    return Count_324; // Kembalikan jumlah vocal
}

int main() {
    string Kalimat_324; // Variabel untuk menyimpan kalimat yang dimasukkan oleh pengguna

    cout << "\n======= SELAMAT DATANG DI PROGRAM MENCARI KALIMAT VOCAL =======" << endl; // Nama Program
    cout << "\nMasukkan sebuah kalimat : ";
    getline(cin, Kalimat_324); // Membaca input kalimat dari pengguna

    // Menghitung jumlah huruf vocal dalam kalimat menggunakan fungsi countVowels_324
    int vowelCount_324 = countVowels_324(Kalimat_324);

    // Menampilkan hasil perhitungan jumlah huruf vocal
    cout << "Banyaknya huruf vocal dalam kalimat adalah : " << vowelCount_324 << endl;

    return 0; // Mengembalikan nilai 0 menandakan bahwa program berakhir dengan sukses
}