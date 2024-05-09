// DHEVA DEWA SEPTIANTONI
// 2311102324

// Program Stack untuk menentukan apakah kalimat tersebut Palindrom/tidak
#include <iostream>
#include <string> //library untuk menggunakan string
#include <stack>  //library untuk menggunakan stack

using namespace std;

// Fungsi untuk membersihkan Kata_324 dari spasi dan karakter non-alphanumeric
string BersihkanKata_324(string Kata_324)
{
    string KataBersih_324;
    for (char &c_324 : Kata_324)
    {
        if (isalpha(c_324))
        {                                     // Memeriksa apakah karakter adalah huruf
            KataBersih_324 += tolower(c_324); // Mengubah huruf menjadi huruf kecil atau bersih
        }
    }
    return KataBersih_324;
}

// Fungsi untuk memeriksa apakah sebuah string adalah palindrom
bool Palindrom_324(string Kata_324)
{
    stack<char> TumpukkanKata_324;
    int Length_324 = Kata_324.length();

    // Memasukkan setengah karakter pertama ke dalam tumpukan
    for (int i_324 = 0; i_324 < Length_324 / 2; i_324++)
    {
        TumpukkanKata_324.push(Kata_324[i_324]);
    }

    // Menentukan titik awal untuk membandingkan karakter kedua setengah
    int Mulai_324 = Length_324 / 2;
    if (Length_324 % 2 != 0)
    {
        Mulai_324++;
    }

    // Membandingkan karakter kedua setengah dengan karakter dalam tumpukan
    for (int i_324 = Mulai_324; i_324 < Length_324; i_324++)
    {
        if (TumpukkanKata_324.empty() || Kata_324[i_324] != TumpukkanKata_324.top())
        {
            return false;
        }
        TumpukkanKata_324.pop();
    }

    return true;
}

int main()
{
    char LanjutkanInputKata_324;
    cout << "=====SELAMAT DATANG DI PROGRAM PALINDROM DETECTION=====" << endl; // Judul Program

    do
    {
        // Memasukkan Kata_324 atau kalimat yang ingin dimasukkan
        string Kata_324;
        cout << "Masukkan kata : "; // User diminta untuk memasukan kata atau kalimat yang ingin dimasukkan
        getline(cin, Kata_324);

        // Membersihkan Kata_324 dari spasi, karakter non-alphanumeric, dan mengubah huruf menjadi huruf kecil
        string KataBersih_324 = BersihkanKata_324(Kata_324);

        // Memeriksa apakah Kata_324 adalah palindrom setelah dibersihkan
        if (Palindrom_324(KataBersih_324))
        {
            cout << "Kalimat tersebut adalah : Palindrom" << endl; // Hasil yang berarti kata atau kalimat tersebut Palindrom
        }
        else
        {
            cout << "Kalimat tersebut adalah : Bukan Palindrom" << endl; // Hasil yang berarti kata atau kalimat tersebut Bukan Palindrom
        }

        cout << "Apakah Anda ingin mencoba kalimat lain? (y/n) : "; // Menanyakan Kepada user apakah ingin mencoba kalimat lain atau tidak
        cin >> LanjutkanInputKata_324;
        cin.ignore(); // Untuk membersihkan buffer Kata_324 sebelumnya
    } while (LanjutkanInputKata_324 == 'y' || LanjutkanInputKata_324 == 'Y'); // Untuk melanjutkan input kata atau selesai

    return 0;
}