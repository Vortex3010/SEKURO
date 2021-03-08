#include<bits/stdc++.h>

using namespace std;

double batas_atas, batas_bawah, bil_1, bil_2, atas, bawah, h, hasil;
int pilihan;

void tambah (double bil_1, double bil_2) {
	cout<<"Masukkan bilangan pertama: "<<endl;
	cin>>bil_1;
	cout<<"Masukkan bilangan kedua: "<<endl;
	cin>>bil_2;
	hasil = bil_1 + bil_2;
}

void kurang (double bil_1, double bil_2) {
	cout<<"Masukkan bilangan pertama: "<<endl;
	cin>>bil_1;
	cout<<"Masukkan bilangan kedua: "<<endl;
	cin>>bil_2;
	hasil = bil_1 - bil_2;
}

void kali (double bil_1, double bil_2) {
	cout<<"Masukkan bilangan pertama: "<<endl;
	cin>>bil_1;
	cout<<"Masukkan bilangan kedua: "<<endl;
	cin>>bil_2;
	hasil = bil_1 * bil_2;
}

void bagi (double bil_1, double bil_2) {
	cout<<"Masukkan bilangan pertama: "<<endl;
	cin>>bil_1;
	cout<<"Masukkan bilangan kedua: "<<endl;
	cin>>bil_2;
	hasil = bil_1/bil_2;
}

void pangkat (int basis, int pangkat) {
	cout<<"Masukkan bilangan basis: "<<endl;
	cin>>basis;
	cout<<"Masukkan bilangan pangkat: "<<endl;
	cin>>pangkat;
	int i = 0;
	hasil = 1;
	while (i != pangkat) {
		hasil = hasil * basis;
		i++;
	}
}

void integral (float atas, float bawah, float h) {
	int r;
	float f, f1, turunan;
}

int main () {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	cout<<"SELAMAT DATANG\n\n";
	cout<<"Pilih menu dibawah ini dengan mengetik kode angka sesuai yang kamu butuhkan: \n";
	cout<<"[1] Penjumlahan\n";
	cout<<"[2] Pengurangan\n";
	cout<<"[3] Perkalian\n";
	cout<<"[4] Pembagian\n";
	cout<<"[5] Perpangkatan (pangkat>1)\n";
	cout<<"[6] Integral\n\n";
	cout<<"Masukkan pilihan anda: "<<endl;
	
	cin>>pilihan;
	
	switch(pilihan) {
		case 1 :
			tambah(bil_1, bil_2);
			cout<<endl;
			cout<<"Hasil : "<<hasil<<endl;
			break;
		
		case 2 :
			kurang(bil_1, bil_2);
			cout<<endl;
			cout<<"Hasil : "<<hasil<<endl;
			break;
		
		case 3 :
			kali(bil_1, bil_2);
			cout<<endl;
			cout<<"Hasil : "<<hasil<<endl;
			break;
		
		case 4 :
			bagi(bil_1, bil_2);
			cout<<endl;
			cout<<"Hasil : "<<hasil<<endl;
			break;
			
		case 5 :
			pangkat(bil_1, bil_2);
			cout<<endl;
			cout<<"Hasil : "<<hasil<<endl;
			break;
			
		case 6 :
			integral(atas, bawah, h);
			cout<<endl;
			cout<<"Hasil : "<<hasil<<endl;
			break;
		
		default :
			cout<<"Pilihan tidak tersedia"<<endl;
			break;
	}
	
	return 0;
}

