// NAMA : Dheva Dewa Septiantoni
// NIM : 2311102324

#include <iostream>
using namespace std;

const int maksimalQueue_324 = 5;

struct Node
{
    string data_324;
    Node *next_324;
};

class Queue
{
private:
    Node *front_324;
    Node *rear_324;

public:
    Queue()
    {
        front_324 = nullptr;
        rear_324 = nullptr;
    }

    void enqueue_324(const string &data_324)
    {
        Node *newNode_324 = new Node;
        newNode_324->data_324 = data_324;
        newNode_324->next_324 = nullptr;

        if (isEmpty_324())
        {
            front_324 = rear_324 = newNode_324;
        }
        else
        {
            rear_324->next_324 = newNode_324;
            rear_324 = newNode_324;
        }

        cout << ">> " << data_324 << " telah ditambahkan ke dalam antrian." << endl;
    }

    void dequeue_324()
    {
        if (isEmpty_324())
        {
            cout << "Antrian kosong." << endl;
            return;
        }

        Node *temp_324 = front_324;
        front_324 = front_324->next_324;

        cout << ">> " << temp_324->data_324 << " telah dihapus dari antrian." << endl;
        delete temp_324;

        if (front_324 == nullptr)
        {
            rear_324 = nullptr;
        }
    }

    void displayQueue_324()
    {
        if (isEmpty_324())
        {
            cout << "Data Antrian :" << endl;
            for (int i_324 = 0; i_324 < maksimalQueue_324; i_324++)
            {
                cout << i_324 + 1 << ". (kosong)" << endl;
            }
        }
        else
        {
            cout << "Data Antrian :" << endl;
            Node *current_324 = front_324;
            int i_324 = 1;
            while (current_324 != nullptr)
            {
                cout << i_324 << ". " << current_324->data_324 << endl;
                current_324 = current_324->next_324;
                i_324++;
            }
            for (; i_324 <= maksimalQueue_324; i_324++)
            {
                cout << i_324 << ". (kosong)" << endl;
            }
        }
    }

    bool isEmpty_324()
    {
        return front_324 == nullptr;
    }

    int countQueue_324()
    {
        int count = 0;
        Node *current_324 = front_324;
        while (current_324 != nullptr)
        {
            count++;
            current_324 = current_324->next_324;
        }
        return count;
    }

    void clearQueue_324()
    {
        while (!isEmpty_324())
        {
            dequeue_324();
        }
        cout << "Antrian telah dibersihkan." << endl;
    }
};

int main()
{
    Queue queue;
    queue.enqueue_324("Dheva Dewa Septiantoni");
    queue.enqueue_324("Cristiano Ronaldo");
    queue.enqueue_324("Jude Bellingham");
    queue.displayQueue_324();
    cout << "Jumlah Antrian = " << queue.countQueue_324() << endl;
    queue.dequeue_324();
    queue.displayQueue_324();
    cout << "Jumlah Antrian = " << queue.countQueue_324() << endl;
    queue.dequeue_324();
    queue.displayQueue_324();
    cout << "Jumlah Antrian = " << queue.countQueue_324() << endl;

    return 0;
}