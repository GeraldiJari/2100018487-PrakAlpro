#include <iostream>
#include <string.h>
#include <math.h>
//Nama: Geraldi Jari Assaji
//Kelas J
//Nim : 2100018487
using namespace std;
	
int oppenambahan(int angka1,int angka2){
	int tambah = angka1 + angka2;
	return tambah;
}
int oppengurangan(int angka1,int angka2){
	int kurang = angka1 - angka2;
	return kurang;
}
int opperkalian(int angka1,int angka2){
	int kali = angka1 * angka2;
	return kali;
}
float oppembagian(float angka1,float angka2){
	float bagi = angka1 / angka2;
	return bagi;
}
int oppangkat(int angka1, int angka2){ //pangkat

	return pow(angka1,angka2);
}
float opakar(int akar){
	
	return sqrt(akar);
}

int main(){
    char nama [50];
    int i;
    int pilih, angka1, angka2, akar;

    cout<<"Masukkan Nama Anda: ";gets(nama);
    cout<<"Tekan Sembarang Untuk Lanjut"<<endl;
    system("pause");
    
    kalkulator:
    	system("cls");
    	cout<<"User: "<<nama<<endl;
    	cout<<"<<KALKULATOR SEDERHANA>>"<<endl;
    	cout<<"1. Untuk Penjumlahan"<<endl;
		cout<<"2. Untuk Pengurangan"<<endl;
		cout<<"3. Untuk Perkalian"<<endl;
		cout<<"4. Untuk Pembagian"<<endl;
		cout<<"5. Untuk Pangkat"<<endl;
		cout<<"6. Untuk Akar"<<endl;
		cout<<"7. Keluar"<<endl;
		cout<<"Masukkan Pilihan: ";cin>>pilih;
		
		switch (pilih){
			case 1:
				system("cls");
				cout<<"Masukkan Angka Pertama: ";cin>>angka1;
				cout<<"Masukkan Angka Kedua: ";cin>>angka2;
				cout<<angka1<<" + "<<angka2<<" = "<<oppenambahan(angka1,angka2);
				cout<<"\nTekan Sembarang Untuk Kembali"<<endl;
				system("pause");
				goto kalkulator;
			case 2:
				system("cls");
				cout<<"Masukkan Angka Pertama: ";cin>>angka1;
				cout<<"Masukkan Angka Kedua: ";cin>>angka2;
				cout<<angka1<<" - "<<angka2<<" ="<<oppengurangan(angka1,angka2);
				cout<<"\nTekan Sembarang Untuk Kembali"<<endl;
				system("pause");
				goto kalkulator;
			case 3:
				system("cls");
				cout<<"Masukkan Angka Pertama: ";cin>>angka1;
				cout<<"Masukkan Angka Kedua: ";cin>>angka2;
				cout<<angka1<<" x "<<angka2<<" = "<<opperkalian(angka1,angka2);
				cout<<"\nTekan Sembarang Untuk Kembali"<<endl;
				system("pause");
				goto kalkulator;
			case 4:
				system("cls");
				cout<<"Masukkan Angka Pertama: ";cin>>angka1;
				cout<<"Masukkan Angka Kedua: ";cin>>angka2;
				cout<<angka1<<" : "<<angka2<<" = "<<oppembagian(angka1,angka2);
				cout<<"\nTekan Sembarang Untuk Kembali"<<endl;
				system("pause");
				goto kalkulator;
			case 5:
				system("cls");
				cout<<"Masukkan Angka Pertama: ";cin>>angka1;
				cout<<"Masukkan Angka Kedua: ";cin>>angka2;
				cout<<angka1<<" ^ "<<angka2<<" = "<<oppangkat(angka1,angka2);
				cout<<"\nTekan Sembarang Untuk Kembali"<<endl;
				system("pause");
				goto kalkulator;
			case 6:
				system("cls");
				cout<<"Masukkan Angka Pertama: ";cin>>akar;
				cout<<"Akar dari "<<akar<<" = "<<opakar(akar);
				cout<<"\nTekan Sembarang Untuk Kembali"<<endl;
				system("pause");
				goto kalkulator;
			case 7:
				system("cls");
				cout<<"Terima Kasih, Arigatogozaimasu:)"<<endl;
				break;
			default:
				cout<<"Anda salah menginputkan!!!";
			    system("pause");
			    goto kalkulator;
			    
		}
}

