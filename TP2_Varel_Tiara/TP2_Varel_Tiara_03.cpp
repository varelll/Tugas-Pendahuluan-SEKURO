// Program Tugas Pendahuluan Modul 2 Online Learning
// Varel Tiara - 19623183
// Soal Nomor 3
// Deskripsi : Menjelaskan mengapa keluaran seperti itu untuk setiap cout

#include <iostream>
using namespace std;

int main(){
  int a = 10;
  int b = 20;
  int* pa = &a;
  int* pb = &b;
  int** ppa = &pa;
  int** ppb = &pb;
  // Asumsikan address dari a adalah 0x111111
  // Asumsikan address dari b adalah 0x222222
  // Asumsikan address dari pa adalah 0x333333
  // Asumsikan address dari pb adalah 0x444444
  cout<<a<<endl; // cout<<a<<endl; : Menampilkan nilai variabel a, yaitu 10.
  cout<<&a<<endl; // cout<<&a<<endl; : Menampilkan alamat dari variabel a, yaitu 0x111111.
  cout<<pb<<endl; // cout<<pb<<endl; : Menampilkan alamat yang ditunjuk oleh pointer pb (alamat dari variabel b), yaitu 0x222222.
  cout<<ppa<<endl; // cout<<ppa<<endl; : Menampilkan alamat yang ditunjuk oleh pointer ke pointer ppa (alamat dari pointer pa), yaitu 0x333333.
  cout<<*pa<<endl;  // cout<<*pa<<endl; : Mengambil nilai yang ditunjuk oleh pointer pa (nilai dari a), yaitu 10.
  cout<<*ppb<<endl; // cout<<*ppb<<endl; : Mengambil nilai yang ditunjuk oleh pointer ke pointer ppb (alamat dari b), yaitu 0x444444.
  cout<<**ppa<<endl; // cout<<**ppa<<endl; : Mengambil nilai yang ditunjuk oleh pointer ke pointer ppa yang menunjuk ke pa yang menunjuk ke a, yaitu 10.
  cout<<*pb * **ppb<<endl; // cout<<*pb * **ppb<<endl; : Mencetak hasil perkalian isi alamat yang ditunjuk oleh variabel pb dengan isi alamat yang ditunjuk oleh alamat yang ditunjuk oleh variabel pb. Karena isi alamat yang ditunjuk oleh variabel pb adalah 0x444444 (20 di bilangan desimal) dan isi alamat yang ditunjuk oleh alamat yang ditunjuk oleh variabel pb adalah 0x444444 (20 di bilangan desimal), maka 20 * 20 = 400.
}








