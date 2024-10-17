#include <iostream>
#include <string>

using namespace std;

// Struktur untuk menyimpan data tokoh mahasiswa
struct TokohMahasiswa {
    int NIM;
    string Nama;
    string NomorHP;
    string Organisasi;
};

int main() {
    int isiBuku = 5;  // Maksimum 5 tokoh dalam buku telepon
    TokohMahasiswa bukuTelepon[isiBuku];

    // Mengisi data tokoh-tokoh dalam buku telepon
    bukuTelepon[0] = {1234, "Syafira", "0812341", "BEMU"};
    bukuTelepon[1] = {5678, "Salsabila", "0815678", "BEMU"};
    bukuTelepon[2] = {9123, "Jesen", "0819123", "BEMF"};
    bukuTelepon[3] = {4567, "Alvin", "0814567", "HIMA"};
    bukuTelepon[4] = {7890, "Namima", "0817890", "UKM"};

    int cariNIM;
    cout << "Masukkan NIM yang ingin dicari: ";
    cin >> cariNIM;

    bool ditemukan = false;

    // Mencari data berdasarkan NIM
    for (int i = 0; i < isiBuku; i++) {
        if (bukuTelepon[i].NIM == cariNIM) {
            cout << "Data ditemukan:" << endl;
            cout << "NIM: " << bukuTelepon[i].NIM << endl;
            cout << "Nama: " << bukuTelepon[i].Nama << endl;
            cout << "Nomor HP: " << bukuTelepon[i].NomorHP << endl;
            cout << "Organisasi: " << bukuTelepon[i].Organisasi << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Data dengan NIM " << cariNIM << " tidak ditemukan." << endl;
    }

    return 0;
}