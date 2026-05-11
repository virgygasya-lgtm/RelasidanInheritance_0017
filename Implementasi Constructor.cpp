#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {
public:
    string name;
    jantung varJantung;

};
#endif

// Masukkan ke dalam public class manusia
    manusia(string pName)
        : name(pName) {
        cout << name << " hidup\n";
    }