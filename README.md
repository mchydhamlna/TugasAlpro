# TugasAlpro
Moch Yudha Maulana - 2C1230001
Agribisnis - 2023

## Tugas 1
Buatkan flowchart, pseudocode, dan program untuk permasalahan berikut,
Seorang pengguna di warnet mulai mengakses internet pada waktu A1 dan berakhir pada waktu A2. Jika tarif penggunaan internet di warnet tersebut adalah Rp5000,- per jam, program billing warnet dapat dibuat untuk menghitung durasi penggunaan (dalam jam, menit, dan detik) dan biaya total yang harus dibayar oleh pengguna.

## Flowchart
Deskripsi :

<img width="408" alt="Screenshot 2024-01-22 233206" src="https://github.com/nalesyn/TugasAlpro/assets/144500877/d21d7e4a-b5ac-400d-9865-d62fc61e4c80">

Flowchart :

<img width="374" alt="Screenshot 2024-01-22 233115" src="https://github.com/nalesyn/TugasAlpro/assets/144500877/8b87f1c9-ea77-4f8b-92c8-75b8366dbf5f">


## Pseudocode

<img width="394" alt="Screenshot 2024-01-22 233325" src="https://github.com/nalesyn/TugasAlpro/assets/144500877/46ee4aee-8370-4ce6-92de-c79668643a1d">


## Program
```c++
#include <iostream>

using namespace std;
int main()
{
	char nama[40],x;
	int nocom,jam1,mnt1,dtk1,jam2,mnt2,dtk2,jmldtk,totalbayar;
	int tarif=5000;
	
	cout <<endl;
	cout <<"----------- Warnet KKB Ikopin ---------- \n";
        cout <<"------------------------------------------ \n";
        cout << endl;
	
	cout<<"=========================================="<<endl;
	cout<<"No Komputer : ";cin>>nocom;
	cout<<"Nama Pelanggan : ";cin>>nama;
	cout<<"=========================================="<<endl;
	cout << endl;
	 
	cout <<"------------------ JAM MULAI ----------------- \n";
	cout<<"Jam Mulai     : ";cin>>jam1;
	cout<<"Menit Mulai   : ";cin>>mnt1;
	cout<<"Detik Mulai   : ";cin>>dtk1;
	cout<<"=========================================="<<endl;
	cout << endl;
	
	cout <<"----------------- JAM SELESAI ---------------- \n";
	cout<<"Jam Selesai   : ";cin>>jam2;
	cout<<"Menit Selesai : ";cin>>mnt2;
	cout<<"Detik Selesai : ";cin>>dtk2;
	cout<<"=========================================="<<endl;
	cout<<endl;
	
	jmldtk = ((jam2-jam1)*3600) + ((mnt2-mnt1)*60) + (dtk2-dtk1);
	totalbayar = jmldtk * tarif / 3600;
	
	cout<<"----------- Warnet KKB Ikopin ---------- \n"<<endl;
	cout<<"No Komputer     : "<<nocom<<endl;
	cout<<"Nama Pelanggan  : "<<nama<<endl;
	cout<<"Lama Penggunaan : "<<(jam2-jam1)<< "Jam" <<(mnt2-mnt1)<< "Menit" <<(dtk2-dtk1)<< "Detik" <<endl;
	cout<<"Total Bayar     : Rp."<<totalbayar<<endl;
	cout<<"=========================================="<<endl;
}
```
## Capture hasil running program

<img width="443" alt="Screenshot 2024-01-22 232731" src="https://github.com/nalesyn/TugasAlpro/assets/144500877/e1f7c78f-aee7-4872-9ad2-3087ceb25633">
