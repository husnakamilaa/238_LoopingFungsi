#include <iostream>
using namespace std;

int main()
{
    int i;
    string nama[5];

    for (i = 7; i > 0; i--) {
        cout << i << "." << "TI UMY kelas E" << endl; 
    }
    
    for (i = 0; i < 5; i++) {
        cout << "Masukkan nama = ";
        cin >> nama[i];
    }

    cout << endl;
    cout << "=================" << endl;
    cout << "Kumpulan nama-nama" << endl;

    for (i = 0; i < 5; i++) {
        cout << "Namanya adalah : " << nama[i] << endl;
    }
}