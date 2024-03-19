#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNB, nCompass, nNike;
int hAdidas = 300, hNB = 250, hPuma = 150, hNike = 350;

void input()
{
    cout << "Masukkan jumllah Adidas = ";
    cin >> nAdidas;

    cout << "Masukkan jumllah Puma = ";
    cin >> nPuma;

    cout << "Masukkan jumllah New Balance = ";
    cin >> nNB;

    cout << "Masukkan jumllah Compass = ";
    cin >> nCompass;

    cout << "Masukkan jumllah Nike = ";
    cin >> nNike;
}

int totalHarga() 
{
    return (nAdidas * hAdidas) + (nPuma * hPuma) + (nNB * hNB) + (nNike * hNike);
}

void Display() {
    cout << endl;
    cout << "=================" << endl;
    cout << endl;
    cout << "Jumlah puma = " << nPuma << endl;
    cout << "Jumlah adidas = " << nAdidas << endl;
    cout << endl;
    cout << "Total Harga = Rp. " << totalHarga() << endl;
}

int main()
{
    input();
    Display();
}