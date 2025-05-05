#include <iostream>
using namespace std;

class mahasiswa 
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;

    }

};
int main()
{
    mahasiswa mhs; // Object mhs
    mhs.nim = 2024;
    mhs.showNim(); // Member Access operator

    mahasiswa &refMhs = mhs; // Pointer references refMhs
    refMhs.nim = 2; // Member access operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; // pointer Dereference pMhs
    pMhs ->nim = 3; // Arrow Operator
    pMhs ->showNim();
    return 0;
}