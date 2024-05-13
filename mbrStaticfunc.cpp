#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    static int nim;

public:
    int id;
    string nama;

    void setId();
    void printAll();

    static void setNim(int pNim) { nim = pNim; }
    static int getNim() { return nim; }

    mahasiswa (string pnama):nama(pnama)
    {
        setId();
    }
};

int mahasiswa::nim = 100;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << " ID     = " << id << endl;
    cout << " nama   = " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Sri Dadi");
    mahasiswa mhs1("Budi Jatmiko");

    mahasiswa::setNim(9); // memaksa nim melalui static member function "setNim" 
    mahasiswa mhs1("Andi Janu");
    mahasiswa mhs1("Joko Wahono");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar object = " << mahasiswa::getNim() << endl; // mengakses nim

    return 0;
}