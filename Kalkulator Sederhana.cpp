#include<bits/stdc++.h>

using namespace std;

double bil_1, bil_2, atas, bawah, hasil;
int pilihan, derajat, n;

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

void integral (int derajat, double atas, double bawah, int n) {
	
	double a[1000];
	cout<<"Integral hanya menerima fungsi polinomial\n"<<endl;
	cout<<"Masukkan derajat polinomial"<<endl;
	cin>>derajat;
	for (int i=0; i<=derajat; i++) {
		cout<<"Masukkan koefisien suku X pangkat "<<derajat - i<<endl;
		cin>>a[i];
	}
	
	cout<<"Masukkan batas bawah: "<<endl;
	cin>>bawah;
	cout<<"Masukkan batas atas: "<<endl;
	cin>>atas;
	cout<<"Masukkan nilai n (partisi): "<<endl;
	cin>>n;
	
	double h = (atas-bawah)/n;
	double y = 0;
	for (int j=1; j<n; j++) {
		double x = bawah + (j*h);
		for (int k=0; k<=derajat; k++) {
			int p = 0;
			double temp1 = 1;
			while (p < (derajat-k)) {
				temp1 *= x;
				p++;
			}
		double suku_1 = a[k]*(temp1);
		y += suku_1;
		
		}
	}
	hasil = (2*y);
	
	for (int l=0; l<=derajat; l++) {
		int q = 0;
		double temp2 = 1;
		while (q < (derajat-l)) {
			temp2 *= bawah;
			q++;
		}
		double suku_2 = a[l]*(temp2);
		hasil += suku_2;
	}
	
	for (int m=0; m<=derajat; m++) {
		int r = 0;
		double temp3 = 1;
		while (r < (derajat-m)) {
			temp3 *= atas;
			r++;
		}
		double suku_3 = a[m]*(temp3);
		hasil += suku_3;
	}
	
	hasil = hasil*h/2;
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
			integral(derajat, atas, bawah, n);
			cout<<endl;
			cout<<"Hasil : "<<hasil<<endl;
			break;
		
		default :
			cout<<"Pilihan tidak tersedia"<<endl;
			break;
	}
		
	return 0;
}
