// 2311102324
// DHEVA DEWA SEPTIANTONI

// Program Stack untuk melakukan pembalikan terhadap kalimat
#include <iostream>
#include <string> //library untuk menggunakan string
#include <stack>  //library untuk struktur data stack

using namespace std;

int main()
{
    stack<char> CharStack_324;                                                // Inisialisasi stack untuk menyimpan karakter
    char LanjutkanInputKalimat_324;                                           // Untuk melanjutkan input kalimat
    cout << "=====SELAMAT DATANG DI PROGRAM PEMBALIKAN KALIMAT=====" << endl; // Judul Program

    do
    {
        string Kalimat_324, KalimatDibalik_324;
        cout << "Masukkan kalimat minimal 3 kata : "; // User diminta untuk memasukan kalimat yang ingin dimasukkan, dengan minimal 3 kata
        getline(cin, Kalimat_324);                         // Membaca input Kalimat_324 dari pengguna

        for (char c_324 : Kalimat_324)
        {
            CharStack_324.push(c_324); // Menambahkan setiap karakter ke dalam stack
        }

        while (!CharStack_324.empty())
        { // Untuk memeriksa apakah stack tersebut kosong atau tidak
            if (CharStack_324.top() == ' ')
            {
                KalimatDibalik_324 += ' '; // Menambahkan spasi ke Kalimat_324 terbalik jika karakter teratas adalah spasi
            }
            else
            {
                KalimatDibalik_324 += CharStack_324.top(); // Menambahkan karakter teratas dari stack ke Kalimat_324 terbalik
            }
            CharStack_324.pop(); // Menghapus karakter teratas dari stack
        }

        cout << "Hasil kalimat yang dibalikkan : " << KalimatDibalik_324 << endl; // Hasil kalimat yang dibalikan

        cout << "Apakah Anda ingin mencoba kalimat lain? (y/n) : "; // Menanyakan Kepada user apakah ingin mencoba kalimat lain atau tidak
        cin >> LanjutkanInputKalimat_324;
        cin.ignore(); // Untuk membersihkan Kalimat_324 buffer sebelumnya
    } while (LanjutkanInputKalimat_324 == 'y' || LanjutkanInputKalimat_324 == 'Y'); // Untuk melanjutkan input Kalimat_324 atau selesai

    return 0;
}