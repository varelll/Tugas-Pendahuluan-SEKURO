// Program Tugas Pendahuluan Modul 2 Online Learning
// Varel Tiara - 19623183
// Soal Nomor 2
// Deskripsi : Membuat fungsi dengan nama luas yang memiliki parameter 1 buah float yaitu r. Keluaran dari fungsi adalah luas lingkaran dengan radius r.


#include <iostream>
using namespace std;

#define phi 3.14
float luas(float r) {
  return phi*r*r;
}

int main() {
    cout<<luas(3)<<endl;
    cout<<luas(5.5)<<endl; 
    return 0;
}

