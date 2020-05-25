#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;

void menuutama();

struct datamenu{
	
	int pil;
	int masukan;
	
}; datamenu pilih;

struct datamobil{
	
	string pabrikan;
	double tahunP;
	string jenis;
	string model;
	double kapasitasSilinder;
	int harga;
	int stok;
	
}; datamobil data[30];

void menu1(){
	
	cout<<"Banyak data Mobil yang ingin di masukan [max 30]: "; 
	cin>>pilih.masukan;
	
	system("CLS");
	
	for(int i=0; i<pilih.masukan; i++){
		cout<<"Masukan Data Mobil ke-"<<i+1;
		cout<<"\n======================"<<endl<<endl;
		
		cout<<"Nama Produsen Mobil   : "; cin>>data[i].pabrikan;
		cout<<"Tahun Pembuatan Mobil : "; cin>>data[i].tahunP;
		cout<<"Jenis Mobil           : "; cin>>data[i].jenis;
		cout<<"Kapasitas Silinder/CC : "; cin>>data[i].kapasitasSilinder;
		cout<<"Harga Mobil           : "; cin>>data[i].harga;
		cout<<"Jumlah Mobil yang ada : "; cin>>data[i].stok;
		
		system("CLS");
	} 
	
	menuutama();
}

void menu2(){
	char pilih1, pilih2;
	
	for(int i=0; i<pilih.masukan; i++){
		cout<<"Data Mobil ke-"<<i+1;
		cout<<"\n======================"<<endl<<endl;
		
		cout<<"Nama Produsen Mobil   : "<<data[i].pabrikan;
		cout<<"\nTahun Pembuatan Mobil : "<<data[i].tahunP;
		cout<<"\nJenis Mobil           : "<<data[i].jenis;
		cout<<"\nKapasitas Silinder/CC : "<<data[i].kapasitasSilinder<<" CC";
		cout<<"\nHarga Mobil           : Rp."<<data[i].harga;
		cout<<"\nJumlah Mobil yang ada : "<<data[i].stok<<" Mobil";
		
		cout<<endl<<endl;
	}
	
	cout<<"\n\nIni adalah data mobil saat ini, kembali ke menu? [y/t] : "; cin>>pilih1;
		if(pilih1=='y' || pilih1=='Y'){
			system("CLS");
			menuutama();
		} else {
			system("CLS");
			cout<<"Ingin keluar atau kembali ke menu? [K/M] : "; cin>>pilih2;
				if(pilih2=='M' || pilih2=='m'){
					system("CLS");
					menuutama();
				} else {
					exit(0);
				}
		}
}

void menu3(){
	int Ubah, U;
	char pilih1, pilih2;
	
	cout<<"Data Keberapa yang ingin di ubah : "; cin>>Ubah;
	
	U = Ubah-1;
	
	system("CLS");
		cout<<"Nama Produsen Mobil   : "; cin>>data[U].pabrikan;
		cout<<"Tahun Pembuatan Mobil : "; cin>>data[U].tahunP;
		cout<<"Jenis Mobil           : "; cin>>data[U].jenis;
		cout<<"Kapasitas Silinder/CC : "; cin>>data[U].kapasitasSilinder;
		cout<<"Harga Mobil           : "; cin>>data[U].harga;
		cout<<"Jumlah Mobil yang ada : "; cin>>data[U].stok;
		
		cout<<"\n\nANDA BERHASIL MENGUBAH DATA MOBIL!";
		
		cout<<"\n\nIni adalah data mobil saat ini, kembali ke menu? [y/t] : "; cin>>pilih1;
	if(pilih1=='y' || pilih1=='Y'){
		system("CLS");
		menuutama();
	} else {
		system("CLS");
	cout<<"Ingin keluar atau kembali ke menu? [K/M] : "; cin>>pilih2;
	if(pilih2=='M' || pilih2=='m'){
		system("CLS");
		menuutama();
		} else {
			exit(0);
		}
	}
}

void menuutama(){
	int A = pilih.pil;
	
	cout<<"IASS - CAR MANEGEMENT APP\n";
	cout<<"----------------------------\n\n";
	cout<<"1. Tambah Data Mobil\n";
	cout<<"2. Tampilkan Data Mobil\n";
	cout<<"3. Ubah Data Mobil\n";
	cout<<"4. Hapus Data Mobil\n";
	cout<<"5. Cari Jenis Mobil\n";
	cout<<"6. Urutkan Harga Mobil (Terendah-Terbesar)";
	cout<<"\n\nSILAKAN PILIH MENU : "; cin>>A;
	
		if(A==1){
			system("CLS");
			menu1();
		} else if(A==2){
			system("CLS");
			menu2();
		} else if(A==3){
			system("CLS");
			menu3();
		}
	
}

int main(){

	menuutama();
	
}
