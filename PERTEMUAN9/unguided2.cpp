#include <iostream> // Library untuk operasi input dan output
#include <iomanip>  // Library untuk merapihkan,enu output
#include <queue>    // Library untuk menggunakan queue dalam BFS
using namespace std;

// Struktur Pohon
struct Pohon
{
    char Data_324;
    Pohon *Kiri_324, *Kanan_324, *Parent_324;
};
Pohon *Root_324, *Baru_324;

// Inisialisasi Root_324 tree
void init_324()
{
    Root_324 = NULL;
}

// Cek apakah tree kosong
bool isEmpty_324()
{
    return Root_324 == NULL;
}

// Buat Node_324 Baru_324 sebagai Root_324
void buatNode_324(char Data_324)
{
    if (isEmpty_324())
    {
        Root_324 = new Pohon();
        Root_324->Data_324 = Data_324;
        Root_324->Kiri_324 = NULL;
        Root_324->Kanan_324 = NULL;
        Root_324->Parent_324 = NULL;
        cout << "\n[324] Node " << Data_324 << " berhasil dibuat sebagai root." << endl;
    }
    else
    {
        cout << "\n[324] Tree sudah ada!" << endl;
    }
}

// Insert Node_324 ke kiri
Pohon *insertKiri_324(char Data_324, Pohon *Node_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (Node_324->Kiri_324 != NULL)
        {
            cout << "\n[324] Node " << Node_324->Data_324 << " sudah ada child kiri!" << endl;
            return NULL;
        }
        else
        {
            Pohon *Baru_324 = new Pohon();
            Baru_324->Data_324 = Data_324;
            Baru_324->Kiri_324 = NULL;
            Baru_324->Kanan_324 = NULL;
            Baru_324->Parent_324 = Node_324;
            Node_324->Kiri_324 = Baru_324;
            cout << "\n[324] Node " << Data_324 << " berhasil ditambahkan ke child kiri " << Baru_324->Parent_324->Data_324 << endl;
            return Baru_324;
        }
    }
}

// Insert Node_324 ke kanan
Pohon *insertKanan_324(char Data_324, Pohon *Node_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (Node_324->Kanan_324 != NULL)
        {
            cout << "\n[324] Node " << Node_324->Data_324 << " sudah ada child kanan!" << endl;
            return NULL;
        }
        else
        {
            Pohon *Baru_324 = new Pohon();
            Baru_324->Data_324 = Data_324;
            Baru_324->Kiri_324 = NULL;
            Baru_324->Kanan_324 = NULL;
            Baru_324->Parent_324 = Node_324;
            Node_324->Kanan_324 = Baru_324;
            cout << "\n[324] Node " << Data_324 << " berhasil ditambahkan ke child kanan " << Baru_324->Parent_324->Data_324 << endl;
            return Baru_324;
        }
    }
}

// Update Data_324 Node_324
void update_324(char Data_324, Pohon *Node_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!Node_324)
        {
            cout << "\n[324] Node yang ingin diganti tidak ada!" << endl;
        }
        else
        {
            char temp = Node_324->Data_324;
            Node_324->Data_324 = Data_324;
            cout << "\n[324] Node " << temp << " berhasil diubah menjadi " << Data_324 << endl;
        }
    }
}

// Retrieve Data_324 Node_324
void retrieve_324(Pohon *Node_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!Node_324)
        {
            cout << "\n[324] Node yang ditunjuk tidak ada!" << endl;
        }
        else
        {
            cout << "\n[324] Data Node : " << Node_324->Data_324 << endl;
        }
    }
}

// Find Node_324 dan menampilkan informasi lengkap
void find_324(Pohon *Node_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!Node_324)
        {
            cout << "\n[324] Node yang ditunjuk tidak ada!" << endl;
        }
        else
        {
            cout << "\n[324] Data Node : " << Node_324->Data_324 << endl;
            cout << "[324] Root : " << Root_324->Data_324 << endl;
            if (!Node_324->Parent_324)
                cout << "[324] Parent : (tidak punya parent)" << endl;
            else
                cout << "[324] Parent : " << Node_324->Parent_324->Data_324 << endl;
            if (Node_324->Parent_324 != NULL && Node_324->Parent_324->Kiri_324 != Node_324 && Node_324->Parent_324->Kanan_324 == Node_324)
                cout << "[324] Sibling : " << Node_324->Parent_324->Kiri_324->Data_324 << endl;
            else if (Node_324->Parent_324 != NULL && Node_324->Parent_324->Kanan_324 != Node_324 && Node_324->Parent_324->Kiri_324 == Node_324)
                cout << "[324] Sibling : " << Node_324->Parent_324->Kanan_324->Data_324 << endl;
            else
                cout << "[324] Sibling : (tidak punya sibling)" << endl;
            if (!Node_324->Kiri_324)
                cout << "[324] Child Kiri : (tidak punya Child kiri)" << endl;
            else
                cout << "[324] Child Kiri : " << Node_324->Kiri_324->Data_324 << endl;
            if (!Node_324->Kanan_324)
                cout << "[324] Child Kanan : (tidak punya Child kanan)" << endl;
            else
                cout << "[324] Child Kanan : " << Node_324->Kanan_324->Data_324 << endl;
        }
    }
}

// Pre-order traversal
void preOrder_324(Pohon *Node_324 = Root_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (Node_324 != NULL)
        {
            cout << " " << Node_324->Data_324 << ", ";
            preOrder_324(Node_324->Kiri_324);
            preOrder_324(Node_324->Kanan_324);
        }
    }
}

// In-order traversal
void inOrder_324(Pohon *Node_324 = Root_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (Node_324 != NULL)
        {
            inOrder_324(Node_324->Kiri_324);
            cout << " " << Node_324->Data_324 << ", ";
            inOrder_324(Node_324->Kanan_324);
        }
    }
}

// Post-order traversal
void postOrder_324(Pohon *Node_324 = Root_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (Node_324 != NULL)
        {
            postOrder_324(Node_324->Kiri_324);
            postOrder_324(Node_324->Kanan_324);
            cout << " " << Node_324->Data_324 << ", ";
        }
    }
}

// Hapus tree secara rekursif
void deleteTree_324(Pohon *Node_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (Node_324 != NULL)
        {
            if (Node_324 != Root_324)
            {
                Node_324->Parent_324->Kiri_324 = NULL;
                Node_324->Parent_324->Kanan_324 = NULL;
            }
            deleteTree_324(Node_324->Kiri_324);
            deleteTree_324(Node_324->Kanan_324);
            if (Node_324 == Root_324)
            {
                delete Root_324;
                Root_324 = NULL;
            }
            else
            {
                delete Node_324;
            }
        }
    }
}

// Hapus subtree dari Node_324 tertentu
void deleteSub_324(Pohon *Node_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        deleteTree_324(Node_324->Kiri_324);
        deleteTree_324(Node_324->Kanan_324);
        cout << "\n[324] Node subtree " << Node_324->Data_324 << " berhasil dihapus." << endl;
    }
}

// Hapus seluruh tree
void clear_324()
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        deleteTree_324(Root_324);
        cout << "\n[324] Pohon berhasil dihapus." << endl;
    }
}

// Hitung size_324 tree
int size_324(Pohon *Node_324 = Root_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
        return 0;
    }
    else
    {
        if (!Node_324)
        {
            return 0;
        }
        else
            return size_324(Node_324->Kiri_324) + size_324(Node_324->Kanan_324) + 1;
    }
}

// Hitung height_324 tree
int height_324(Pohon *Node_324 = Root_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
        return 0;
    }
    else
    {
        if (!Node_324)
        {
            return 0;
        }
        else
        {
            int heightKiri = height_324(Node_324->Kiri_324);
            int heightKanan = height_324(Node_324->Kanan_324);
            if (heightKiri >= heightKanan)
            {
                return heightKiri + 1;
            }
            else
            {
                return heightKanan + 1;
            }
        }
    }
}

// Tampilkan karakteristik tree
void characteristic_324()
{
    cout << "\n>> Ukuran Tree : " << size_324() << endl;
    cout << ">> Tinggi Tree : " << height_324() << endl;
    cout << ">> Rata-rata Node di Tree : " << size_324() / height_324() << endl;
}

// Tampilkan child dan descendant dari Node_324 tertentu
void showChilAndDescendant_324(Pohon *Node_324)
{
    if (isEmpty_324())
    {
        cout << "\n[324] Buat tree terlebih dahulu!" << endl;
    }
    else if (!Node_324)
    {
        cout << "\n[324] Node yang ditunjuk tidak ada!" << endl;
    }
    else
    {
        // Tampilkan child
        cout << "\n[324] Node : " << Node_324->Data_324 << endl;
        if (Node_324->Kiri_324)
            cout << "[324] Child Kiri : " << Node_324->Kiri_324->Data_324 << endl;
        else
            cout << "[324] Child Kiri : (tidak punya Child kiri)" << endl;
        if (Node_324->Kanan_324)
            cout << "[324] Child Kanan : " << Node_324->Kanan_324->Data_324 << endl;
        else
            cout << "[324] Child Kanan : (tidak punya Child kanan)" << endl;

        // Tampilkan descendant
        cout << "[324] Descendant : ";
        queue<Pohon *> q_324;
        q_324.push(Node_324);
        bool first = true;
        while (!q_324.empty())
        {
            Pohon *current = q_324.front();
            q_324.pop();
            if (!first)
                cout << current->Data_324 << ", ";
            first = false;
            if (current->Kiri_324)
                q_324.push(current->Kiri_324);
            if (current->Kanan_324)
                q_324.push(current->Kanan_324);
        }
        cout << endl;
    }
}

int main()
{
    int Pilihan_324;
    char Data_324;
    Pohon *Node_324 = NULL;
    do
    {
        // Program Menu
        cout << "\n\n>>>>>>> PROGRAM MENU DATA TREE <<<<<<<:\n";
        cout << "1.  Buat Node Root\n";
        cout << "2.  Insert Kiri\n";
        cout << "3.  Insert Kanan\n";
        cout << "4.  Update Node\n";
        cout << "5.  Retrieve Node\n";
        cout << "6.  Cari Node\n";
        cout << "7.  Pre-order Traversal\n";
        cout << "8.  In-order Traversal\n";
        cout << "9.  Post-order Traversal\n";
        cout << "10. Hapus Tree\n";
        cout << "11. Hapus Subtree\n";
        cout << "12. Tampilkan Karakteristik Tree\n";
        cout << "13. Tampilkan Child dan Descendant\n";
        cout << "0.  Keluar\n";
        cout << ">> Pilih menu : ";
        cin >> Pilihan_324;
        switch (Pilihan_324)
        {
        case 1:
            cout << "\n<<<<<<< [1] Buat Node Root >>>>>>>" << endl;
            cout << ">> Masukkan data untuk root : ";
            cin >> Data_324;
            buatNode_324(Data_324);
            break;
        case 2:
            cout << "\n<<<<<<< [2] Insert Kiri >>>>>>>" << endl;
            if (isEmpty_324())
            {
                cout << "\n[324] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan data untuk node : ";
                cin >> Data_324;
                cout << ">> Masukkan parent data : ";
                char Parent_324Data;
                cin >> Parent_324Data;
                Node_324 = NULL;
                queue<Pohon *> q_324;
                q_324.push(Root_324);
                while (!q_324.empty())
                {
                    Pohon *current = q_324.front();
                    q_324.pop();
                    if (current->Data_324 == Parent_324Data)
                    {
                        Node_324 = current;
                        break;
                    }
                    if (current->Kiri_324)
                        q_324.push(current->Kiri_324);
                    if (current->Kanan_324)
                        q_324.push(current->Kanan_324);
                }
                if (Node_324)
                {
                    insertKiri_324(Data_324, Node_324);
                }
                else
                {
                    cout << "\n[324] Parent tidak ditemukan!" << endl;
                }
            }
            break;
        case 3:
            cout << "\n<<<<<<< [3] Insert Kanan >>>>>>>" << endl;
            if (isEmpty_324())
            {
                cout << "\n[324] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan data untuk node : ";
                cin >> Data_324;
                cout << ">> Masukkan parent data : ";
                char Parent_324Data;
                cin >> Parent_324Data;
                Node_324 = NULL;
                queue<Pohon *> q_324;
                q_324.push(Root_324);
                while (!q_324.empty())
                {
                    Pohon *current = q_324.front();
                    q_324.pop();
                    if (current->Data_324 == Parent_324Data)
                    {
                        Node_324 = current;
                        break;
                    }
                    if (current->Kiri_324)
                        q_324.push(current->Kiri_324);
                    if (current->Kanan_324)
                        q_324.push(current->Kanan_324);
                }
                if (Node_324)
                {
                    insertKanan_324(Data_324, Node_324);
                }
                else
                {
                    cout << "\n[324] Parent tidak ditemukan!" << endl;
                }
            }
            break;
        case 4:
            cout << "\n<<<<<<< [4] Update Node >>>>>>>" << endl;
            if (isEmpty_324())
            {
                cout << "\n[324] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan data baru : ";
                cin >> Data_324;
                cout << ">> Masukkan node data yang akan diupdate : ";
                char update_324Data;
                cin >> update_324Data;
                Node_324 = NULL;
                queue<Pohon *> q_324;
                q_324.push(Root_324);
                while (!q_324.empty())
                {
                    Pohon *current = q_324.front();
                    q_324.pop();
                    if (current->Data_324 == update_324Data)
                    {
                        Node_324 = current;
                        break;
                    }
                    if (current->Kiri_324)
                        q_324.push(current->Kiri_324);
                    if (current->Kanan_324)
                        q_324.push(current->Kanan_324);
                }
                if (Node_324)
                {
                    update_324(Data_324, Node_324);
                }
                else
                {
                    cout << "\n[324] Node tidak ditemukan!" << endl;
                }
            }
            break;
        case 5:
            cout << "\n<<<<<<< [5] Retrieve Node >>>>>>>" << endl;
            if (isEmpty_324())
            {
                cout << "\n[324] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan node data yang akan ditampilkan : ";
                char retrieve_324Data;
                cin >> retrieve_324Data;
                Node_324 = NULL;
                queue<Pohon *> q_324;
                q_324.push(Root_324);
                while (!q_324.empty())
                {
                    Pohon *current = q_324.front();
                    q_324.pop();
                    if (current->Data_324 == retrieve_324Data)
                    {
                        Node_324 = current;
                        break;
                    }
                    if (current->Kiri_324)
                        q_324.push(current->Kiri_324);
                    if (current->Kanan_324)
                        q_324.push(current->Kanan_324);
                }
                if (Node_324)
                {
                    retrieve_324(Node_324);
                }
                else
                {
                    cout << "\n[324] Node tidak ditemukan!" << endl;
                }
            }
            break;
        case 6:
            cout << "\n<<<<<<< [6] Cari Node >>>>>>>" << endl;
            if (isEmpty_324())
            {
                cout << "\n[324] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan node data yang akan ditemukan : ";
                char find_324Data;
                cin >> find_324Data;
                Node_324 = NULL;
                queue<Pohon *> q_324;
                q_324.push(Root_324);
                while (!q_324.empty())
                {
                    Pohon *current = q_324.front();
                    q_324.pop();
                    if (current->Data_324 == find_324Data)
                    {
                        Node_324 = current;
                        break;
                    }
                    if (current->Kiri_324)
                        q_324.push(current->Kiri_324);
                    if (current->Kanan_324)
                        q_324.push(current->Kanan_324);
                }
                if (Node_324)
                {
                    find_324(Node_324);
                }
                else
                {
                    cout << "\n[324] Node tidak ditemukan!" << endl;
                }
            }
            break;
        case 7:
            cout << "\n<<<<<<< [7] Pre-order Traversal >>>>>>>" << endl;
            cout << "\n>> Pre-order Traversal :" << endl;
            preOrder_324(Root_324);
            cout << "\n"
                 << endl;
            break;
        case 8:
            cout << "\n<<<<<<< [8] In-order Traversal >>>>>>>" << endl;
            cout << "\n>> In-order Traversal :" << endl;
            inOrder_324(Root_324);
            cout << "\n"
                 << endl;
            break;
        case 9:
            cout << "\n<<<<<<< [9] Post-order Traversal >>>>>>>" << endl;
            cout << "\n>> Post-order Traversal :" << endl;
            postOrder_324(Root_324);
            cout << "\n"
                 << endl;
            break;
        case 10:
            cout << "\n<<<<<<< [10] Hapus Tree >>>>>>>" << endl;
            clear_324();
            break;
        case 11:
            cout << "\n<<<<<<< [11] Hapus Subtree >>>>>>>" << endl;
            if (isEmpty_324())
            {
                cout << "\n[324] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan node data untuk subtree yang akan dihapus : ";
                char subTreeData;
                cin >> subTreeData;
                Node_324 = NULL;
                queue<Pohon *> q_324;
                q_324.push(Root_324);
                while (!q_324.empty())
                {
                    Pohon *current = q_324.front();
                    q_324.pop();
                    if (current->Data_324 == subTreeData)
                    {
                        Node_324 = current;
                        break;
                    }
                    if (current->Kiri_324)
                        q_324.push(current->Kiri_324);
                    if (current->Kanan_324)
                        q_324.push(current->Kanan_324);
                }
                if (Node_324)
                {
                    deleteSub_324(Node_324);
                }
                else
                {
                    cout << "\n[324] Node tidak ditemukan!" << endl;
                }
            }
            break;
        case 12:
            cout << "\n<<<<<<< [12] Tampilkan Karakteristik Tree >>>>>>>" << endl;
            characteristic_324();
            break;
        case 13:
            cout << "\n<<<<<<< [13] Tampilkan Child dan Descendant >>>>>>>" << endl;
            if (isEmpty_324())
            {
                cout << "\n[324] Buat tree terlebih dahulu!" << endl;
            }
            else
            {
                cout << ">> Masukkan node data yang akan ditampilkan : ";
                char childDescData_324;
                cin >> childDescData_324;
                Node_324 = NULL;
                queue<Pohon *> q_324;
                q_324.push(Root_324);
                while (!q_324.empty())
                {
                    Pohon *current = q_324.front();
                    q_324.pop();
                    if (current->Data_324 == childDescData_324)
                    {
                        Node_324 = current;
                        break;
                    }
                    if (current->Kiri_324)
                        q_324.push(current->Kiri_324);
                    if (current->Kanan_324)
                        q_324.push(current->Kanan_324);
                }
                if (Node_324)
                {
                    showChilAndDescendant_324(Node_324);
                }
                else
                {
                    cout << "\n[324] Node tidak ditemukan!" << endl;
                }
            }
            break;
        case 0:
            cout << "\n[324] Keluar dari program." << endl;
            break;
        default:
            cout << "\n[324] Pilihan tidak valid!" << endl;
        }
    } while (Pilihan_324 != 0);

    return 0; // Mengembalikan nilai 0 untuk menandakan program berakhir dengan sukses
}