#include <iostream>

using namespace std;

void kd_matkul(){
    string kd_matkul;
    cout << "Masukan Kode Mata Kuliah : ";
    getline(cin, kd_matkul);
    cout << "Kode Mata Kuliah : " << kd_matkul << endl;
};

void nama_matkul(){
    string nama_matkul;
    cout << "Masukan Nama Mata Kuliah : ";
    cin>>nama_matkul;
    cout << "Nama Mata Kuliah : " << nama_matkul << endl;
};

int main(){
    kd_matkul();
    nama_matkul();
   return 0;
}

