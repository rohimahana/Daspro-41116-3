/*
Nama : Rohima Choirul Hana
Nim : A11.2022.14603
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    //printf("Teks\n");

    int u; //deklarasi
    u = 18; //assign

    float t = 162.5; //inisialisasi
    char ub = 'L';
    string ubs = "XL";

    cout << "Umur saya: " << u;
    cout << endl;
    cout << "Tinggi saya: " << t;
    cout << endl;
    cout << "Ukuran baju: " << ub;
    cout << endl;
    cout << "Ukuran baju saya: " << ubs;

    int a;
    cout << "\nMasukkan angka: ";
    cin >> a;
    cout << "Angka anda: " << a + u;

    return 0;
}
