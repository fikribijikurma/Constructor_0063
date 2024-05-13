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

int main()
{
    Mahasiswa mhs1;
    Mahasiswa mhs2(20);
    Mahasiswa mhs3("Fikri");
    Mahasiswa mhs4(30, "Fikri");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    return 0;
}


