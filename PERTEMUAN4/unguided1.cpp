// DHEVA DEWA SEPTIANTONI
// 2311102324

// Program menu Linked List Non Circular untuk menyimpan Nama dan NIM mahasiswa
#include <iostream>
#include <iomanip> //untuk mengatur format output, seperti mengatur presisi desimal, lebar bidang, dan tata letak output

using namespace std;

// Deklarasi Struct Node
struct Node
{
    string Nama_324; // Menyimpan Nama
    string NIM_324;  // Menyimpan NIM
    Node *next_324;  // Ini adalah pointer ke struct Node untuk menyimpan referensi ke node berikutnya dalam linked list
};

Node *head_324; // Ini adalah pointer ke struct Node untuk menyimpan referensi ke node awal dari linked list
Node *tail_324; // Ini adalah pointer ke struct Node untuk menyimpan referensi ke node terakhir dari linked list

// Inisialisasi Node
void init_324()
{
    head_324 = NULL;
    tail_324 = NULL;
}
// Pengecekan apakah linked list kosong atau tidak
bool isEmpty_324()
{
    if (head_324 == NULL)
        return true;
    else
        return false;
}

// Tambah Node di depan linked list
void insertDepan_324(string Nama_324, string NIM_324)
{
    // Buat Node baru_324
    Node *baru_324 = new Node; // Jika Linked List masih kosong, baru_324 akan menjadi node awal dan node terakhir dalam linked list
    baru_324->Nama_324 = Nama_324;
    baru_324->NIM_324 = NIM_324;
    baru_324->next_324 = NULL;
    if (isEmpty_324() == true)
    {
        head_324 = tail_324 = baru_324;
        tail_324->next_324 = NULL;
    }
    else
    {
        baru_324->next_324 = head_324;
        head_324 = baru_324;
    }
}

// Tambah Node di belakang linked list
void insertBelakang_324(string Nama_324, string NIM_324)
{
    // Buat Node baru_324
    Node *baru_324 = new Node;
    baru_324->Nama_324 = Nama_324;
    baru_324->NIM_324 = NIM_324;
    baru_324->next_324 = NULL;
    if (isEmpty_324() == true)
    {
        head_324 = tail_324 = baru_324;
        tail_324->next_324 = NULL;
    }
    else
    {
        tail_324->next_324 = baru_324;
        tail_324 = baru_324;
    }
}

// Menghitung jumlah Node dalam linked list
int hitungList_324()
{
    Node *hitung_324; // Untuk menghitung data
    hitung_324 = head_324;
    int jumlah_324 = 0; // Untuk mengetahui jumlah data
    while (hitung_324 != NULL)
    {
        jumlah_324++;
        hitung_324 = hitung_324->next_324;
    }
    return jumlah_324;
}

// Tambah Node di posisi tertentu dalam linked list
void insertTengah_324(string Nama_324, string NIM_324, int posisiNama_324)
{
    if (posisiNama_324 < 1 || posisiNama_324 > hitungList_324()) // posisiNama_324 untuk mencari posisi nama
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisiNama_324 == 1)
    {
        cout << "Posisi bukan posisi_324 tengah" << endl;
    }
    else
    {
        Node *baru_324, *bantu_324; // Untuk membantu dalam menjalankan program
        baru_324 = new Node();
        baru_324->Nama_324 = Nama_324;
        baru_324->NIM_324 = NIM_324;

        // traversal
        bantu_324 = head_324;
        int nomor_324 = 1;
        while (nomor_324 < posisiNama_324 - 1) // nomor_324 untuk mengetahui nomor posisi
        {
            bantu_324 = bantu_324->next_324;
            nomor_324++;
        }

        baru_324->next_324 = bantu_324->next_324;
        bantu_324->next_324 = baru_324;
    }
}

// Hapus Node di depan linked list
void hapusDepan_324()
{
    Node *hapus_324; // Untuk menghapus data
    if (isEmpty_324() == false)
    {
        if (head_324->next_324 != NULL)
        {
            hapus_324 = head_324;
            head_324 = head_324->next_324;
            delete hapus_324;
        }
        else
        {
            head_324 = tail_324 = NULL;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Node di belakang linked list
void hapusBelakang_324()
{
    Node *hapus_324;
    Node *bantu_324;
    if (isEmpty_324() == false)
    {
        if (head_324 != tail_324)
        {
            hapus_324 = tail_324;
            bantu_324 = head_324;
            while (bantu_324->next_324 != tail_324)
            {
                bantu_324 = bantu_324->next_324;
            }
            tail_324 = bantu_324;
            tail_324->next_324 = NULL;
            delete hapus_324;
        }
        else
        {
            head_324 = tail_324 = NULL;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus Node di posisi tertentu dalam linked list
void hapusTengah_324(int posisi_324)
{
    Node *bantu_324, *hapus_324, *sebelum_324;
    if (posisi_324 < 1 || posisi_324 > hitungList_324())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi_324 == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        int nomor_324 = 1;
        bantu_324 = head_324;
        while (nomor_324 <= posisi_324)
        {
            if (nomor_324 == posisi_324 - 1)
            {
                sebelum_324 = bantu_324;
            }
            if (nomor_324 == posisi_324)
            {
                hapus_324 = bantu_324;
            }
            bantu_324 = bantu_324->next_324;
            nomor_324++;
        }
        sebelum_324->next_324 = bantu_324;
        delete hapus_324;
    }
}

/// Ubah Node di depan linked list
void ubahDepan_324(string Nama_324, string NIM_324)
{
    if (isEmpty_324() == false)
    {
        head_324->Nama_324 = Nama_324;
        head_324->NIM_324 = NIM_324;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Node di belakang linked list
void ubahBelakang_324(string Nama_324, string NIM_324)
{
    if (isEmpty_324() == false)
    {
        tail_324->Nama_324 = Nama_324;
        tail_324->NIM_324 = NIM_324;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Node di posisi tertentu dalam linked list
void ubahTengah_324(string Nama_324, string NIM_324, int posisiNama_324)
{
    Node *bantu_324;
    if (isEmpty_324() == false)
    {
        if (posisiNama_324 < 1 || posisiNama_324 > hitungList_324())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisiNama_324 == 1)
        {
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else
        {
            bantu_324 = head_324;
            int nomor_324 = 1;
            while (nomor_324 < posisiNama_324)
            {
                bantu_324 = bantu_324->next_324;
                nomor_324++;
            }
            bantu_324->Nama_324 = Nama_324;
            bantu_324->NIM_324 = NIM_324;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Menghapus seluruh Node dalam linked list
void clearList_324()
{
    Node *bantu_324, *hapus_324;
    bantu_324 = head_324;
    while (bantu_324 != NULL)
    {
        hapus_324 = bantu_324;
        bantu_324 = bantu_324->next_324;
        delete hapus_324;
    }
    head_324 = tail_324 = NULL;
    cout << "List berhasil terhapus!" << endl;
}

// Menampilkan seluruh data dalam linked list
void tampilList_324()
{
    Node *bantu_324;
    bantu_324 = head_324;
    if (isEmpty_324() == false)
    {
        cout << "--------------------------------------------\n";
        cout << "|              DATA MAHASISWA              |\n";
        cout << "============================================\n";
        cout << "|        NAMA        |         NIM         |\n";
        cout << "--------------------------------------------\n";
        while (bantu_324 != NULL)
        {
            cout << "| " << setw(19) << left << bantu_324->Nama_324;
            cout << "| " << setw(19) << left << bantu_324->NIM_324 << " |\n";
            bantu_324 = bantu_324->next_324;
        }
        cout << "--------------------------------------------\n";
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

int main()
{
    init_324();
    int Pilih_324, posisiNama_324;
    string Nama_324, NIM_324;

    // Program akan terus berjalan hingga pengguna memilih untuk keluar (Pilih_324 = 0)
    do
    {
        // Menu utama
        cout << "\nPROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1.  Tambah Depan\n";
        cout << "2.  Tambah Belakang\n";
        cout << "3.  Tambah Tengah\n";
        cout << "4.  Ubah Depan\n";
        cout << "5.  Ubah Belakang\n";
        cout << "6.  Ubah Tengah\n";
        cout << "7.  Hapus Depan\n";
        cout << "8.  Hapus Belakang\n";
        cout << "9.  Hapus Tengah\n";
        cout << "10. Hapus List\n";
        cout << "11. TAMPILKAN\n";
        cout << "0.  KELUAR\n";
        cout << "Pilih Operasi: ";
        cin >> Pilih_324;
        cout << endl;

        // Melakukan operasi berdasarkan pilihan pengguna
        switch (Pilih_324)
        {
        // Bentuk Macam-macam Pilihan Menu
        case 1:
            cout << "=================== TAMBAH DEPAN ==================\n";
            cout << "Masukkan Nama : ";
            cin >> Nama_324;
            cout << "Masukkan NIM  : ";
            cin >> NIM_324;
            insertDepan_324(Nama_324, NIM_324);
            cout << "---------------------------------------------------\n";
            cout << "Data telah ditambahkan\n";
            cout << "===================================================\n";
            break;
        case 2:
            cout << "================== TAMBAH BELAKANG ================\n";
            cout << "Masukkan Nama : ";
            cin >> Nama_324;
            cout << "Masukkan NIM  : ";
            cin >> NIM_324;
            insertBelakang_324(Nama_324, NIM_324);
            cout << "---------------------------------------------------\n";
            cout << "Data telah ditambahkan\n";
            cout << "===================================================\n";
            break;
        case 3:
            cout << "================== TAMBAH TENGAH ==================\n";
            cout << "Masukkan Nama   : ";
            cin >> Nama_324;
            cout << "Masukkan NIM    : ";
            cin >> NIM_324;
            cout << "Masukkan Posisi : ";
            cin >> posisiNama_324;
            insertTengah_324(Nama_324, NIM_324, posisiNama_324);
            cout << "---------------------------------------------------\n";
            cout << "Data telah ditambahkan pada posisi ke-" << posisiNama_324 << endl;
            cout << "===================================================\n";
            break;
        case 4:
            cout << "==================== UBAH DEPAN ===================\n";
            cout << "Masukkan Nama : ";
            cin >> Nama_324;
            cout << "Masukkan NIM  : ";
            cin >> NIM_324;
            ubahDepan_324(Nama_324, NIM_324);
            cout << "---------------------------------------------------\n";
            cout << "Data telah diubah\n";
            cout << "===================================================\n";
            break;
        case 5:
            cout << "=================== UBAH BELAKANG =================\n";
            cout << "Masukkan Nama : ";
            cin >> Nama_324;
            cout << "Masukkan NIM : ";
            cin >> NIM_324;
            ubahBelakang_324(Nama_324, NIM_324);
            cout << "---------------------------------------------------\n";
            cout << "Data telah diubah\n";
            cout << "===================================================\n";
            break;
        case 6:
            cout << "=================== UBAH TENGAH ===================\n";
            cout << "Masukkan Nama   : ";
            cin >> Nama_324;
            cout << "Masukkan NIM    : ";
            cin >> NIM_324;
            cout << "Masukkan Posisi : ";
            cin >> posisiNama_324;
            ubahTengah_324(Nama_324, NIM_324, posisiNama_324);
            cout << "---------------------------------------------------\n";
            cout << "Data telah diubah\n";
            cout << "===================================================\n";
            break;
        case 7:
            cout << "=================== HAPUS DEPAN ===================\n";
            hapusDepan_324();
            cout << "---------------------------------------------------\n";
            cout << "Data berhasil dihapus\n";
            cout << "===================================================\n";
            break;
        case 8:
            cout << "================== HAPUS BELAKANG =================\n";
            hapusBelakang_324();
            cout << "---------------------------------------------------\n";
            cout << "Data berhasil dihapus\n";
            cout << "===================================================\n";
            break;
        case 9:
            cout << "=================== HAPUS TENGAH ==================\n";
            cout << "Masukkan posisi  : ";
            cin >> posisiNama_324;
            hapusTengah_324(posisiNama_324);
            cout << "---------------------------------------------------\n";
            cout << "Data berhasil dihapus\n";
            cout << "===================================================\n";
            break;
        case 10:
            clearList_324();
            break;
        case 11:
            tampilList_324();
            break;
        case 0:
            cout << "Terima kasih!\n";
            break;
        default:
            cout << "Maaf, pilihan tidak tersedia!\n";
        }
    } while (Pilih_324 != 0);

    return 0;
}
