// Program Tugas Pendahuluan Modul 2 Online Learning
// Varel Tiara - 19623183
// Soal Bonus
// Deskripsi : Membuat fungsi yang memiliki hanya 1 parameter yaitu Array of Integer yang tidak diketahui ukurannya dan mengembalikan nilai yaitu jumlah dari setiap elemen dari array tersebut.

#include <iostream>
using namespace std;

int jumlah(int arr[], int N) {
    int total = 0; // iinisialisasi nilai dari total yaitu 0
    for (int i = 0; i < N; ++i) { 
        total += arr[i]; // variabel lokal total akan menambah masing-masing angka dalam array
    } // i hingga ukuran dari array yang tidak diketahui
    return total; // mengembalikan nilai dari jumlah setiap elemen dari array tersebut
}

int main(){
  int N; cin>>N; // input nilai dari ukuran array
  int arr[N]; 
  for(int i=0;i<N;i++) {
    cin>>arr[i];
  } // input masing-masing angka dalam array
  cout<<jumlah(arr,N)<<endl; // mengambil fungsi jumlah dengan mengirimkan ukuran array
}

