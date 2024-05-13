#inclaude <iostream>
using namespace std;

class mahasiswa
 {
public:
    static int nim;
    int id;
    string nama;

    void setId();

    void printAll();
    mahasiswa(string pnama):nama(pnama)
    {
        setId();
    }
};

int mahasiswa::nim = 20;
