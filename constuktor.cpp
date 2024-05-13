#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
    int nim;
    string nama;

    Mahasiswa()
    {
        nim = 0;
        nama = "";
    };
    Mahasiswa(int iNim)
    {
        nim = iNim;
    };
    Mahasiswa(string);
    Mahasiswa(int INim, string INama);
    void cetak();
};

Mahasiswa::Mahasiswa(string iNama){
    nama = iNama;
}

Mahasiswa::Mahasiswa(int iNim,string iNama)
{
    nim = iNim;
    nama = iNama;
};

void Mahasiswa::cetak(){
    cout << " Nim    = " << nim << endl;
    cout << " Nama   = " << nama << endl; 
    cout << endl;
}


