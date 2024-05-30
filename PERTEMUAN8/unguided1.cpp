// Program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search
#include <iostream>
#include <conio.h> // Jika menggunakan Windows. Untuk sistem operasi lain, perlu mencari pengganti dari _getche()

using namespace std;

// Fungsi untuk melakukan pencarian binary pada array karakter
int binarySearch_324(char Array_324[], int Size_324, char Target_324)
{
    int Kiri_324 = 0;
    int Kanan_324 = Size_324 - 1;

    // Melakukan binary search selama Kiri_324 tidak melebihi Kanan_324
    while (Kiri_324 <= Kanan_324)
    {
        int Tengah_324 = Kiri_324 + (Kanan_324 - Kiri_324) / 2;

        // Jika huruf Target_324 berada di tengah array
        if (Array_324[Tengah_324] == Target_324)
            return Tengah_324;

        // Jika huruf Target_324 berada di sebelah kiri tengah array
        if (Array_324[Tengah_324] > Target_324)
            Kanan_324 = Tengah_324 - 1;

        // Jika huruf Target_324 berada di sebelah kanan tengah array
        else
            Kiri_324 = Tengah_324 + 1;
    }

    // Jika huruf Target_324 tidak ditemukan
    return -1;
}

// Fungsi untuk melakukan selection sort pada array karakter
void selectionSort_324(char Array_324[], int Size_324)
{
    for (int i_324 = 0; i_324 < Size_324 - 1; ++i_324)
    {
        int IndeksTengah_324 = i_324;
        for (int j_324 = i_324 + 1; j_324 < Size_324; ++j_324)
        {
            // Menemukan elemen terkecil dalam array yang belum diurutkan
            if (Array_324[j_324] < Array_324[IndeksTengah_324])
            {
                IndeksTengah_324 = j_324;
            }
        }
        // Menukar elemen terkecil yang ditemukan dengan elemen pertama yang belum diurutkan
        swap(Array_324[i_324], Array_324[IndeksTengah_324]);
    }
}

int main()
{
    string sentence_324; // Variabel untuk menyimpan kalimat yang dimasukkan oleh pengguna
    char Target_324;     // Variabel untuk menyimpan karakter yang akan dicari

    cout << "\n======= SELAMAT DATANG DI PROGRAM BINARY SEARCH =======" << endl; // Judul Program
    cout << "\n>> Masukkan kalimat : ";
    getline(cin, sentence_324); // Mengambil input kalimat dari pengguna

    // Membuat array untuk menyimpan karakter
    int PanjangSentence_324 = sentence_324.size(); // Menghitung panjang kalimat
    char KarakterArray_324[100];                   // Array untuk menyimpan karakter-karakter dari kalimat (mengabaikan spasi)
    int Size_324 = 0;                              // Variabel untuk melacak jumlah karakter non-spasi

    // Mengisi KarakterArray_324  dengan karakter-karakter dari kalimat
    for (int i_324 = 0; i_324 < PanjangSentence_324; ++i_324)
    {
        if (sentence_324[i_324] != ' ')
        {                                                      // Mengabaikan spasi
            KarakterArray_324[Size_324] = sentence_324[i_324]; // Menyimpan karakter ke KarakterArray_324
            ++Size_324;                                        // Menambah ukuran dari array yang telah diisi
        }
    }

    cout << "Masukkan huruf yang ingin dicari : ";
    cin >> Target_324;

    // Mengurutkan array karakter menggunakan selection sort
    selectionSort_324(KarakterArray_324, Size_324);

    // Menampilkan daftar huruf yang sudah diurutkan sesuai abjad
    cout << "Daftar huruf yang sudah diurutkan sesuai abjad : ";
    for (int i_324 = 0; i_324 < Size_324; ++i_324)
    {
        cout << KarakterArray_324[i_324] << " ";
    }

    // Mencari huruf dalam array yang telah diurutkan
    int Index_324 = binarySearch_324(KarakterArray_324, Size_324, Target_324);

    cout << endl;

    // Menampilkan hasil pencarian dan daftar huruf yang sudah diurutkan
    if (Index_324 != -1)
    {
        cout << "Huruf '" << Target_324 << "' ditemukan pada urutan ke-" << Index_324 << " dalam urutan abjad." << endl;
    }
    else
    {
        cout << "Huruf '" << Target_324 << "' tidak ditemukan dalam kalimat." << endl;
    }

    _getche(); // Menunggu pengguna menekan tombol sebelum program berakhir (hanya untuk Windows)
    return 0;  // Mengembalikan nilai 0 menandakan bahwa program berakhir dengan sukses)
}