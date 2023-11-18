// Program Tugas Pendahuluan Modul 2 Online Learning
// Varel Tiara - 19623183
// Soal Nomor 1
// Deskripsi : Membuat program yang terdapat 2 buah array of integer dengan size 10 (arr dan arr2). Input dari user adalah nilai dari kedua array tersebut dan outputnya adalah jumlah dari arr dan arr2.
#include <iostream>
using namespace std;


int main() {
    int arr[10];
    cout << "INPUT" << endl;
    // Looping input arr
    for(int i=0;i<10;i++){
      cin>>arr[i];
    }
    int arr2[10];
    // Looping input arr2
    for(int i=0;i<10;i++){
      cin>>arr2[i];
    }
    cout << "OUTPUT" << endl;
    for(int i=0;i<10;i++){
      cout << arr[i]+arr2[i] << " ";
    }
    cout << endl;
    return 0;
}