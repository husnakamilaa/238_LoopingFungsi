#include <iostream>
using namespace std;

int main() 
{
    string pilihan;
    do 
    {
        cout << "Makan " << endl;
        cout << "Main game " << endl;
        cout << "Ibadah " << endl;

        cout << "Apakah anda masih hidup? (Yes/No)";
        cin >> pilihan;
        
    } while (pilihan == "Yes");

}