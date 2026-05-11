#ifndef IBU_H
#define IBU_H
#include <vector>

class ibu {
public:
    string nama;
    vector<anak*> daftar_anak;

    void tambahAnak(anak*);
    void cetakAnak();
};

// Masukkan ini ke dalam class ibu di bawah daftar_anak
    ibu(string pNama) :nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    }
    ~ibu() {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }