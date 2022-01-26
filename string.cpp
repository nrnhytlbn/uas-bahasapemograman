#include <iostream>
#include <string>

using namespace std;

int main (){
	string kd_matkul;
	string nama_matkul;
	
	cout<<"Masukan Data : "<<endl<<endl;
	cout<<"Kode Mata Kuliah : ";
	getline (cin, kd_matkul); 
	 
	cout<<"Nama Mata Kuliah : ";
	getline (cin, nama_matkul); 

	
	cout<<endl;
	cout<<"DATA MATA KULIAH"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"Kode Mata Kuliah        : "<<kd_matkul<<endl;
    cout<<"Alamat Kode Mata Kuliah : "<<&kd_matkul<<endl;
	cout<<"Nama Mata Kuliah        : "<<nama_matkul<<endl;
    cout<<"Alamat Nama Mata Kuliah : "<<&nama_matkul<<endl;

}

