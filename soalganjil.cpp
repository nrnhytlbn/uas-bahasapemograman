#include<iostream>
#include<fstream>

using namespace std;

void create(){
    string matkul;
    ofstream txt;
    txt.open("soalganjil.txt", ios::app);
    cout<<"Masukkan Mata Kuliah :";
    cin>>matkul;
    txt<<matkul;
    txt<<endl;
    txt.close();
}
void read(){
    string matkul;
    ifstream txt ("soalganjil.txt");
    if(txt.is_open()){
        while(! txt.eof()){
            getline(txt, matkul);
            cout<<matkul<<endl;
            cout<<endl;
        }
    } 
}
int main(){
    int pil;
    main:
    cout<<"Pilihan Menu"<<endl;
    cout<<"1. Create"<<endl;
    cout<<"2. Read"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Masukkan Pilihan :";
    cin>>pil;
    switch(pil){
        case 1:
            create();
            goto main;            
            break;
        case 2:
            read();
            goto main;
            break;
        case 3:
            return 0;
    }
}
